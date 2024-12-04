#include "PCode.h"

/* (Optionnal) functions' target PCode */

int main() {
/* Starting (main) program target PCode */

// Declare variable x of type int with offset 0 at depth 0 
LOADI(0)
// Declare variable y of type int with offset 1 at depth 0 
LOADI(0)
// loading adress (left value) in stack
LOADBP // load current BP address
SHIFT(0) // apply offset 0
LOADI(1)
STOREP
// loading adress (left value) in stack
LOADBP // load current BP address
SHIFT(1) // apply offset 1
LOADI(0)
STOREP
StartLoop_0:
LOADBP
SHIFT(0)
LOADP
LOADI(10)
LTI
IFN(EndLoop_0)
// loading adress (left value) in stack
LOADBP // load current BP address
SHIFT(1) // apply offset 1
LOADBP
SHIFT(0)
LOADP
LOADBP
SHIFT(1)
LOADP
ADDI
STOREP
GOTO(StartLoop_0)
EndLoop_0:

/* Stoping (main) program target PCode */
return stack[sp-1].int_value;
}

