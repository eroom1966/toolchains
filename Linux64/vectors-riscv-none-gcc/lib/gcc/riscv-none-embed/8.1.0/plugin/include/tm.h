#ifndef GCC_TM_H
#define GCC_TM_H

#ifndef LIBC_GLIBC
# define LIBC_GLIBC 1
#endif
#ifndef LIBC_UCLIBC
# define LIBC_UCLIBC 2
#endif
#ifndef LIBC_BIONIC
# define LIBC_BIONIC 3
#endif
#ifndef LIBC_MUSL
# define LIBC_MUSL 4
#endif
#ifdef IN_GCC
# include "../../../../../../../vectors-riscv-none-gcc/lib/gcc/riscv-none-embed/8.1.0/plugin/include/options.h"
# include "../../../../../../../vectors-riscv-none-gcc/lib/gcc/riscv-none-embed/8.1.0/plugin/include/insn-constants.h"
# include "../../../../../../../vectors-riscv-none-gcc/lib/gcc/riscv-none-embed/8.1.0/plugin/include/config/elfos.h"
# include "../../../../../../../vectors-riscv-none-gcc/lib/gcc/riscv-none-embed/8.1.0/plugin/include/config/newlib-stdint.h"
# include "../../../../../../../vectors-riscv-none-gcc/lib/gcc/riscv-none-embed/8.1.0/plugin/include/config/riscv/riscv.h"
# include "../../../../../../../vectors-riscv-none-gcc/lib/gcc/riscv-none-embed/8.1.0/plugin/include/config/riscv/elf-embed.h"
# include "../../../../../../../vectors-riscv-none-gcc/lib/gcc/riscv-none-embed/8.1.0/plugin/include/config/initfini-array.h"
#endif
#if defined IN_GCC && !defined GENERATOR_FILE && !defined USED_FOR_TARGET
# include "../../../../../../../vectors-riscv-none-gcc/lib/gcc/riscv-none-embed/8.1.0/plugin/include/insn-flags.h"
#endif
#if defined IN_GCC && !defined GENERATOR_FILE
# include "../../../../../../../vectors-riscv-none-gcc/lib/gcc/riscv-none-embed/8.1.0/plugin/include/insn-modes.h"
#endif
# include "../../../../../../../vectors-riscv-none-gcc/lib/gcc/riscv-none-embed/8.1.0/plugin/include/defaults.h"
#endif /* GCC_TM_H */
