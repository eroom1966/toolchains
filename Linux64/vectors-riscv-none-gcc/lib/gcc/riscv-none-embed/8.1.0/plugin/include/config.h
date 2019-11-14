#ifndef GCC_CONFIG_H
#define GCC_CONFIG_H

#ifdef GENERATOR_FILE
#error config.h is for the host, not build, machine.
#endif
#include "../../../../../../../vectors-riscv-none-gcc/lib/gcc/riscv-none-embed/8.1.0/plugin/include/auto-host.h"
#ifdef IN_GCC
# include "../../../../../../../vectors-riscv-none-gcc/lib/gcc/riscv-none-embed/8.1.0/plugin/include/ansidecl.h"
#endif
#endif /* GCC_CONFIG_H */
