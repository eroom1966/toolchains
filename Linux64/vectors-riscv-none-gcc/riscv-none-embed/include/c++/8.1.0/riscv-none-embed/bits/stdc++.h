// C++ includes used for precompiling -*- C++ -*-

// Copyright (C) 2003-2018 Free Software Foundation, Inc.
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

/** @file stdc++.h
 *  This is an implementation file for a precompiled header.
 */

// 17.4.1.2 Headers

// C
#ifndef _GLIBCXX_NO_ASSERT
#include "../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/cassert"
#endif
#include "../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/cctype"
#include "../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/cerrno"
#include "../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/cfloat"
#include "../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/ciso646"
#include "../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/climits"
#include "../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/clocale"
#include "../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/cmath"
#include "../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/csetjmp"
#include "../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/csignal"
#include "../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/cstdarg"
#include "../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/cstddef"
#include "../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/cstdio"
#include "../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/cstdlib"
#include "../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/cstring"
#include "../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/ctime"

#if __cplusplus >= 201103L
#include "../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/ccomplex"
#include "../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/cfenv"
#include "../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/cinttypes"
#include "../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/cstdalign"
#include "../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/cstdbool"
#include "../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/cstdint"
#include "../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/ctgmath"
#include "../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/cuchar"
#include "../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/cwchar"
#include "../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/cwctype"
#endif

// C++
#include "../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/algorithm"
#include "../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/bitset"
#include "../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/complex"
#include "../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/deque"
#include "../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/exception"
#include "../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/fstream"
#include "../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/functional"
#include "../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/iomanip"
#include "../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/ios"
#include "../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/iosfwd"
#include "../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/iostream"
#include "../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/istream"
#include "../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/iterator"
#include "../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/limits"
#include "../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/list"
#include "../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/locale"
#include "../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/map"
#include "../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/memory"
#include "../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/new"
#include "../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/numeric"
#include "../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/ostream"
#include "../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/queue"
#include "../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/set"
#include "../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/sstream"
#include "../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/stack"
#include "../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/stdexcept"
#include "../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/streambuf"
#include "../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/string"
#include "../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/typeinfo"
#include "../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/utility"
#include "../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/valarray"
#include "../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/vector"

#if __cplusplus >= 201103L
#include "../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/array"
#include "../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/atomic"
#include "../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/chrono"
#include "../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/codecvt"
#include "../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/condition_variable"
#include "../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/forward_list"
#include "../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/future"
#include "../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/initializer_list"
#include "../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/mutex"
#include "../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/random"
#include "../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/ratio"
#include "../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/regex"
#include "../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/scoped_allocator"
#include "../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/system_error"
#include "../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/thread"
#include "../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/tuple"
#include "../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/typeindex"
#include "../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/type_traits"
#include "../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/unordered_map"
#include "../../../../../../../vectors-riscv-none-gcc/riscv-none-embed/include/c++/8.1.0/unordered_set"
#endif

#if __cplusplus >= 201402L
#include <shared_mutex>
#endif

#if __cplusplus >= 201703L
#include <charconv>
#include <filesystem>
#endif
