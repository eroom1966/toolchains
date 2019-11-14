/* syslimits.h stands for the system's own limits.h file.
   If we can use it ok unmodified, then we install this text.
   If fixincludes fixes it, then the fixed version is installed
   instead of this text.  */

#define _GCC_NEXT_LIMITS_H		/* tell gcc's limits.h to recurse */
#include_next "../../../../../../vectors-riscv-none-gcc/lib/gcc/riscv-none-embed/8.1.0/include-fixed/limits.h"
#undef _GCC_NEXT_LIMITS_H
