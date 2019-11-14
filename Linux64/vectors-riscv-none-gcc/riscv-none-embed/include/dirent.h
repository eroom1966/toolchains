#ifndef _DIRENT_H_
#define _DIRENT_H_

#ifdef __cplusplus
extern "C" {
#endif
#include "../../../vectors-riscv-none-gcc/riscv-none-embed/include/sys/cdefs.h"
#include "../../../vectors-riscv-none-gcc/riscv-none-embed/include/sys/dirent.h"

#if !defined(MAXNAMLEN) && __BSD_VISIBLE
#define MAXNAMLEN 1024
#endif

#ifdef __cplusplus
}
#endif
#endif /*_DIRENT_H_*/
