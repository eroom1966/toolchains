// C++ includes used for precompiling extensions -*- C++ -*-

// Copyright (C) 2006-2018 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file extc++.h
 *  This is an implementation file for a precompiled header.
 */

#if __cplusplus < 201103L
#include <bits/stdtr1c++.h>
#else
#include "../../../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/riscv-none-embed/rv32imafc/ilp32f/bits/stdc++.h"
#endif

#include "../../../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/ext/algorithm"
#if __cplusplus >= 201103L
# include "../../../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/ext/aligned_buffer.h"
#endif
#include "../../../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/ext/alloc_traits.h"
#include "../../../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/ext/array_allocator.h"
#include "../../../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/ext/atomicity.h"
#include "../../../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/ext/bitmap_allocator.h"
#include "../../../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/ext/cast.h"
#if __cplusplus >= 201103L
# include "../../../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/ext/cmath"
#endif
#include "../../../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/ext/concurrence.h"
#include "../../../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/ext/debug_allocator.h"
#include "../../../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/ext/extptr_allocator.h"
#include "../../../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/ext/functional"
#include "../../../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/ext/iterator"
#include "../../../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/ext/malloc_allocator.h"
#include "../../../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/ext/memory"
#include "../../../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/ext/mt_allocator.h"
#include "../../../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/ext/new_allocator.h"
#include "../../../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/ext/numeric"
#include "../../../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/ext/numeric_traits.h"
#include "../../../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/ext/pod_char_traits.h"
#include "../../../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/ext/pointer.h"
#include "../../../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/ext/pool_allocator.h"
#if __cplusplus >= 201103L
# include "../../../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/ext/random"
#endif
#include "../../../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/ext/rb_tree"
#include "../../../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/ext/rope"
#include "../../../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/ext/slist"
#include "../../../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/ext/stdio_filebuf.h"
#include "../../../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/ext/stdio_sync_filebuf.h"
#include "../../../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/ext/throw_allocator.h"
#include "../../../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/ext/typelist.h"
#include "../../../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/ext/type_traits.h"
#include "../../../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/ext/vstring.h"
#include "../../../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/ext/pb_ds/assoc_container.hpp"
#include "../../../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/ext/pb_ds/priority_queue.hpp"
#include "../../../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/ext/pb_ds/exception.hpp"
#include "../../../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/ext/pb_ds/hash_policy.hpp"
#include "../../../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/ext/pb_ds/list_update_policy.hpp"
#include "../../../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/ext/pb_ds/tree_policy.hpp"
#include "../../../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/ext/pb_ds/trie_policy.hpp"

#ifdef _GLIBCXX_HAVE_ICONV
 #include "../../../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/ext/codecvt_specializations.h"
 #include "../../../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/ext/enc_filebuf.h"
#endif
