#ifndef _SIGNAL_H_
#define _SIGNAL_H_

#include "../../../vectors-riscv-none-gcc/riscv-none-embed/include/sys/signal.h"

#include "../../../vectors-riscv-none-gcc/riscv-none-embed/include/_ansi.h"
#include "../../../vectors-riscv-none-gcc/riscv-none-embed/include/sys/cdefs.h"

_BEGIN_STD_C

typedef int	sig_atomic_t;		/* Atomic entity type (ANSI) */
#if __BSD_VISIBLE
typedef _sig_func_ptr sig_t;		/* BSD naming */
#endif
#if __GNU_VISIBLE
typedef _sig_func_ptr sighandler_t;	/* glibc naming */
#endif

#define SIG_DFL ((_sig_func_ptr)0)	/* Default action */
#define SIG_IGN ((_sig_func_ptr)1)	/* Ignore action */
#define SIG_ERR ((_sig_func_ptr)-1)	/* Error return */

struct _reent;

_sig_func_ptr _signal_r (struct _reent *, int, _sig_func_ptr);
int	_raise_r (struct _reent *, int);

#ifndef _REENT_ONLY
_sig_func_ptr signal (int, _sig_func_ptr);
int	raise (int);
void	psignal (int, const char *);
#endif

_END_STD_C

#endif /* _SIGNAL_H_ */
