  %{

#include "Table_des_symboles.h"

#include <stdio.h>
#include <stdlib.h>

    
extern int yylex();
extern int yyparse();

void yyerror (char* s) {
  printf ("Erreur: %s\n",s);
  exit(0);
  }
		
int depth=-1; // block depth
int offset_value =0;
int args_number =0;
int params_offset = -2;
  char * start_main=  
"int main() {\n\
/* Starting (main) program target PCode */\n";
    
  char * end_main=  
"\n\
/* Stoping (main) program target PCode */\n\
return stack[sp-1].int_value;\n\
}\n";  



 
%}

%union { 
  struct ATTRIBUTE * symbol_value;
  char * string_value;
  int int_value;
  float float_value;
  int type_value;
  int label_value;
  int offset_value;
}

%token <int_value> NUM 
%token <float_value> DEC

%token PRG FUN VAR BIN BOUT AFF CLN DOT

%token INT FLOAT VOID

%token <string_value> ID
%token PO PF PV VIR
%token <label_value> IF ELSE WHILE

%token <label_value> AND OR NOT DIFF EQUAL SUP INF
%token PLUS MOINS STAR DIV
%token ARR

%nonassoc IFX
%left OR                       // higher priority on ||
%left AND                      // higher priority on &&
%left DIFF EQUAL SUP INF       // higher priority on comparison
%left PLUS MOINS               // higher priority on + - 
%left STAR DIV                 // higher priority on * /
%left DOT ARR                  // higher priority on . and -> 
%nonassoc UNA                  // highest priority on unary operator
%nonassoc ELSE


%{
char * type2string (int c) {
  switch (c)
    {
    case INT:
      return("int");
    case FLOAT:
      return("float");
    case VOID:
      return("void");
    default:
      return("type error");
    }  
};

/*
  the function convert takes in @params an int type1 , int type2, char* operator,int* return_type :
    Convert the types if one of the types is float
    Apply the operator char* operator 
    Store the returned type in the return_type
*/
void convert_with_op(int type1, int type2, char* operator,int* return_type){
    if(type1==INT && type2 == FLOAT ){
    printf("I2F1\n");
    *return_type=FLOAT;
  }
    else if( type2 == INT && type1 == FLOAT){
      printf("I2F2\n");
      *return_type=FLOAT;
    }
    else{
      *return_type=type1;
    }
    if(*return_type==INT){
      printf("%sI\n",operator);
    }
    else{
      printf("%sF\n",operator);
   }
}

  
int make_label(){
  static int n=0;
  return n++;
}


void do_n_time(int n){
  for (int i = 0 ; i < n; i++){
    printf("LOADP\n");
  }
}

  %}


%start prog  

// liste de tous les non terminaux dont vous voulez manipuler l'attribut
%type <type_value> type exp  typename idA bool_cond 
%type <string_value> fun_head fun_name fid arg
%type <label_value> if while
 /* Attention, la rêgle de calcul par défaut $$=$1 
    peut créer des demandes/erreurs de type d'attribut */

%%

 // I. Programme (top level)

prog : prog_head prog_body;

prog_head : PRG ID PV
;

prog_body : opt_funs
            {printf("%s\n",start_main);}
            opt_vars
	    BIN inst_list BOUT DOT
	    {printf("%s\n",end_main);}
            
;


// II. Declarations de variables

opt_vars : var decl_list
|
;

var: VAR {
  depth++;
  if( depth > 0){
    printf("SAVEBP\n");
  }
}// ici on entre dans des declarations de variables
;

decl_list : decl_list decl   { } 
| decl                       {}
;

decl: ID CLN type PV             {
  int offset_value1 =1;
  if(depth == 0){
    set_symbol_value($1 ,makeSymbol($3,offset_value++,depth));
    printf("// Declare variable %s of type %s with offset %d at depth %d \n", $1 , type2string($3),offset_value-1,depth);
  }
  else {
    set_symbol_value($1 ,makeSymbol($3,offset_value1++,depth));
    printf("// Declare variable %s of type %s with offset %d at depth %d \n", $1 , type2string($3),offset_value1-1,depth);
  }
	if( $3 == INT ){
	  printf("LOADI(0)\n");
	}
	else {
		printf("LOADF(0.0)\n");
	}
}
;

type
: typename                     {$$ = $1;}
;

typename
: INT                          {$$=INT;}
| FLOAT                        {$$=FLOAT;}
| VOID                         {$$=VOID;}
;


// III. Déclarations de functions

opt_funs : opt_funs function
| {printf("/* (Optionnal) functions' target PCode */\n\n");}
;

function : fun_head fun_body {printf("}\n");}
;

fun_head : fun fun_name opt_arg CLN type {
  set_symbol_value($2,makeSymbol($5,-1,0));
}
;

fun:FUN 

fun_name : ID {
  printf("void call_%s {\n",$1);
}
;

opt_arg : PO arg_list PF
| ;

arg_list : arg vir arg_list {get_symbol_value($1)->offset=params_offset -- ;}
// récursion droite pour numéroter les paramètres du dernier au premier
| arg { get_symbol_value($1)->offset=params_offset--;}

arg : ID CLN type              { $$=$1;
  set_symbol_value($1, makeSymbol($3,0,depth));
}
;

vir : VIR                      {}
;

fun_body : opt_vars BIN inst_list BOUT PV    {}
;

// IV. Instructions


inst_list: inst_list inst PV   {} 
| inst PV                      {}
;

// chaque instruction se termine par ";" contrairement au langage C

inst:
opt_vars block_begin inst_list block_end   {}
| aff                         {}
| ret                         {}
| cond                        {}
| loop                        {}
;

// Entrée et sortie explicite d'un bloc

block_begin : BIN 
;
// entrée dans un sous-bloc

block_end : BOUT {
  if(depth > 0 ){
    printf("RESTOREBP\n");
  }
  remove_symbol_depth(depth);
  depth--;
}
;
// sortie d'un sous-bloc


// IV.1 Affectations


aff : idA AFF exp               {
  if($3 == FLOAT && $1 == INT){
    printf("Erreur: Type error in affectation\n");
    exit(1);
  }
  if($3 == INT && $1 == FLOAT){
      printf("I2F2\n");
  }
  printf("STOREP\n");
}
;
idA : ID {attribute anAttribute = get_symbol_value($1);
  printf("// loading adress (left value) in stack\n");
  $$=anAttribute->type;
  printf("LOADBP // load current BP address\n");
  do_n_time(depth - anAttribute->depth );
  printf("SHIFT(%d) // apply offset %d\n",get_symbol_value($1)->offset,get_symbol_value($1)->offset);}
;

// IV.2. Conditionelles
//           N.B. ces rêgles génèrent un conflit déclage reduction
//           qui est résolu comme on le souhaite par un décalage (shift)
//           avec ELSE en entrée (voir y.output)

cond :
if bool_cond inst  elsop       { 
}
;

elsop : else inst              {printf("End_%d:\n",$<int_value>-2);}
|                  %prec IFX   {printf("False_%d:\n",$<int_value>-2);} // juste un "truc" pour éviter le message de conflit shift / reduce
;

bool_cond : PO exp PF         { $$ = $2 ;
                  printf("IFN(False_%d)\n",$<int_value>0);
}
;

if : IF                      {$$=make_label();}
;

else : ELSE                   { printf("GOTO(End_%d)\n",$<int_value>-2);
                                printf("False_%d:\n",$<int_value>-2);
}
;

// IV.3. Iterations

loop : while while_cond inst  { printf("GOTO(StartLoop_%d)\n",$1);
                                printf("EndLoop_%d:\n",$1); }
;

while_cond : PO exp PF        { printf("IFN(EndLoop_%d)\n",$<int_value>0); }

while : WHILE                 { $$=make_label();
                                printf("StartLoop_%d:\n",$1);
}
;

// IV.4. Valeur

ret : exp
;



// V. Expressions

exp
// V.1 Exp. arithmetiques
: MOINS exp %prec UNA         {}
         // -x + y lue comme (- x) + y  et pas - (x + y)
| exp PLUS exp                {
                                convert_with_op($1,$3,"ADD",&$$);
}
                                   
| exp MOINS exp               { 
                                
                                convert_with_op($1,$3,"SUB",&$$);
                              }
| exp STAR exp                { 
                                
                                convert_with_op($1,$3,"MULT",&$$);
                              }
| exp DIV exp                 { 
                              
                                convert_with_op($1,$3,"DIV",&$$);
                              }
| PO exp PF                   { $$=$2;}
| ID                          { 
  printf("LOADBP\n");
  do_n_time(depth - get_symbol_value($1)->depth );
  printf("SHIFT(%i)\n",get_symbol_value($1)->offset);
  printf("LOADP\n");
  $$=get_symbol_value($1)->type;
}
| app                         { }
| NUM                         { printf("LOADI(%i)\n",$1); $$ = INT;}
| DEC                         { printf("LOADF(%f)\n",$1); $$ = FLOAT;}


// V.2. Booléens

| NOT exp %prec UNA           {}
| exp INF exp                 { if($1 == FLOAT || $3 ==FLOAT) {printf("LTF\n");}
                                else{
                                  printf("LTI\n");
                                }}
| exp SUP exp                 { if($1 == FLOAT || $3 ==FLOAT) {printf("GTF\n");}
                                else{
                                  printf("GTI\n");
                                }}
| exp EQUAL exp               { if( $1 == $3){ $$ = 1;}
else{$$=0;}}
| exp DIFF exp                { if($1 != $3 ){$$ = 1;}
else {$$=0;}}
| exp AND exp                 {$$ = $1 * $3 ;}
| exp OR exp                  { $$ = $1 + $3 ;}

;

// V.3 Applications de fonctions


app : fid PO args PF          {
  if( get_symbol_value($1)->type == INT){
  printf("LOADI(0)\n");
}else{
  printf("LOADF(0.0)\n");
}
  printf("SAVEBP\n");
  printf("CALL(call_%s)\n",$1);
  printf("RESTOREBP\n");
  printf("END_CALL(%d)\n",args_number);
}
;

fid : ID                      {
  args_number = 0 ;
}

args :  arglist               {}
|                             {}
;

arglist : arglist VIR exp     {args_number++;} // récursion gauche pour empiler les arguements de la fonction de gauche à droite
| exp                         {args_number++;}
;



%% 
int main () {

  /* Ici on peut ouvrir le fichier source, avec les messages 
     d'erreur usuel si besoin, et rediriger l'entrée standard 
     sur ce fichier pour lancer dessus la compilation.
  */
  
  
printf("#include \"PCode.h\"\n\n");
    	 
return yyparse ();

} 

