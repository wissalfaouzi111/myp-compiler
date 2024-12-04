/* A Bison parser, made by GNU Bison 3.7.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30704

/* Bison version string.  */
#define YYBISON_VERSION "3.7.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "src/myp.y"


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



 

#line 106 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    NUM = 258,                     /* NUM  */
    DEC = 259,                     /* DEC  */
    PRG = 260,                     /* PRG  */
    FUN = 261,                     /* FUN  */
    VAR = 262,                     /* VAR  */
    BIN = 263,                     /* BIN  */
    BOUT = 264,                    /* BOUT  */
    AFF = 265,                     /* AFF  */
    CLN = 266,                     /* CLN  */
    DOT = 267,                     /* DOT  */
    INT = 268,                     /* INT  */
    FLOAT = 269,                   /* FLOAT  */
    VOID = 270,                    /* VOID  */
    ID = 271,                      /* ID  */
    PO = 272,                      /* PO  */
    PF = 273,                      /* PF  */
    PV = 274,                      /* PV  */
    VIR = 275,                     /* VIR  */
    IF = 276,                      /* IF  */
    ELSE = 277,                    /* ELSE  */
    WHILE = 278,                   /* WHILE  */
    AND = 279,                     /* AND  */
    OR = 280,                      /* OR  */
    NOT = 281,                     /* NOT  */
    DIFF = 282,                    /* DIFF  */
    EQUAL = 283,                   /* EQUAL  */
    SUP = 284,                     /* SUP  */
    INF = 285,                     /* INF  */
    PLUS = 286,                    /* PLUS  */
    MOINS = 287,                   /* MOINS  */
    STAR = 288,                    /* STAR  */
    DIV = 289,                     /* DIV  */
    ARR = 290,                     /* ARR  */
    IFX = 291,                     /* IFX  */
    UNA = 292                      /* UNA  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define NUM 258
#define DEC 259
#define PRG 260
#define FUN 261
#define VAR 262
#define BIN 263
#define BOUT 264
#define AFF 265
#define CLN 266
#define DOT 267
#define INT 268
#define FLOAT 269
#define VOID 270
#define ID 271
#define PO 272
#define PF 273
#define PV 274
#define VIR 275
#define IF 276
#define ELSE 277
#define WHILE 278
#define AND 279
#define OR 280
#define NOT 281
#define DIFF 282
#define EQUAL 283
#define SUP 284
#define INF 285
#define PLUS 286
#define MOINS 287
#define STAR 288
#define DIV 289
#define ARR 290
#define IFX 291
#define UNA 292

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 36 "src/myp.y"
 
  struct ATTRIBUTE * symbol_value;
  char * string_value;
  int int_value;
  float float_value;
  int type_value;
  int label_value;
  int offset_value;

#line 243 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_NUM = 3,                        /* NUM  */
  YYSYMBOL_DEC = 4,                        /* DEC  */
  YYSYMBOL_PRG = 5,                        /* PRG  */
  YYSYMBOL_FUN = 6,                        /* FUN  */
  YYSYMBOL_VAR = 7,                        /* VAR  */
  YYSYMBOL_BIN = 8,                        /* BIN  */
  YYSYMBOL_BOUT = 9,                       /* BOUT  */
  YYSYMBOL_AFF = 10,                       /* AFF  */
  YYSYMBOL_CLN = 11,                       /* CLN  */
  YYSYMBOL_DOT = 12,                       /* DOT  */
  YYSYMBOL_INT = 13,                       /* INT  */
  YYSYMBOL_FLOAT = 14,                     /* FLOAT  */
  YYSYMBOL_VOID = 15,                      /* VOID  */
  YYSYMBOL_ID = 16,                        /* ID  */
  YYSYMBOL_PO = 17,                        /* PO  */
  YYSYMBOL_PF = 18,                        /* PF  */
  YYSYMBOL_PV = 19,                        /* PV  */
  YYSYMBOL_VIR = 20,                       /* VIR  */
  YYSYMBOL_IF = 21,                        /* IF  */
  YYSYMBOL_ELSE = 22,                      /* ELSE  */
  YYSYMBOL_WHILE = 23,                     /* WHILE  */
  YYSYMBOL_AND = 24,                       /* AND  */
  YYSYMBOL_OR = 25,                        /* OR  */
  YYSYMBOL_NOT = 26,                       /* NOT  */
  YYSYMBOL_DIFF = 27,                      /* DIFF  */
  YYSYMBOL_EQUAL = 28,                     /* EQUAL  */
  YYSYMBOL_SUP = 29,                       /* SUP  */
  YYSYMBOL_INF = 30,                       /* INF  */
  YYSYMBOL_PLUS = 31,                      /* PLUS  */
  YYSYMBOL_MOINS = 32,                     /* MOINS  */
  YYSYMBOL_STAR = 33,                      /* STAR  */
  YYSYMBOL_DIV = 34,                       /* DIV  */
  YYSYMBOL_ARR = 35,                       /* ARR  */
  YYSYMBOL_IFX = 36,                       /* IFX  */
  YYSYMBOL_UNA = 37,                       /* UNA  */
  YYSYMBOL_YYACCEPT = 38,                  /* $accept  */
  YYSYMBOL_prog = 39,                      /* prog  */
  YYSYMBOL_prog_head = 40,                 /* prog_head  */
  YYSYMBOL_prog_body = 41,                 /* prog_body  */
  YYSYMBOL_42_1 = 42,                      /* $@1  */
  YYSYMBOL_opt_vars = 43,                  /* opt_vars  */
  YYSYMBOL_var = 44,                       /* var  */
  YYSYMBOL_decl_list = 45,                 /* decl_list  */
  YYSYMBOL_decl = 46,                      /* decl  */
  YYSYMBOL_type = 47,                      /* type  */
  YYSYMBOL_typename = 48,                  /* typename  */
  YYSYMBOL_opt_funs = 49,                  /* opt_funs  */
  YYSYMBOL_function = 50,                  /* function  */
  YYSYMBOL_fun_head = 51,                  /* fun_head  */
  YYSYMBOL_fun = 52,                       /* fun  */
  YYSYMBOL_fun_name = 53,                  /* fun_name  */
  YYSYMBOL_opt_arg = 54,                   /* opt_arg  */
  YYSYMBOL_arg_list = 55,                  /* arg_list  */
  YYSYMBOL_arg = 56,                       /* arg  */
  YYSYMBOL_vir = 57,                       /* vir  */
  YYSYMBOL_fun_body = 58,                  /* fun_body  */
  YYSYMBOL_inst_list = 59,                 /* inst_list  */
  YYSYMBOL_inst = 60,                      /* inst  */
  YYSYMBOL_block_begin = 61,               /* block_begin  */
  YYSYMBOL_block_end = 62,                 /* block_end  */
  YYSYMBOL_aff = 63,                       /* aff  */
  YYSYMBOL_idA = 64,                       /* idA  */
  YYSYMBOL_cond = 65,                      /* cond  */
  YYSYMBOL_elsop = 66,                     /* elsop  */
  YYSYMBOL_bool_cond = 67,                 /* bool_cond  */
  YYSYMBOL_if = 68,                        /* if  */
  YYSYMBOL_else = 69,                      /* else  */
  YYSYMBOL_loop = 70,                      /* loop  */
  YYSYMBOL_while_cond = 71,                /* while_cond  */
  YYSYMBOL_while = 72,                     /* while  */
  YYSYMBOL_ret = 73,                       /* ret  */
  YYSYMBOL_exp = 74,                       /* exp  */
  YYSYMBOL_app = 75,                       /* app  */
  YYSYMBOL_fid = 76,                       /* fid  */
  YYSYMBOL_args = 77,                      /* args  */
  YYSYMBOL_arglist = 78                    /* arglist  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;


/* Second part of user prologue.  */
#line 72 "src/myp.y"

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

  

#line 402 "y.tab.c"


#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   209

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  38
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  72
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  129

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   292


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   142,   142,   144,   148,   147,   158,   159,   162,   170,
     171,   174,   194,   198,   199,   200,   206,   207,   210,   213,
     218,   220,   225,   226,   228,   230,   232,   237,   240,   246,
     247,   253,   254,   255,   256,   257,   262,   266,   280,   291,
     305,   309,   310,   313,   318,   321,   328,   332,   334,   341,
     350,   352,   356,   360,   364,   368,   369,   376,   377,   378,
     383,   384,   388,   392,   394,   396,   397,   404,   417,   421,
     422,   425,   426
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "NUM", "DEC", "PRG",
  "FUN", "VAR", "BIN", "BOUT", "AFF", "CLN", "DOT", "INT", "FLOAT", "VOID",
  "ID", "PO", "PF", "PV", "VIR", "IF", "ELSE", "WHILE", "AND", "OR", "NOT",
  "DIFF", "EQUAL", "SUP", "INF", "PLUS", "MOINS", "STAR", "DIV", "ARR",
  "IFX", "UNA", "$accept", "prog", "prog_head", "prog_body", "$@1",
  "opt_vars", "var", "decl_list", "decl", "type", "typename", "opt_funs",
  "function", "fun_head", "fun", "fun_name", "opt_arg", "arg_list", "arg",
  "vir", "fun_body", "inst_list", "inst", "block_begin", "block_end",
  "aff", "idA", "cond", "elsop", "bool_cond", "if", "else", "loop",
  "while_cond", "while", "ret", "exp", "app", "fid", "args", "arglist", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292
};
#endif

#define YYPACT_NINF (-38)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-69)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       1,    -2,    16,   -38,    10,   -38,   -38,    20,   -38,   -38,
      21,   -38,    21,    35,   -38,    24,    38,    47,   -38,   -38,
      46,    81,    53,    38,   -38,    81,    51,    57,   -38,   -38,
      -5,   105,   -38,   -38,   105,   105,    61,     4,    52,   -38,
      63,   -38,    62,   -38,    66,   -38,   156,   -38,    69,     9,
     -38,    49,    67,    56,    71,     9,    75,   111,   -38,   -38,
     -38,    81,    88,    74,   -38,   105,   105,    81,   105,    81,
     105,   105,   105,   105,   105,   105,   105,   105,   105,   105,
     105,   -38,   -38,   -38,    82,   -38,    84,     9,   -38,   -38,
      51,   -38,   -38,    73,   -38,   -38,   156,   128,    89,   145,
     -38,   175,   167,    28,    28,    28,    28,   -24,   -24,   -38,
     -38,   156,    92,    86,   -38,   -38,   -38,   -38,   -38,   -38,
     -38,   -38,   -38,    81,   -38,   -38,   105,   -38,   156
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,    17,     0,     1,     2,     4,     3,    20,
       7,    16,     7,     0,     8,     0,     0,     0,    18,    21,
      23,     7,     0,     6,    10,     7,     0,     0,    58,    59,
      56,     0,    44,    48,     0,     0,     0,     7,     0,    32,
       0,    34,     0,    35,     0,    33,    49,    57,     0,     0,
       9,     7,     0,     0,    25,     0,    56,     0,    60,    50,
      36,     7,     0,     0,    30,     0,     0,     7,     0,     7,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      70,    13,    14,    15,     0,    12,     0,     0,    22,    27,
       0,    19,    55,     7,     5,    29,    38,     0,    42,     0,
      46,    65,    66,    64,    63,    62,    61,    51,    52,    53,
      54,    72,     0,    69,    11,    28,    26,    24,    37,    31,
      43,    45,    40,     7,    47,    67,     0,    41,    71
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -38,   -38,   -38,   -38,   -38,     7,   -38,   -38,    91,   -37,
     -38,   -38,   -38,   -38,   -38,   -38,   -38,    22,   -38,   -38,
     -38,   -23,   -36,   -38,   -38,   -38,   -38,   -38,   -38,   -38,
     -38,   -38,   -38,   -38,   -38,   -38,   -31,   -38,   -38,   -38,
     -38
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     3,     6,    10,    36,    16,    23,    24,    84,
      85,     7,    11,    12,    13,    20,    27,    53,    54,    90,
      18,    37,    38,    61,   119,    39,    40,    41,   122,    67,
      42,   123,    43,    69,    44,    45,    46,    47,    48,   112,
     113
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      57,    63,    51,    58,    59,   -39,     1,    28,    29,    78,
      79,    14,   -68,    62,     4,    63,     5,    15,    91,    17,
      30,    31,    81,    82,    83,    32,     9,    33,    14,     8,
      34,    98,    21,   100,    96,    97,    35,    99,    93,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     116,    19,    28,    29,    22,    25,    14,    63,    86,    76,
      77,    78,    79,    26,    49,    30,    31,    52,    55,    60,
      32,    64,    33,    65,    88,    34,    28,    29,    87,    66,
      14,    35,   118,    68,    28,    29,    80,   127,    14,    30,
      31,    89,   -68,    95,    32,   128,    33,    30,    31,    34,
      94,   114,    32,   115,    33,    35,   126,    34,    28,    29,
     125,   121,   117,    35,    50,     0,     0,     0,     0,     0,
       0,    56,    31,     0,     0,     0,     0,     0,     0,    92,
       0,    34,     0,     0,     0,    70,    71,    35,    72,    73,
      74,    75,    76,    77,    78,    79,   120,     0,     0,     0,
       0,     0,    70,    71,     0,    72,    73,    74,    75,    76,
      77,    78,    79,   124,     0,     0,     0,     0,     0,    70,
      71,     0,    72,    73,    74,    75,    76,    77,    78,    79,
      70,    71,     0,    72,    73,    74,    75,    76,    77,    78,
      79,    70,     0,     0,    72,    73,    74,    75,    76,    77,
      78,    79,    72,    73,    74,    75,    76,    77,    78,    79
};

static const yytype_int8 yycheck[] =
{
      31,    37,    25,    34,    35,    10,     5,     3,     4,    33,
      34,     7,    17,     9,    16,    51,     0,    10,    55,    12,
      16,    17,    13,    14,    15,    21,     6,    23,     7,    19,
      26,    67,     8,    69,    65,    66,    32,    68,    61,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      87,    16,     3,     4,    16,     8,     7,    93,     9,    31,
      32,    33,    34,    17,    11,    16,    17,    16,    11,     8,
      21,    19,    23,    10,    18,    26,     3,     4,    11,    17,
       7,    32,     9,    17,     3,     4,    17,   123,     7,    16,
      17,    20,    17,    19,    21,   126,    23,    16,    17,    26,
      12,    19,    21,    19,    23,    32,    20,    26,     3,     4,
      18,    22,    90,    32,    23,    -1,    -1,    -1,    -1,    -1,
      -1,    16,    17,    -1,    -1,    -1,    -1,    -1,    -1,    18,
      -1,    26,    -1,    -1,    -1,    24,    25,    32,    27,    28,
      29,    30,    31,    32,    33,    34,    18,    -1,    -1,    -1,
      -1,    -1,    24,    25,    -1,    27,    28,    29,    30,    31,
      32,    33,    34,    18,    -1,    -1,    -1,    -1,    -1,    24,
      25,    -1,    27,    28,    29,    30,    31,    32,    33,    34,
      24,    25,    -1,    27,    28,    29,    30,    31,    32,    33,
      34,    24,    -1,    -1,    27,    28,    29,    30,    31,    32,
      33,    34,    27,    28,    29,    30,    31,    32,    33,    34
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     5,    39,    40,    16,     0,    41,    49,    19,     6,
      42,    50,    51,    52,     7,    43,    44,    43,    58,    16,
      53,     8,    16,    45,    46,     8,    17,    54,     3,     4,
      16,    17,    21,    23,    26,    32,    43,    59,    60,    63,
      64,    65,    68,    70,    72,    73,    74,    75,    76,    11,
      46,    59,    16,    55,    56,    11,    16,    74,    74,    74,
       8,    61,     9,    60,    19,    10,    17,    67,    17,    71,
      24,    25,    27,    28,    29,    30,    31,    32,    33,    34,
      17,    13,    14,    15,    47,    48,     9,    11,    18,    20,
      57,    47,    18,    59,    12,    19,    74,    74,    60,    74,
      60,    74,    74,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    77,    78,    19,    19,    47,    55,     9,    62,
      18,    22,    66,    69,    18,    18,    20,    60,    74
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    38,    39,    40,    42,    41,    43,    43,    44,    45,
      45,    46,    47,    48,    48,    48,    49,    49,    50,    51,
      52,    53,    54,    54,    55,    55,    56,    57,    58,    59,
      59,    60,    60,    60,    60,    60,    61,    62,    63,    64,
      65,    66,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    75,    76,    77,
      77,    78,    78
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     3,     0,     7,     2,     0,     1,     2,
       1,     4,     1,     1,     1,     1,     2,     0,     2,     5,
       1,     1,     3,     0,     3,     1,     3,     1,     5,     3,
       2,     4,     1,     1,     1,     1,     1,     1,     3,     1,
       4,     2,     0,     3,     1,     1,     3,     3,     1,     1,
       2,     3,     3,     3,     3,     3,     1,     1,     1,     1,
       2,     3,     3,     3,     3,     3,     3,     4,     1,     1,
       0,     3,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 4: /* $@1: %empty  */
#line 148 "src/myp.y"
            {printf("%s\n",start_main);}
#line 1458 "y.tab.c"
    break;

  case 5: /* prog_body: opt_funs $@1 opt_vars BIN inst_list BOUT DOT  */
#line 151 "src/myp.y"
            {printf("%s\n",end_main);}
#line 1464 "y.tab.c"
    break;

  case 8: /* var: VAR  */
#line 162 "src/myp.y"
         {
  depth++;
  if( depth > 0){
    printf("SAVEBP\n");
  }
}
#line 1475 "y.tab.c"
    break;

  case 9: /* decl_list: decl_list decl  */
#line 170 "src/myp.y"
                             { }
#line 1481 "y.tab.c"
    break;

  case 10: /* decl_list: decl  */
#line 171 "src/myp.y"
                             {}
#line 1487 "y.tab.c"
    break;

  case 11: /* decl: ID CLN type PV  */
#line 174 "src/myp.y"
                                 {
  int offset_value1 =1;
  if(depth == 0){
    set_symbol_value((yyvsp[-3].string_value) ,makeSymbol((yyvsp[-1].type_value),offset_value++,depth));
    printf("// Declare variable %s of type %s with offset %d at depth %d \n", (yyvsp[-3].string_value) , type2string((yyvsp[-1].type_value)),offset_value-1,depth);
  }
  else {
    set_symbol_value((yyvsp[-3].string_value) ,makeSymbol((yyvsp[-1].type_value),offset_value1++,depth));
    printf("// Declare variable %s of type %s with offset %d at depth %d \n", (yyvsp[-3].string_value) , type2string((yyvsp[-1].type_value)),offset_value1-1,depth);
  }
	if( (yyvsp[-1].type_value) == INT ){
	  printf("LOADI(0)\n");
	}
	else {
		printf("LOADF(0.0)\n");
	}
}
#line 1509 "y.tab.c"
    break;

  case 12: /* type: typename  */
#line 194 "src/myp.y"
                               {(yyval.type_value) = (yyvsp[0].type_value);}
#line 1515 "y.tab.c"
    break;

  case 13: /* typename: INT  */
#line 198 "src/myp.y"
                               {(yyval.type_value)=INT;}
#line 1521 "y.tab.c"
    break;

  case 14: /* typename: FLOAT  */
#line 199 "src/myp.y"
                               {(yyval.type_value)=FLOAT;}
#line 1527 "y.tab.c"
    break;

  case 15: /* typename: VOID  */
#line 200 "src/myp.y"
                               {(yyval.type_value)=VOID;}
#line 1533 "y.tab.c"
    break;

  case 17: /* opt_funs: %empty  */
#line 207 "src/myp.y"
  {printf("/* (Optionnal) functions' target PCode */\n\n");}
#line 1539 "y.tab.c"
    break;

  case 18: /* function: fun_head fun_body  */
#line 210 "src/myp.y"
                             {printf("}\n");}
#line 1545 "y.tab.c"
    break;

  case 19: /* fun_head: fun fun_name opt_arg CLN type  */
#line 213 "src/myp.y"
                                         {
  set_symbol_value((yyvsp[-3].string_value),makeSymbol((yyvsp[0].type_value),-1,0));
}
#line 1553 "y.tab.c"
    break;

  case 21: /* fun_name: ID  */
#line 220 "src/myp.y"
              {
  printf("void call_%s {\n",(yyvsp[0].string_value));
}
#line 1561 "y.tab.c"
    break;

  case 24: /* arg_list: arg vir arg_list  */
#line 228 "src/myp.y"
                            {get_symbol_value((yyvsp[-2].string_value))->offset=params_offset -- ;}
#line 1567 "y.tab.c"
    break;

  case 25: /* arg_list: arg  */
#line 230 "src/myp.y"
      { get_symbol_value((yyvsp[0].string_value))->offset=params_offset--;}
#line 1573 "y.tab.c"
    break;

  case 26: /* arg: ID CLN type  */
#line 232 "src/myp.y"
                               { (yyval.string_value)=(yyvsp[-2].string_value);
  set_symbol_value((yyvsp[-2].string_value), makeSymbol((yyvsp[0].type_value),0,depth));
}
#line 1581 "y.tab.c"
    break;

  case 27: /* vir: VIR  */
#line 237 "src/myp.y"
                               {}
#line 1587 "y.tab.c"
    break;

  case 28: /* fun_body: opt_vars BIN inst_list BOUT PV  */
#line 240 "src/myp.y"
                                             {}
#line 1593 "y.tab.c"
    break;

  case 29: /* inst_list: inst_list inst PV  */
#line 246 "src/myp.y"
                               {}
#line 1599 "y.tab.c"
    break;

  case 30: /* inst_list: inst PV  */
#line 247 "src/myp.y"
                               {}
#line 1605 "y.tab.c"
    break;

  case 31: /* inst: opt_vars block_begin inst_list block_end  */
#line 253 "src/myp.y"
                                           {}
#line 1611 "y.tab.c"
    break;

  case 32: /* inst: aff  */
#line 254 "src/myp.y"
                              {}
#line 1617 "y.tab.c"
    break;

  case 33: /* inst: ret  */
#line 255 "src/myp.y"
                              {}
#line 1623 "y.tab.c"
    break;

  case 34: /* inst: cond  */
#line 256 "src/myp.y"
                              {}
#line 1629 "y.tab.c"
    break;

  case 35: /* inst: loop  */
#line 257 "src/myp.y"
                              {}
#line 1635 "y.tab.c"
    break;

  case 37: /* block_end: BOUT  */
#line 266 "src/myp.y"
                 {
  if(depth > 0 ){
    printf("RESTOREBP\n");
  }
  remove_symbol_depth(depth);
  depth--;
}
#line 1647 "y.tab.c"
    break;

  case 38: /* aff: idA AFF exp  */
#line 280 "src/myp.y"
                                {
  if((yyvsp[0].type_value) == FLOAT && (yyvsp[-2].type_value) == INT){
    printf("Erreur: Type error in affectation\n");
    exit(1);
  }
  if((yyvsp[0].type_value) == INT && (yyvsp[-2].type_value) == FLOAT){
      printf("I2F2\n");
  }
  printf("STOREP\n");
}
#line 1662 "y.tab.c"
    break;

  case 39: /* idA: ID  */
#line 291 "src/myp.y"
         {attribute anAttribute = get_symbol_value((yyvsp[0].string_value));
  printf("// loading adress (left value) in stack\n");
  (yyval.type_value)=anAttribute->type;
  printf("LOADBP // load current BP address\n");
  do_n_time(depth - anAttribute->depth );
  printf("SHIFT(%d) // apply offset %d\n",get_symbol_value((yyvsp[0].string_value))->offset,get_symbol_value((yyvsp[0].string_value))->offset);}
#line 1673 "y.tab.c"
    break;

  case 40: /* cond: if bool_cond inst elsop  */
#line 305 "src/myp.y"
                               { 
}
#line 1680 "y.tab.c"
    break;

  case 41: /* elsop: else inst  */
#line 309 "src/myp.y"
                               {printf("End_%d:\n",(yyvsp[(-2) - (2)].int_value));}
#line 1686 "y.tab.c"
    break;

  case 42: /* elsop: %empty  */
#line 310 "src/myp.y"
                               {printf("False_%d:\n",(yyvsp[(-2) - (0)].int_value));}
#line 1692 "y.tab.c"
    break;

  case 43: /* bool_cond: PO exp PF  */
#line 313 "src/myp.y"
                              { (yyval.type_value) = (yyvsp[-1].type_value) ;
                  printf("IFN(False_%d)\n",(yyvsp[-3].int_value));
}
#line 1700 "y.tab.c"
    break;

  case 44: /* if: IF  */
#line 318 "src/myp.y"
                             {(yyval.label_value)=make_label();}
#line 1706 "y.tab.c"
    break;

  case 45: /* else: ELSE  */
#line 321 "src/myp.y"
                              { printf("GOTO(End_%d)\n",(yyvsp[(-2) - (1)].int_value));
                                printf("False_%d:\n",(yyvsp[(-2) - (1)].int_value));
}
#line 1714 "y.tab.c"
    break;

  case 46: /* loop: while while_cond inst  */
#line 328 "src/myp.y"
                              { printf("GOTO(StartLoop_%d)\n",(yyvsp[-2].label_value));
                                printf("EndLoop_%d:\n",(yyvsp[-2].label_value)); }
#line 1721 "y.tab.c"
    break;

  case 47: /* while_cond: PO exp PF  */
#line 332 "src/myp.y"
                              { printf("IFN(EndLoop_%d)\n",(yyvsp[-3].int_value)); }
#line 1727 "y.tab.c"
    break;

  case 48: /* while: WHILE  */
#line 334 "src/myp.y"
                              { (yyval.label_value)=make_label();
                                printf("StartLoop_%d:\n",(yyvsp[0].label_value));
}
#line 1735 "y.tab.c"
    break;

  case 50: /* exp: MOINS exp  */
#line 350 "src/myp.y"
                              {}
#line 1741 "y.tab.c"
    break;

  case 51: /* exp: exp PLUS exp  */
#line 352 "src/myp.y"
                              {
                                convert_with_op((yyvsp[-2].type_value),(yyvsp[0].type_value),"ADD",&(yyval.type_value));
}
#line 1749 "y.tab.c"
    break;

  case 52: /* exp: exp MOINS exp  */
#line 356 "src/myp.y"
                              { 
                                
                                convert_with_op((yyvsp[-2].type_value),(yyvsp[0].type_value),"SUB",&(yyval.type_value));
                              }
#line 1758 "y.tab.c"
    break;

  case 53: /* exp: exp STAR exp  */
#line 360 "src/myp.y"
                              { 
                                
                                convert_with_op((yyvsp[-2].type_value),(yyvsp[0].type_value),"MULT",&(yyval.type_value));
                              }
#line 1767 "y.tab.c"
    break;

  case 54: /* exp: exp DIV exp  */
#line 364 "src/myp.y"
                              { 
                              
                                convert_with_op((yyvsp[-2].type_value),(yyvsp[0].type_value),"DIV",&(yyval.type_value));
                              }
#line 1776 "y.tab.c"
    break;

  case 55: /* exp: PO exp PF  */
#line 368 "src/myp.y"
                              { (yyval.type_value)=(yyvsp[-1].type_value);}
#line 1782 "y.tab.c"
    break;

  case 56: /* exp: ID  */
#line 369 "src/myp.y"
                              { 
  printf("LOADBP\n");
  do_n_time(depth - get_symbol_value((yyvsp[0].string_value))->depth );
  printf("SHIFT(%i)\n",get_symbol_value((yyvsp[0].string_value))->offset);
  printf("LOADP\n");
  (yyval.type_value)=get_symbol_value((yyvsp[0].string_value))->type;
}
#line 1794 "y.tab.c"
    break;

  case 57: /* exp: app  */
#line 376 "src/myp.y"
                              { }
#line 1800 "y.tab.c"
    break;

  case 58: /* exp: NUM  */
#line 377 "src/myp.y"
                              { printf("LOADI(%i)\n",(yyvsp[0].int_value)); (yyval.type_value) = INT;}
#line 1806 "y.tab.c"
    break;

  case 59: /* exp: DEC  */
#line 378 "src/myp.y"
                              { printf("LOADF(%f)\n",(yyvsp[0].float_value)); (yyval.type_value) = FLOAT;}
#line 1812 "y.tab.c"
    break;

  case 60: /* exp: NOT exp  */
#line 383 "src/myp.y"
                              {}
#line 1818 "y.tab.c"
    break;

  case 61: /* exp: exp INF exp  */
#line 384 "src/myp.y"
                              { if((yyvsp[-2].type_value) == FLOAT || (yyvsp[0].type_value) ==FLOAT) {printf("LTF\n");}
                                else{
                                  printf("LTI\n");
                                }}
#line 1827 "y.tab.c"
    break;

  case 62: /* exp: exp SUP exp  */
#line 388 "src/myp.y"
                              { if((yyvsp[-2].type_value) == FLOAT || (yyvsp[0].type_value) ==FLOAT) {printf("GTF\n");}
                                else{
                                  printf("GTI\n");
                                }}
#line 1836 "y.tab.c"
    break;

  case 63: /* exp: exp EQUAL exp  */
#line 392 "src/myp.y"
                              { if( (yyvsp[-2].type_value) == (yyvsp[0].type_value)){ (yyval.type_value) = 1;}
else{(yyval.type_value)=0;}}
#line 1843 "y.tab.c"
    break;

  case 64: /* exp: exp DIFF exp  */
#line 394 "src/myp.y"
                              { if((yyvsp[-2].type_value) != (yyvsp[0].type_value) ){(yyval.type_value) = 1;}
else {(yyval.type_value)=0;}}
#line 1850 "y.tab.c"
    break;

  case 65: /* exp: exp AND exp  */
#line 396 "src/myp.y"
                              {(yyval.type_value) = (yyvsp[-2].type_value) * (yyvsp[0].type_value) ;}
#line 1856 "y.tab.c"
    break;

  case 66: /* exp: exp OR exp  */
#line 397 "src/myp.y"
                              { (yyval.type_value) = (yyvsp[-2].type_value) + (yyvsp[0].type_value) ;}
#line 1862 "y.tab.c"
    break;

  case 67: /* app: fid PO args PF  */
#line 404 "src/myp.y"
                              {
  if( get_symbol_value((yyvsp[-3].string_value))->type == INT){
  printf("LOADI(0)\n");
}else{
  printf("LOADF(0.0)\n");
}
  printf("SAVEBP\n");
  printf("CALL(call_%s)\n",(yyvsp[-3].string_value));
  printf("RESTOREBP\n");
  printf("END_CALL(%d)\n",args_number);
}
#line 1878 "y.tab.c"
    break;

  case 68: /* fid: ID  */
#line 417 "src/myp.y"
                              {
  args_number = 0 ;
}
#line 1886 "y.tab.c"
    break;

  case 69: /* args: arglist  */
#line 421 "src/myp.y"
                              {}
#line 1892 "y.tab.c"
    break;

  case 70: /* args: %empty  */
#line 422 "src/myp.y"
                              {}
#line 1898 "y.tab.c"
    break;

  case 71: /* arglist: arglist VIR exp  */
#line 425 "src/myp.y"
                              {args_number++;}
#line 1904 "y.tab.c"
    break;

  case 72: /* arglist: exp  */
#line 426 "src/myp.y"
                              {args_number++;}
#line 1910 "y.tab.c"
    break;


#line 1914 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 431 "src/myp.y"
 
int main () {

  /* Ici on peut ouvrir le fichier source, avec les messages 
     d'erreur usuel si besoin, et rediriger l'entrée standard 
     sur ce fichier pour lancer dessus la compilation.
  */
  
  
printf("#include \"PCode.h\"\n\n");
    	 
return yyparse ();

} 

