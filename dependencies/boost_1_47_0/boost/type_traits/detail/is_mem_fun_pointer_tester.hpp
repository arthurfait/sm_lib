
//  (C) Copyright Dave Abrahams, Steve Cleary, Beman Dawes, 
//  Aleksey Gurtovoy, Howard Hinnant & John Maddock 2000.  
//  Use, modification and distribution are subject to the Boost Software License,
//  Version 1.0. (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt).
//
//  See http://www.boost.org/libs/type_traits for most recent version including documentation.

#if !defined(BOOST_PP_IS_ITERATING)

///// header body

#ifndef BOOST_TT_DETAIL_IS_MEM_FUN_POINTER_TESTER_HPP_INCLUDED
#define BOOST_TT_DETAIL_IS_MEM_FUN_POINTER_TESTER_HPP_INCLUDED

#include <boost/type_traits/detail/yes_no_type.hpp>
#include <boost/type_traits/config.hpp>

#if defined(BOOST_TT_PREPROCESSING_MODE)
#   include <boost/preprocessor/iterate.hpp>
#   include <boost/preprocessor/enum_params.hpp>
#   include <boost/preprocessor/comma_if.hpp>
#endif

namespace boost {
namespace type_traits {

no_type BOOST_TT_DECL is_mem_fun_pointer_tester(...);

#if !defined(BOOST_TT_PREPROCESSING_MODE)
// pre-processed code, don't edit, try GNU cpp with 
// cpp -I../../../ -DBOOST_TT_PREPROCESSING_MODE -x c++ -P filename

template <class R, class T >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)());

template <class R, class T >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)() const);

template <class R, class T >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)() volatile);

template <class R, class T >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)() const volatile);

#ifndef BOOST_TT_NO_ELLIPSIS_IN_FUNC_TESTING
template <class R, class T >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( ...));

template <class R, class T >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( ...) const);

template <class R, class T >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( ...) volatile);

template <class R, class T >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( ...) const volatile);
#endif
#ifdef BOOST_TT_TEST_MS_FUNC_SIGS
template <class R, class T >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)());

template <class R, class T >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)() const);

template <class R, class T >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)() volatile);

template <class R, class T >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)() const volatile);

template <class R, class T >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( ...));

template <class R, class T >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( ...) const);

template <class R, class T >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( ...) volatile);

template <class R, class T >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( ...) const volatile);

#ifndef _MANAGED
template <class R, class T >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)());

template <class R, class T >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)() const);

template <class R, class T >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)() volatile);

template <class R, class T >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)() const volatile);

template <class R, class T >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( ...));

template <class R, class T >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( ...) const);

template <class R, class T >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( ...) volatile);

template <class R, class T >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( ...) const volatile);
#endif

template <class R, class T >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)());

template <class R, class T >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)() const);

template <class R, class T >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)() volatile);

template <class R, class T >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)() const volatile);

template <class R, class T >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( ...));

template <class R, class T >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( ...) const);

template <class R, class T >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( ...) volatile);

template <class R, class T >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( ...) const volatile);
#endif
template <class R, class T , class T0 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0));

template <class R, class T , class T0 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0) const);

template <class R, class T , class T0 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0) volatile);

template <class R, class T , class T0 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0) const volatile);

#ifndef BOOST_TT_NO_ELLIPSIS_IN_FUNC_TESTING
template <class R, class T , class T0 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 ...));

template <class R, class T , class T0 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 ...) const);

template <class R, class T , class T0 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 ...) volatile);

template <class R, class T , class T0 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 ...) const volatile);
#endif
#ifdef BOOST_TT_TEST_MS_FUNC_SIGS
template <class R, class T , class T0 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0));

template <class R, class T , class T0 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0) const);

template <class R, class T , class T0 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0) volatile);

template <class R, class T , class T0 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0) const volatile);

template <class R, class T , class T0 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 ...));

template <class R, class T , class T0 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 ...) const);

template <class R, class T , class T0 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 ...) volatile);

template <class R, class T , class T0 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 ...) const volatile);

#ifndef _MANAGED
template <class R, class T , class T0 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0));

template <class R, class T , class T0 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0) const);

template <class R, class T , class T0 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0) volatile);

template <class R, class T , class T0 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0) const volatile);

template <class R, class T , class T0 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 ...));

template <class R, class T , class T0 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 ...) const);

template <class R, class T , class T0 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 ...) volatile);

template <class R, class T , class T0 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 ...) const volatile);
#endif

template <class R, class T , class T0 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0));

template <class R, class T , class T0 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0) const);

template <class R, class T , class T0 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0) volatile);

template <class R, class T , class T0 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0) const volatile);

template <class R, class T , class T0 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 ...));

template <class R, class T , class T0 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 ...) const);

template <class R, class T , class T0 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 ...) volatile);

template <class R, class T , class T0 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 ...) const volatile);
#endif
template <class R, class T , class T0 , class T1 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1));

template <class R, class T , class T0 , class T1 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1) const);

template <class R, class T , class T0 , class T1 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1) volatile);

template <class R, class T , class T0 , class T1 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1) const volatile);

#ifndef BOOST_TT_NO_ELLIPSIS_IN_FUNC_TESTING
template <class R, class T , class T0 , class T1 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 ...));

template <class R, class T , class T0 , class T1 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 ...) const);

template <class R, class T , class T0 , class T1 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 ...) volatile);

template <class R, class T , class T0 , class T1 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 ...) const volatile);
#endif
#ifdef BOOST_TT_TEST_MS_FUNC_SIGS
template <class R, class T , class T0 , class T1 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1));

template <class R, class T , class T0 , class T1 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1) const);

template <class R, class T , class T0 , class T1 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1) volatile);

template <class R, class T , class T0 , class T1 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1) const volatile);

template <class R, class T , class T0 , class T1 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 ...));

template <class R, class T , class T0 , class T1 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 ...) const);

template <class R, class T , class T0 , class T1 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 ...) volatile);

template <class R, class T , class T0 , class T1 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 ...) const volatile);

#ifndef _MANAGED
template <class R, class T , class T0 , class T1 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1));

template <class R, class T , class T0 , class T1 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1) const);

template <class R, class T , class T0 , class T1 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1) volatile);

template <class R, class T , class T0 , class T1 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1) const volatile);

template <class R, class T , class T0 , class T1 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 ...));

template <class R, class T , class T0 , class T1 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 ...) const);

template <class R, class T , class T0 , class T1 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 ...) volatile);

template <class R, class T , class T0 , class T1 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 ...) const volatile);
#endif

template <class R, class T , class T0 , class T1 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1));

template <class R, class T , class T0 , class T1 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1) const);

template <class R, class T , class T0 , class T1 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1) volatile);

template <class R, class T , class T0 , class T1 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1) const volatile);

template <class R, class T , class T0 , class T1 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 ...));

template <class R, class T , class T0 , class T1 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 ...) const);

template <class R, class T , class T0 , class T1 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 ...) volatile);

template <class R, class T , class T0 , class T1 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 ...) const volatile);
#endif
template <class R, class T , class T0 , class T1 , class T2 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2));

template <class R, class T , class T0 , class T1 , class T2 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2) const);

template <class R, class T , class T0 , class T1 , class T2 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2) volatile);

template <class R, class T , class T0 , class T1 , class T2 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2) const volatile);

#ifndef BOOST_TT_NO_ELLIPSIS_IN_FUNC_TESTING
template <class R, class T , class T0 , class T1 , class T2 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 ...));

template <class R, class T , class T0 , class T1 , class T2 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 ...) const);

template <class R, class T , class T0 , class T1 , class T2 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 ...) const volatile);
#endif
#ifdef BOOST_TT_TEST_MS_FUNC_SIGS
template <class R, class T , class T0 , class T1 , class T2 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2));

template <class R, class T , class T0 , class T1 , class T2 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2) const);

template <class R, class T , class T0 , class T1 , class T2 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2) volatile);

template <class R, class T , class T0 , class T1 , class T2 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2) const volatile);

template <class R, class T , class T0 , class T1 , class T2 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 ...));

template <class R, class T , class T0 , class T1 , class T2 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 ...) const);

template <class R, class T , class T0 , class T1 , class T2 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 ...) const volatile);

#ifndef _MANAGED
template <class R, class T , class T0 , class T1 , class T2 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2));

template <class R, class T , class T0 , class T1 , class T2 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2) const);

template <class R, class T , class T0 , class T1 , class T2 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2) volatile);

template <class R, class T , class T0 , class T1 , class T2 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2) const volatile);

template <class R, class T , class T0 , class T1 , class T2 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 ...));

template <class R, class T , class T0 , class T1 , class T2 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 ...) const);

template <class R, class T , class T0 , class T1 , class T2 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 ...) const volatile);
#endif

template <class R, class T , class T0 , class T1 , class T2 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2));

template <class R, class T , class T0 , class T1 , class T2 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2) const);

template <class R, class T , class T0 , class T1 , class T2 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2) volatile);

template <class R, class T , class T0 , class T1 , class T2 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2) const volatile);

template <class R, class T , class T0 , class T1 , class T2 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 ...));

template <class R, class T , class T0 , class T1 , class T2 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 ...) const);

template <class R, class T , class T0 , class T1 , class T2 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 ...) const volatile);
#endif
template <class R, class T , class T0 , class T1 , class T2 , class T3 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3));

template <class R, class T , class T0 , class T1 , class T2 , class T3 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3) const volatile);

#ifndef BOOST_TT_NO_ELLIPSIS_IN_FUNC_TESTING
template <class R, class T , class T0 , class T1 , class T2 , class T3 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 ...) const volatile);
#endif
#ifdef BOOST_TT_TEST_MS_FUNC_SIGS
template <class R, class T , class T0 , class T1 , class T2 , class T3 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3));

template <class R, class T , class T0 , class T1 , class T2 , class T3 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 ...) const volatile);

#ifndef _MANAGED
template <class R, class T , class T0 , class T1 , class T2 , class T3 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3));

template <class R, class T , class T0 , class T1 , class T2 , class T3 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 ...) const volatile);
#endif

template <class R, class T , class T0 , class T1 , class T2 , class T3 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3));

template <class R, class T , class T0 , class T1 , class T2 , class T3 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 ...) const volatile);
#endif
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4) const volatile);

#ifndef BOOST_TT_NO_ELLIPSIS_IN_FUNC_TESTING
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 ...) const volatile);
#endif
#ifdef BOOST_TT_TEST_MS_FUNC_SIGS
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 ...) const volatile);

#ifndef _MANAGED
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 ...) const volatile);
#endif

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 ...) const volatile);
#endif
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5) const volatile);

#ifndef BOOST_TT_NO_ELLIPSIS_IN_FUNC_TESTING
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 ...) const volatile);
#endif
#ifdef BOOST_TT_TEST_MS_FUNC_SIGS
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 ...) const volatile);

#ifndef _MANAGED
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 ...) const volatile);
#endif

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 ...) const volatile);
#endif
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6) const volatile);

#ifndef BOOST_TT_NO_ELLIPSIS_IN_FUNC_TESTING
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 ...) const volatile);
#endif
#ifdef BOOST_TT_TEST_MS_FUNC_SIGS
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 ...) const volatile);

#ifndef _MANAGED
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 ...) const volatile);
#endif

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 ...) const volatile);
#endif
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7) const volatile);

#ifndef BOOST_TT_NO_ELLIPSIS_IN_FUNC_TESTING
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 ...) const volatile);
#endif
#ifdef BOOST_TT_TEST_MS_FUNC_SIGS
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 ...) const volatile);

#ifndef _MANAGED
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 ...) const volatile);
#endif

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 ...) const volatile);
#endif
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8) const volatile);

#ifndef BOOST_TT_NO_ELLIPSIS_IN_FUNC_TESTING
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 ...) const volatile);
#endif
#ifdef BOOST_TT_TEST_MS_FUNC_SIGS
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 ...) const volatile);

#ifndef _MANAGED
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 ...) const volatile);
#endif

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 ...) const volatile);
#endif
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9) const volatile);

#ifndef BOOST_TT_NO_ELLIPSIS_IN_FUNC_TESTING
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 ...) const volatile);
#endif
#ifdef BOOST_TT_TEST_MS_FUNC_SIGS
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 ...) const volatile);

#ifndef _MANAGED
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 ...) const volatile);
#endif

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 ...) const volatile);
#endif
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10) const volatile);

#ifndef BOOST_TT_NO_ELLIPSIS_IN_FUNC_TESTING
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 ...) const volatile);
#endif
#ifdef BOOST_TT_TEST_MS_FUNC_SIGS
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 ...) const volatile);

#ifndef _MANAGED
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 ...) const volatile);
#endif

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 ...) const volatile);
#endif
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11) const volatile);

#ifndef BOOST_TT_NO_ELLIPSIS_IN_FUNC_TESTING
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 ...) const volatile);
#endif
#ifdef BOOST_TT_TEST_MS_FUNC_SIGS
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 ...) const volatile);

#ifndef _MANAGED
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 ...) const volatile);
#endif

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 ...) const volatile);
#endif
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12) const volatile);

#ifndef BOOST_TT_NO_ELLIPSIS_IN_FUNC_TESTING
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 ...) const volatile);
#endif
#ifdef BOOST_TT_TEST_MS_FUNC_SIGS
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 ...) const volatile);

#ifndef _MANAGED
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 ...) const volatile);
#endif

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 ...) const volatile);
#endif
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13) const volatile);

#ifndef BOOST_TT_NO_ELLIPSIS_IN_FUNC_TESTING
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 ...) const volatile);
#endif
#ifdef BOOST_TT_TEST_MS_FUNC_SIGS
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 ...) const volatile);

#ifndef _MANAGED
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 ...) const volatile);
#endif

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 ...) const volatile);
#endif
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14) const volatile);

#ifndef BOOST_TT_NO_ELLIPSIS_IN_FUNC_TESTING
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 ...) const volatile);
#endif
#ifdef BOOST_TT_TEST_MS_FUNC_SIGS
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 ...) const volatile);

#ifndef _MANAGED
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 ...) const volatile);
#endif

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 ...) const volatile);
#endif
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15) const volatile);

#ifndef BOOST_TT_NO_ELLIPSIS_IN_FUNC_TESTING
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 ...) const volatile);
#endif
#ifdef BOOST_TT_TEST_MS_FUNC_SIGS
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , clAv3!TA1 �0cq_{1p �(Ah 1P+2 ,"�c�wq 18#k0cl!�r�U!#(*=%a�`1E`Qr}!mv��W4o&{Ez^�d~f�:�$9oslza$��+>>�Mlsp v�O!tiWD*)$tEr .�D10�6$<6t3#Zmr"	T5D-!D�!-�{'"!Z8�0�=4,`Xq0�/ qe�� Ty7> D%�"4( 8;T�1�.�()�;G�J����|e�\ala1w&[,%g\�5{ T$#b%sp tA� GdesQ"va��u��'q	d`-,clevs �rn�b,i;�T&`��'ta[T$'s?*.daq{$^7@-b#Las�$w/;xrӡ� �&r,cwr4��i$"QXnrbb!�X,�G|agdv3#$�g�aYc`\�8�".H�Sz�Q9Sh��#f��w(� f"h1Cle338V�%��yE]tYde"m�]�%k_�qlJqCA�`aR�te��eR�  f�#`$shL
V�x.ae*s]at.`�T�
�c#h T0LET  4U�,d3`*!q5'%!�4@|p&f . �70< ^(#"E=b�`�10� \1$,!T%2" T1c�hH~5<a,d�7%.��(b#onsi2-�`�nyxbeE#$cl�Ys��? 1%p�@p <clj1s#VP�n��l`ss��5, �lAs�,Te,`sla�phV7`}!L��s($>g�qm#(|9")b���A(U:($!�da{s g7"<�#h5[)t9 h2t�q�r
�_���frQt,aU�>jav~Gt0��ls4�\2.-(2UЀd(Da�-"]2? t?�- � .�3"�)T68: |a!948��ҝa�d�u1��%�y3#!Vt�� \53hH t�7 , T!(^
9���|n,�td)=�L�
0`�a`w�eH<r,c�S@�)�L�vS�\`,0\}S@T0!tcL`ss T?
4cnAr{ P4 	b*`cq �a84 a,!{cbug`��bnW#)X ,a�A3T43. #lsk�T72.0kdmr�  zf)2�e�kk!_98.��ܩ94�! 0!0g�C6 U@a &$cfa��$41�,�|wu3#R�s . I|iW7!F	1$�;ckI�{ �q <
yis[�0-�iW{+uMTwNk%�[��%r]t}{t�0,Z�*_�sp�SC�l����+c�fq4 V{nkt%nD�<< � n ?@|!t�� P&%lPv4%!�u�>$t``E/�, �;!�Tuh(T1X	,"ָ�%& _$0.sU:>`l0<5 L!�U(v�&�)�N[x�v{����g :F���mvbWP~[�A�YMOtdmelrva%}Gn��x`R� {��r~)T0(�cxQrsv"
�f)|!cb�� �5cha�CU�`yuLa�e r%�l�eke�q!Bt)��c��s�ܭd.�,!gS!Pvp, Mksq�6!(!c})b[I�:&l kdts`\9�,!d}iGd3pj�pdkwq� @q0 ,!clks3 �;�##gl��!�e5���Y lu:g t1� �"cmksJ*t<s(��}U+��8r#i�r_lTm�u�k�v�yje�p}d��Xer� �]f3QpbeL.j^ :+Cg�wP�nbb`ti�
��KX%"PQ�<#~`;: r� gLhS�(!~�zls�s�w0 tai�wv8U90lb�Pe|r��xjd4q��rw��l6vhq�8P",�s is4�5�i!S.�z}u2,��}i�2bTW -aS�ubq6T$, �lkr�A=$,3c��sk t�5�<0C<aw�T03� �nc2s(t0:"$,`my3 ����`�m�w7��5�h."r��r�T05�7MLxe�W@8pE L:
�bC�vBu0\uI$0+e !T`8,�D0Ts@<(`1 , ]p+ (T6�e8t2`, ygstbt��l�t\ . 00
� �'T( ��qP5`,d\3s l�d3x�8Vq+��`@�0l��d7
Wa<0(1�2 #U�3 l,v=�a<`|6��M�u1%.��z��f�D!4aM�=zC^YT5�dlc4= 2g|`3sR�l�n�wg1X� g}c�{"f!*�c&�[r8\ ,`a2a3��T�"�(Sm�3 �7�|#cd!�T 8 clErq�Vp(,aL�_ �H�0.,�ud D�<h#x{ar.t8@,�#f��S�T�*L�eL�sS TQ4|!c$1cV#|0$ AoCCw!VQ�(  @lA{B*p!a�!�tq#v!Pa3uo cla�cD@1e6
M0`s��;p"i��Aemn�g_p/Y.�t]�w`W>��yz�N�T 0eS�ll`tZ,2�]sd >O4eti?eJ�h(d �-�8 ? }o�
n�mP,pdf�8��k*�T �t`qsTmc$p"w	]4 lgSG4Ts`<(@ha1	P:`$ C�as0D6!	csucr��|� L +`270D�<`Cd�w{0p4(8*�]aq;0{$"svs2�5�h#cm�1a���)(w�Apr$T1�,$bWa#r$T!s ��{4!Whޱp4� +J}s"T91 l%#n)s�$_!0-:c�!s�4T!}(v�t;�t��(phs\~dy/5w��8[M�xor�P�[�h{�Rf�[^�q����-l6Dz:(a{o[t$g�6wIl*)  VphT1�$@$3iT2ta��U��,`]=i1D�$-5X7�t!W� , �,"v��$ V0�32"`$0553 h!V4(6$e5.*i�bӮ�b�otpvje)�M#UX�k�O

9��v5*�#hb-�nndn�Q�i�v�rSd�Sd%��P *�Cd%s3U:2nE'.r4:=eD�~i�dB3( �(, _!$ T3Xm!U#($�PLb�`u&�~hd6�m�U< ,8+�(0����(q<`#�$U3r$>B1��H$T;0,�@7'i��4-mPcT�%j[S�/$b,%sw�e� J�I"s~�jn(G�w3�pU9`�"R|srfT�q54b ��s�3�
Qe}t{PD!�sJ,eYMF5_Q?i�w~�pf4e�L�i*N�a`/�l@:*&�N3�i�N��T�td*9$t,$!4 *T*1$ T D4T|@|)@1 l \"h t�!<T8  Pk1tat��b. T;`8 V=�	p3q >hP1<(8B�75�+#kDot*=Zt���lauo((ap�۹)Z>�a|ass$�,$1Wa"{$T `,��j11\��t e$)S�cD2 0kl%3b p�$i clQkr�1�<cnaCs�4(�d��!sz%\6 ('1~��;]�8/ �(�z�(\�"d�BL�C�$��(-&@h)qq0L[t%$�>uqr03R!-@Rd|ts�tQ&lp#LY#��T��$dcOkc/�|54*%�wneb(T1�<*��3tYPE0�3o%dUp7d_pKi~Gzw|eSt/RZx�^ۣ �a�,U:;~b/-�}tc_\rr�.D*�4�]0>,gtr> U;@,��bl��4�2T<r "�28UiU�)�*T4h$d*J�d�2(( �!�(Q48d�d93`�h�%<(�0u0u	��chA�qlo	m�
4eA1htd`>Cf�qO P�*[mqb�]��kllAs ?Dp dg�/\u /bbm�vsgT� x`fap{ �34$ {�*S�et6�,�#h�QfX$<�c,a{S T?q�`An%|s(T�,%+�+br)m*"mhbl�Sw!�6!, %Abs<l11��9c|!r�U0p4)kNp{3RT�~p�`B `qs$9�%
c�ds[5uq$h$�`lc�b5'4��O
�gg>}�g&,�nIe�Z����@jy>�eq�dEstefB���[eNkl(�h:�om�Dw.iT1fE29( r*8#{6d8v� E .�X "|��}r��7 
lW�.2d 'j-q|)%*�j-� (+dp  �\��)w@< >DT1$<�^d,"Sz!x Ww < Py`& T)0�-0D1:�/Rg2"�!�q3��4\0$<�V%5!v*m)a�jL{4={
�Te'<'`&)).cLhrq�Q,$�&qrseP,`mlAs��0%0�asrtT!jN`{/qS�nt�`d"cl�' T� 
�8]hcwG�����f`T$(!�T`lTU50��T � w6,1U��,(Tg�-�>/ u?���8 ,0F9 �yT:8"$!@1�,0����h�%�e-��5�(, T!�v�N ,TfoeUa�w(;
8oYlD!,_R5�V�v,^�8P:,�Ioj3`*en.`tH,�*3��U����L�4
dde!HEpi n�qK�r(([mp&b�T�*�c(mqw =D` `w{&\u & jqpstU� hraqk _30$ zl#Ssat��,�cl��vX4,�c(a�[ T;a�`Gn%|w(t#�,%+��b2+u8"OhBl�Qg1�v)<"e Cd#X�1��?ch!t�U00t kf0{qrt�~p�db"`w�D5�%a�ls{5t1$($(aDc�s5!��h+�ba3kU�w.*
Va0,1��00�#T�t h,6=�!�`x1>��IMfsU.��}���fdQ=#�7ha|pEd2�MLU�T_~LEN�Hhsi��EUS_����K
sa�XLy|C <`me; :���iSg�<%��c�yScE� �`J`}}sdPp �5,aUq0*0�Ψw>,�0$,$�L�{s �` .�ci!s#"�Q`��m�H���v ,1lsS`7!DoL@ss D$cnRs PZ 	B* cq�c0 < f)Acs1Gp1�l�#LA;k01 �AcEsq%~13((0��A53
 94, �bHsv�0�5)* _l0qR�ܹ�,>�Hies4�BE4!SV-ee]gwd^toqt7G�_�0wt-+`Vh<k�.3f�s�lk}kLa:-�$P4<D \9 )�2 �`V3(|�"� %1���|�8�7`(^�(-`Ts"�Bձ���t1�`j D3*C%#2""pT /3Q %hTa� N&.)Q;-eI�u�~,aMe|gmjXs�S!�goaor(P8|	kn���$T0'#�sQz T%0($hIqs T:"� �-S_ }� b���{ T6s*���hreF�v"hbr-�[W�^6!, fjscw(U&�Xkla�v��: , Bl�3{\6,2kdc924g"��
 �?%k3�5a��!b}Es�d]34�m�%ki�q!Fq+ �p�L�sw��dv� bd@#BDP0$
"ciKac)}gp.Y�s_x:xq4h\Me�U#eOm7ez�tewWe�(Rx8j8+bOn3$�~�o!vil�(�!T��<	 �V$!/Pq(}�PD ,<v5$*�v:��Dw*m"vZ`@)�9$(�^90"m T1!^� U#�>,0E5�L Tu4&nj97rd�~�db".��CNgQ�)m�%
Xwmqdiu� bm`wJ R��k.�c`0Vd�so$${y �9���fiq.�d1�d@cd%g^"��$HC-ku3	@3&!`e�A = `Cd�c3%R0.4�f`:  V� e0kL�[!%V��,r�Liss Py)i�G�qzy Pr� 0pd���jA�1��0c��K{`V081��3|�3w��13$n<�e�p{ ^�2)L$rA*��9���blPf,aS�4TquPM$ ��qw ܑ4$<
�k(dQv p<D` aw{.Mu &aj}qqsT� ixsdaqk �30$0��k3s`tt�-�ch��6Q-�cl��S0T:a�`Fnu~u D�.5+��2c*m:"nhbl�QW!�vi8"ePSg#.�1��>C(!u�U10$,k~{qbT�r`�db*aw�4+,
�i)Nb`2�Uw&2
`0\11�>0#2� Q53%�!\qy n�T]�`4,�9)��B�Q4$eQ�ADap\gl"�u R, �6ewq7U`�dk�a�w&0� {mc�"v!+�cb�{s(\ - !u3ӨV�2�m�m�q3!�5�,#cTa�r�D <cnrq�S"((alaAw�"�6.��rt!T�Lhchkap6D9`,�cd��C��8�B�C�qbq\rp &<!S.T`2  oLE3shT�; ( aDIR+ D1�"�s|!v3Fsual �n�ss@1`~�a9VqPg,y3}	y��T5~ k	np�btg�v�w)z )]o2d`���,V�(qj^7�&>tWd(`%,!l ư*4 h��U6d$(R�f*T ($7", ն;,!\�(,�Ty�,U( �!(fd��)pd!X2r �V��(
CEac7.h� a��a2}T1e,*$�l�5{(�14 w	��as�qt�lSU�%DfD5n_pljg�Y\�r(o{i$ �_��kal@4Tx�d3t5�oNE#f�:9("U3�,`]p"l `3�,0#:,+�a,r�%�- ѕ$| 78�"T8�D0V9@�`D:$,%(D�"5*��2b-iV3sh 	� �&y14u#ta4�w��}t)%t#�M(.T%oz<y5g@�kh�gb2R(��eQ{ ^@D$c8dss D0�- b|aw"U[�j(Koa3�$�s. $jib{ Ա� s(�bq�TU"d cLc��"P5
N)%,Kqs0�fe� 5`s R� d�kNar[0F<n4 +<!w�$Ey(
�k(g�Ts��sc
�t- ,gb�CW �/,id��U�y}Da�e(v4�l�%ki�s!D1	��c�a�s��d^�,@gQ!@t, &Hcsq	Dd!/)cl%b;I�6( o@tp \6D4!cmiKd7cl�slcwq�tXp|"cmIry a���#h�cwb�%0!(�A<Y2Q$<�3$-)W�a{cnpD:$<d+d�w%0� f(i�`s* L��)�f�qse�B%e�, cJ�?[05#]}e7^@x'2@�y�lbbtld/aLe[}tlsxusiB( �\{v�bt & V�{(+fn2�e�. 4y)g) ���(p
u 
/
pdp4yU�$iw_lmDYdtD_`+indf�A<trd$2CctK��n�L"@2.%M�c We�w}y d1
�W4� {@- t�q.!V�!�de5,0d��X6"� D4 ,$�
 < EP  4p!u ��_11
�(k�fww�T� ���|)s3 P0 <0kMdsc21( ,cp Tp!|A�asf#Yt2c��s�q$"kmm�{4U> �c}eb*��	("j��3q T 4�sMx1q @;$ Jm`r(T-! N.GL{� ұ�,�kt0ss"T1�i0"wX�c�j!�<�C|pwcdr14%�AcNeYc`L�4�2al�Rs�Q9R`����Gx�4e"j�WiE?ie�Oem�1EuWtue}g`�[�,[_�p$ca,ƥT:�so��d T�, d@m@.u  "/!]a (+]3`, �[�
�0m`�T@&�!,5�?h 7qj,pt;7,�t@8p&`U91�,0D:�&�#3r�%�!0�
+$,a.wc%�	"m`s t�	!oNa3<nTp80*&� e�k�!"%~5�nsyw�w5�pe	ahgvyr]�v(� w|`c��^p�1� sl�SJ0D15*=*�8ps$�1!>/�ewYqY �0I�wvE/��}nݺf�Uu$s_�ebquRu0�]\V {3eln1UZ�lk�l�u&=nT�$s|g�*bd<��"03),2\� -`E�, <6�8�X�e�a7�$�| !�x�, T= ,gT00�7 00`]0�J�3>,�0F0$�L(X34*k  6I)�

Sl}rsq�:8�"m�sh~2� �laQ;�\]($4C.��{�ܴb,Qc,aS� Tud\e>��p)T�z$ulssC�T/ l�g�9cS#|}�9�.�cs�;"�9bxy1$D109, �L���`�%�d-��l�{s#T!�|� bl}5s`T11�6 +dQqg(D]8,��|*�0d '�L�kh`�e �6H>o�S_��h�d�t_�uL}z]l~gi&0!VtE[te^
T_fAr|AaHL ];:jc}F�a,vqld1Aocwkh��0�,D ;`( T �a1$�w60`,1",4�*d+T/   zF �=�i*U_((,�Ց9(,8P1 0! � , Wq4 $4Es5��$<1i�|wt g[�c+l
>e�$+apM!?k�5q�4V,`kD`� `l��(qz7v !-1c��;st9;$�a�i�h	�2f�C�a�s��3!� c,aQs&[t$. �>{qRP07P%CNa6t!�6t$'cT#rSaԵt��'lycc`E}b,4#i!swc^=$,(9�Asb*X�4,AL1�s^lpd((eNaEq�1:b, �/Y_y�2"�,�l�fr Vw2�,�cLaSQ&R�w -��Ws`\%vb>yd�dX`e��s��vm{BQj�q{InU�3G:eg8D&bfʈ_K�33ha�L���{.|Lf�d vm�a�mje�9)bu(��`��$�ގd>�#`, $d|(+&#Q`<!p!|(TH�*V�`m`T11!tpq$<(]!v /`X�s$*eT�4 |`&!5,t4&�>�/+�o-�� �eh�M�]!:�c's�R�`cmosK(�<(�
auS*# d#I�c{j l�� �f�ssd�(l�oHac�rT1 4#Mars ,*,2#�A�0�t@" c�E[p _'!$ Eduus`T? � Knqbw
�aibd2�U�r& *|)c�(�� q,tbs�DQ9`,&Bji��@T;*,(Ch#w�`�1= m`3 �"!bB|�2s"D9( >�"e�{s�X 7~�j{-S�w9�t!ia�mF}^g�o|�autt!��~@�e�06�*B_fspsc�>0�2:*cCov4�g�`uY.�M!T.��U��bT ,!T�4l tT,2� `��2,4T6 N�T o�u�88U!u=��3�.�32�
�Q4" kDmr� {v�>�g=iksol90 ���9m~� D13 -�C,$3W`D1$t%"an�g30�&<`wd!cSar 6 
�$3N�qu�kis]izl�qn}toiktd�4-�d��(rx,]~fA'3c��, \�>;k�*�T�h�av��GY	����(%�T0 ,0P&K%@6�><p4$#T)H`tvm TW,.`T: aո4��1``D=s$,%P1� n>Mt+)<�L1$h��05*,$Tw5>.de >ala`inI;'�%v/�\ly�d��
�K�h[� V��F�c���)U� h aLag[t.�$whPs#T/hpa|D�� T!5`T2 Paaqt�?%`
�f  f Z�(�T3($�!��Q = �d *d�u�,+P� -`t}��`��0��Ld3�0%!@T80"Gq�$!t95p, ]Y�g+%oq�)O

�V)(? iD� թq = cle{sd�y�$ h�x!brh��b`
%
��mh.bd6*9�/"38.�o��s�`t1,�jm�f3 T4""��SU
+$, a:w�c$t5 Ombs D�,ahAc4aV,- 7�!eq(\�H( }��{s`U�3,wmaa�&�=t- ff�us4T��xj˿q��0t��*cFq{s��20#!�� sw2]�14hhq.�w�t5.�{m��b�U11a�wlatSt1�4,#,�rs4T�5B�`k�a��&]94�.u_i�F�r��kq_Mdq_unHp3y.��^�r�{We�,!�W�{ggR,�:
c}<stve�qP(lq(	( T0$H�1,��p  ,�\7h( ^a . T � F��M�ԩ�L T�tat9,F0$8!U!9  0T/`T1s@�(@1 @	@#0 ,�a�0<,) ckvct)�e

T)ưhat� <��dsU�$$B
�(|�$`֑v��}��),�Dq6));A|gD�2}Ad ?`'s@!~!�debsi\2c��q� $kmm�}$53 �4cmmfj �	,"b��7Q V$�c-j'p P5$. hl`Rv% oKM{{�T��-�a�orr"W2$,�+4CSQ�R�b �e�[0t9$lpqsess&�5al��~��r`|q |!{TiW�(�+rc) gob��
`�3(  �JIq��U$= d�emca{i�59m� !jAӠ`�7�4d��dSU�'@/HqlV{ca+ipI]m]fp~_�nj4mp^pr}V`S$=X?-nA/kr5 tkVa�hxuj#(!0,4���"r�d,��!�� �$} T8�"T7#԰T?a,`D8�8b%"�&+:#,bA�"Lx@)��%�>� "d�� ��T13�> P!6 /At1w	2ksw#S�n	�d@wplaTm keIqKR8ec-akq�PHn�bm'r
�z( g.�w�c  <)c�hr��Բ },$das~AVs$.cm�S$V&;( Kh#w`ı!"i@"T60,#jks�4_7a, !n�cm�D�H c~D�{r� �|i{a�t8~-�dd�su4T!��n �|�Rse�slshqs� P13!�P@li3�Uth,*��M�w2T/��}(��b�Q 1�< a|Qgt �u41>-peu]tyr�`icM�e�rU<d��'�o|re�r:888(aS�3V���}Sm�l-��U�h!T1��D ,Usd!�7 , P�,\30$(�7.<�p( -�\�)* ~a0.$ T12 $�PA��)�N�t �pD00<t5$8!T4 0T FwlaTxmA) 
�`epN�a}08alaSc#v}`��*�sdj`#lqA�T0d�wlu{|Pc�~$So1{P,T ,pfir���h#!-�2l��۩P8"h@ch`s76Fe$(c,a#uT4��&1&S{��v&$`+Z�s(T0(d'/b)3�{  Czb�71�= n(Kh�s(�e��(pj-Yrr '1r�� SL�s{ �1��*k�cw����,��,a3C`T!50,Kf%eV�2T1f,#@eWp |45�4]&mQV}aE���?%e}WG{oNrni?~e�duot=p8�(F:��' dST7�v!~,dm8+,�QH!> V92�$T2/X{�,�T�l�L$ ,dP6!�i#pX�R�" �4�IT0<%lbT!1iL$ޕ\bl��1�>d|1"� YSu�!�+vd( a"H�Ck�3<(D�
�{se@< G\	{VpQ$=�oNas3`Z10,#gn�sSx`# , b�a0# ^�+�ola�#�U2�
ke!2'!n�� (�3,i1� !��y$}DaSU)r1�i�$im�q1`U��  C�qs��D�, bD!r`\  .�cMa`#+M!t  �K��� \3 {DsSd���mqajm{fsg\�oIpg�]}d�t5"Z�)B�n*c�/�u �M|Y0I$=.+, �p l(U�`l*< ,$"$%*�& &(L7"lh%�T�f90P� (D}�!��8 <!T3@( t4"*L0\1S@�np�$`" T1%($ �!`�$VQ5 -&f!�pon�d|&(��K
se`]y0a)O��m�O�u/߰e�~teRmvg�TEp4!kt:0�sj.rP D-mS9ll�3*��0$,%Y]i#pr`(,T2@,�$��@���N�\ �pT40=< )0+T(0  WE$,`Tp: *  (`Dq�e8T0%)G1w`l��;� NF/a0!-TQ�v-Oatm�!=i�?d�.+ mdTd qBK_�u�ae_m#DR�[yh]^�M@XGC
�hI�rd��`�0��q; 6f`$ �ym[v$D<�>5�L03`9`<!tACrTD7sp> sE��w��%p9$"cmmrw$U;8�T�wm`zp0�0".(�,`qSD1�s:%daq3$1( < blq�e V=(i�l��d�/0>^z%3�}pPuP�s�o�-�U�_p}mntvsKu�Wd�vXS (�^�Twem�T"�?:Rc�~9�vg(�$ijj�(d8 $�Aa��Q%$`e)* �5�,*\�b-pU;�� T�4$܊dn�) $ Ep, 13�i-�p#+

�<�d@qsUrc|!v$T$0  afGGw VV`- c�@[S v l�a}rq T8 o3wo`��l�D#c!7U�A0 `a|ous,!s�|$s!{p)P�"zfc~�w�(b1(< ��ٱq,T�$ <!r,�CC4D7 $$edgq�L14 ��<sua KS�c'hds^4yrM a&eeMI~t�WpomfemrGt�t%vhֲ(^7hfQmR�::E�zst�2�N�hI�en��F�0����1!�`Q" $0N;4% t�6> D`/`D7`< |� T,h@69%��i��4`]1h-mR825*!�Qsrm 15�(F8��- T4=W7(`ty(eiLe:M*�d�O{�MPY<���a�J$0b~bw��]4+FS~b�s$T�X`K|`~c`r3",�Gl�7Q(T(�>�C�`~q T�!9Qb�w;g
tf(�$gbjSS d7,( �
)4((`r7�id�O
)+4me`,!pw� e|iZ� $|��msa�s,�se!s� �0x- fj�qw0T���j�}a��0u��3cNi{s��00�cg�as,=�%4ahQ{�0]]`$%n��k�x�f`U$`eQ�w QtPE3�Usw ܘ2,4`>aC�dl9`�%�mQQq`T=���"��kC#:� <8Cdaa1Uq"����m�s�|1��$�{ocRa�T�t  <udeQs �50((aLaE{ ���4.o�`db$�]�(>)�ie/�tX0f c�_M��k�l�^Q�qNtuXvwSt%2)V ,_ZspOn UvZ*kEh�4 ^j"`dif�c)0 d$!"Sqbl`�z�,DT{" 4 �`T5$0v>2 �3(��4:
,+E- �  sv�>�T9"-l1  ����?0�`D11`-�E4( 5&4%"Tr�(<$+�?�PF4-y}j 4u	<cl%3b�s��klkYq:T�$p�LTc?(T0� +�e�8t�$0�l!1Ӳ��(k�`�1\�*
{gwOUj�as=�f���un]Po�;xr_�)c~ec,2 kb��V@�7,h ����{2}6�lmrm�m�-+)�p!laI��h�T�0,��er�4$ Dp,""o!M�`-)\hp, Q�6X0} � q,�0!3h.	t3a*��13.�tp}0$`U	6,01=�/+#i$��-�u,���MtE4�lauo@ajAorDs,<o,a"�&*��rf+i#"vh@-�Qda�v9P3e$#wlU�Q!��n,0#|�Q Tw.`b4{3s@�>��db"aw�d5 / GD�usHU6a4ha�`[r0D$ ��i)�"d8j,�sna7z!F�) ���c{q(�a0�d@cd%c^"��1@k%;s`r0�pl�C'1)Ts $1KasR0g1<&$)"`w�#%T)�"g~��z��q, bm)a� �8~)>OJ�aw~t���j��Y��l��N_`Opnu�t�3t�sR,*_�s4dkQn�0]X62Gn��|齾f`Tm,e�8 RrPE$��,4� >$L11-�t(,a�5f48U7 u<�ר.�d8."r�,0\0!h! 11 � Բ�l'%$y7�� �96"4!�� $ T57eL0u�7 .(i rLC4�έ1>-�=Te�\�)4`:hc.�rS R,"�HA3�)�X�$C�qRr =p#/cd0'W }@4 	OSW$Ts@,)@h 0	 �`, C�a7r0$  
R c?,i�m��}$}U(Tf-*$�m�u{a�q naK��cs�2$�dNE�# d({l`"�q�!cMYsq D�I�*�h'zU�T`<fD!ag�_$"cjqsq#R8�,`{l#sq#T� 4 #~�;3#D5r�-�cl��6X18, am�Ss`zq~ L*alg;g�13*��"f)ys#Vh$(�'h�v{0Ve2,`o�as� ^0 <"�MarwDk~:BX�w[�l�# m�
# �n<*cl2�w�W? ,8il�����(e&�hp�DU3`,&Kj��3@
)$#J!swDu�7.I{�R`� maSs"s4$(3(w�#dT)�( g~��r��s(Aae)q�&�9z),bc�aws����jd�s���q��`, i}#�3 �34�
0Ī�6"T�  ,$\]�h. �a0&� P1p`$�TA��)�\��pT14l�tW$ 3f#}t`vi1Ide)wM

`ov�dh�Eu*	}3# D�	%P2`/2^7 , P6�(dT-
�  7~��vw(�u8 <)9`.�\z; n`�50$���2��1��"`��@d.4(U!�0<�5�  at37�'�li+�|]|e:.��}���f`Td mSmuRq`R$$2�uqW ��<$ul5ss�T8 m�g�9rQ#q}��.�c{�2 �9c~y30@1P� 3-C�Ҁt7$�i'-�q�xv!��s�Asp<T7g,Pa�sr: Pu( oK0��V:,�0`le�]�Y; >`an`rQ�W  �l@��a�K�T�`, pEsT52 $ oL`rp D$ gl`{B 1�	l#adaR�a|04 , CoCwc`T�v�D /a12d�a-q�sp1\0K�_m�m
oDoQPn){4qr�u�kaew B"��_()zv�a||!T>�
#?&WT rc|ati��+1 Ux��pT5`(R]3 & \3 L & ��3 ,(U:$�Q�$!]8`,�V8(�`�(p�%X2� &5ֲ�(�
�  ov�fv5�#s-psp�4v,ri�fs� U7 $�rn`�s��8 �JTa{s)U1�80'e�� Q=2%�!oxiQk��]9h6.��{k��b�Q, c]�wb`tQ  �DlQr;054"<!C�ek�`�55),�,a~s�3v  ��j �{ ~93 =H	es�|[�p�-S_�d-�u�rkP-�w�_Th}4ewhR �WJ+dQaL ~*qn�s6��lad�L-j+8*E0,, P1�, �A����J�tU�p� tTqU,<!T& T0 ,TE4,lT�8 , 4!*hD��i�T1#$) GSu`l`�p� L �10 ,0D�s))@?*pam0x���&>!$ipo r, {l�s�%i. Gl(aR�Թ�,$cl`ss09,43Wa#q$t3b, �l1q\?�l&m$#Cf4  0kL`3b�q�$!cLazz�p�<$clecr�7)�dG�!s�$T:�9%1���;�\98� �E[�(\�0f6C���u�T91�4`#lAsgKT5&*2h 3!T7`< vvA�sTT5t`> Se��5��%51dcihsp4U;7� o|dc�(\7"~�J9dq_T-1�bIk,ai?dUk]q	N|unKG=zMx� ��3f�ct V2:.!�nvcpP�j�v(,�

~�iv|`ha=`,`�[���amawsTH<D`$dw�.Dp`&`j|�qr7U� H9b�aqc �34$ r�+3�ats�<�ch��7X<,�cnassT7A�`Kneys(d"�,*�#2c#D7"OhBm�S3 �vi8"gxAjsl!��3L!#r �0 ( #n@1s#Vq�n��a`css�T2 � cfqusXu13  �hir�`U$ ��c,�ca"^u�c� +|)r�(����f(q,�cs��Q7 ./
k��T]Z(i;_i'w�fe�OG)}d�TesfbR0)
�;$tmvaf�dm)k��pu/�lm��>�mc�#r�bxy3,T P9c(�V�Pqm�g-�qw�\3#��}�sR \0 ,drd�wR(T (�c1aʴ4,,�cl`eSH9((pa`-�sH6`.�CM-�i�D�d
|�qLpqp%�IS)Smd%|Wre��d50Vm��dv$R#J�{ &et D?2*)c��y!wOiz|�4u�5�T0@(�0)l$F� |",!%3B��<1,8_6�(�^�(
V�5m`0cqsDt1$%8/ClA3s#�q4#_
F$6#mW-#(>).�)2����xu,|da�dA=clwRc8ޤ@UNkw(U`�l��KU0- mAa�%b0�<awj(80v� g�iS�H 3~�b~)W�q��l%)q�cRyp]�d.�a}|s;��v �1�aw�"J`8b}c�;0�0(�!mesw�U�`m +�l]QaT6��q���brP0a �0b`uWW$��  �#wu"W1C�$(cm�w�8P7 }=��3�T�".�Klp{ }p5� �A�r�T�g�

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 ...) const volatile);
#endif
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18) const volatile);

#ifndef BOOST_TT_NO_ELLIPSIS_IN_FUNC_TESTING
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 ...) const volatile);
#endif
#ifdef BOOST_TT_TEST_MS_FUNC_SIGS
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 ...) const volatile);

#ifndef _MANAGED
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 ...) const volatile);
#endif

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 ...) const volatile);
#endif
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19) const volatile);

#ifndef BOOST_TT_NO_ELLIPSIS_IN_FUNC_TESTING
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 ...) const volatile);
#endif
#ifdef BOOST_TT_TEST_MS_FUNC_SIGS
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 ...) const volatile);

#ifndef _MANAGED
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 ...) const volatile);
#endif

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 ...) const volatile);
#endif
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20) const volatile);

#ifndef BOOST_TT_NO_ELLIPSIS_IN_FUNC_TESTING
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 ...) volatile);

template <class R, class T , class T0 , clas 0 
Co/3t`�npyld.)($T4 � cl- �r�, Dy($ T4*`73<*L7`. R5!L 8  N9@l!Vp� t0q .�P!�!,#@�3 $�t%< �"1�0,`p17 ,`p15%-$D�<"<`^1�2T�0 /n/) k�}3���olae+g%8;	
#%ld�
-�+f�mg BIOSp�T�_PEWT]MR_�UC_ICZ�
$q�plHt%$#�asQ"�n$ql%sRaT!� c�e�  ,cl`wk T5� g,!sv �2#. al3c T12,+c|)S{(U7"<$!tas�U%, class�t�p(`c\�w{(T?A,$'|ArrbU)b-RclA3z U9,8�gmasfS10 � c\aaS 2S`,$clasaV#2 ,�#��{r T1�$ cdasq T1|0,`cla�rhV�5� dcf�s{��7&",Vr`q{{$V17 �(c�ir+ 0�9l(clAsq1�1=0$ {l`s7 TRp&?)AyeSvuKpE2ha]i!IOv5n[`oUnperVeR|er(� Ost`aa�l`<:z,fzsub6oHt|hd�c��Tt!,)t�.`T2 -�T!!l \� L(t!� T6 ,0T?+$ P0h|4T	�l#E)p"m �11 4 d1 �"~q�<$T1$ n�T950$!�(&, t55 , V18l"T�1!,(T2n)7*	Te�Pl�u� 8��`�3 Q4�a��ss T ,`la�q T0 ,0�NqWc0\�0a Sxars�6�$`$�|i?� 43!,"�L sSi�4�' #\!ss0d7,
9as^p{pl mSK)em_fwn{4-[j|%rYdm{t�p�R�(__sv�w!�|��:�*k�fs4 �{nc4e~t*}( Up , : . t4� T6$l@t4m!T5�4 t> ,dT/"(4T> , �l( �1,0�8#%$"W6d0,"�3> d0<56`!T1U ,"\�  4��!,`<q:�/)T1=�(��:,�Skn�t);�Kqupl!Gg =kLc�w#R,�#d��p(� $slqsz$1�F�s,aws!� , `,escPX2�,tCzas�4T52� �ness v`%�c|eS(=�l"sa12g T3 |�cl(ss"v' = Zla#b �"*�c`af{At h"j�`3q 10`d1�lagq"T%9a6@`|azsdT!: cha�c`T0� ,!;oag;0V4��$#la}w	T�0b$�elEs+!��5$$ ``pvc W�2 j!sl`�S�T�- cnAs{(V!9$, Gnia{ U�1�6
zEs�TyPe!s��T)n}.�r{in4�st�@%q(R !_]�p&!Cod>�:2"j?N�V06ODstl,%*q(��)  T9 �E2!!T7 ,iv$ ,&�1, 72-$7-(T8",$V9lT�4@� R1!!� U�2�,(�!3 > T7ux-0t�% ,�Ty6(,.p15 >#�1 ( ! l!1�3 Bnnst nmju�c,�1{N(temPl`��0=kdKwa(A|0c|acq P,&al {s ^ @,hCl%z�!T� | �Xass R"�� jlSc{ �sp,��lars X% * ch�s�ta`, #n�s`�V(-ps|a{�0T���`ila3{!T ,!+lA�q(L|0} ol!sq V��h� a �cr4T)� l b�as��D!2&,)cL1!�13"&�bbac6(L040��C�a5� 35 H"oma#r�E1�,L i,bs� TU�8-�{xscs"U8`4 cl vy P100|aclBgsbpr8)>
�5S_�yj%@Au_M%m]�uoWv�hltgp5$rvkS$Rcl_r4lSa|\(W:(*cOn;dR�h`riwm"9( T0�b�t1 , T�4, T;!,`�4 ,$U5 , �6,�D7 t\�(,�~;`,d^r8$,!#q!l T10,,`�13�%!T94 , W�5 , <16 $ 45?0.$ty8c !T39 4 L�8!.nx)9MF0�et|ytm ,c|��S`R,(bl�sr @ �cl`33*T09,���9�D� ��cS#D61�$ |lqr�U2 , c�ass T|!<cchaws1�% � ceAs3 d�$-  lesa�U72,8Smesr0Tz l �lqwS } ,`cl{s"E9",`�lasc T11 p0#xasq%�p�!(#} sw`U3;a,��lass T1 .`amaqU"T1,�cL�sp��3# 8�+l-sw(D1 , cna� $�8�� �ka{s T! n`Cl)sc$u2	>
�*ckN;t$vta<ell*o("V2:,(t1�,�p0�!aL0�(44E<�u , V&4- �!|0 ,() - V1! |cvy3�."P1p4(b$33,$p0"�Ԡ=!. R16�l �!0l$41�",)u;< t21"�/>+�kof�T3

��__tap]�is��e�}��o^p{iBd-r$aspe�r"(Ws�daGl�!P;*cots!~?lhtKjo2-( U0a���1 , �8.�t� ,"T5haU52N(T�,D6�,bT9 ,&U0(�T5�'t V11� X8 : T#!,10!, q�04#Tq�d, y1 ,�d	8"d �q� ,,T20 .&�* w�l$mL�;

umM`�!Dmfcma�s��%;hcwc+�`,�clar�*((cdaC� Xy(n!rlaqs`T3 -Wl!3j0T3D> c<�RrT= <`c\�Rr) 5!,�2l1s�\&�l$cm��w(t5�%�alds{$tx0l(Alas� T90,��.c��4T0 <(+nARshT1��-G|a�s"T!2 , cne�3 P13, cDcsw T34$%1`as)*t35 �1!NeqsbTq6Tn��lpQ{*�=7"d$�&s{v(1�p- G,ess�U1=`,HgLi��p��0��xg�GM9ze y�_ma}\f�oWpkifddN_~gStqR(r6 yVv��|a*ltc**gon7taw'n5uy-�%( Up!� T9`l�Q�{>0T1 <"D6",\ . �w 68Tw$.!T( , p:"�!�d-��:4(.!\�`�<@|3'2,"6!4r,$17 �tq6$$ �13�0T!.� \3 | ^20	`ao~ct`���cZhNE!{
2wgmPla`5$\cLi{s"P. '�`{S�T ."c(icq�\2,1Klqcsa�r00cl�s ("E'liS�%T3 $alcSs@Ta, cda�k,\�!(p�,�Sr 6�=0slesCdH36l sl`sv T80()Clac�0T9b�0c\`ss&�10b,(m!R{@Y09 -�rDi�� U2!$#cl1�[%Ty3�, Cl`1s"V148l0C�a[dbV1u . othss v�:!d"#,aRҠԱ�, ql!{S Q=0 ,0cnqbs <v9`, #l`y� �3T :G{fROty edm;~mee_nwbOtji�TgrOtur$up*P��o&`svc3Mn�T>:(sLn3pvolct�lej�`|�̌ ~1$l��:0, 7 ,"Uy  |10l0U�0, p7"(6P: ,)D5�0tup�!T0$( U3�042T57"�*�h< (P\� , R86*�`4q� 8@U8�(#V3� l \6� .:nm�z
�dw u��pe(<cl�q�r,*s$irs \24!clqsw�0 �01$qs�T!0-�CLers(T2:,!Clbss T#`��@a�� D4.1gl0Ss!V5$#Ciyr1 ]7 8!#LasC �7@
-3&.4Lf
y1w_6yr�(!{]m-��&}j^t
y�s[�ype4hs	mef�oK�~m5erߴesSeR(R(xgOcddCl`Dz:..okp u^��ime;i($D"(��qd/&U�Eh t; $V� M*V60< $ .08?(
Mt�m�fivq�c�!3s V(!a��sst &f�desM!4 ,hG,(rs>�(,#�eZc!T68-�rlasq0; $ !li�c D6 , c�!r2a5�5`clc1�(D' �b,��r6t� &�k|a{r!E�$l4�,a�s U=0$�k<c{Q*D1zl1�kaqk �13``#da�g!1"(a#�aws�T17.4cn�3k T15�&Sl!sj�07�<$cLawq(T16 $ c-mus 19� �xass��1<(,"c�1�s t5)$m%#|aw T30�:�}er_\�qa YCLm`�W�4n_�/in5ev_4eq�e)R+��cDmCL"T*~(a�nsd`vkmA4imG
		`X0!, V# �"U2e,�D3>%T,!. T5#,$T6�l,XwA(T|(,$T� ,"t9 &.0@?X0�(�5pb,(\530,�V50,�D!5�(F14,V<7�, E08 <0t1� , T&0(�.�	!)
��mt|!t�<Gna3s,V, cfM�� T"$#uh�{c�XP0i,ClqssQ'&
3#deCS T� >"cla{z(V2 l$k}x{ P&0-�s�³�!T�(.!slact 60(%cna3r t� cd�s� t#$(aLSS� Dx�$rla2c(T30 %(gx#rg`0s &!al�b7_2$<+0lcc� T178,8`|AsS`�0"$cdl�s.T25 � b�a3s T16 ,B7lc�q T�; l�c|iSr G1=!0�Lhr38� � ,`�XUss`\>p�,���cti1k(iw_mam{t�Nqggz�yv_$Esr��j�`,W[g$gca�P>+�{n��#VkladyM5*	((T&�U	b,5U
 ,t�# �.P�d Q5b,@Dr)` T7'%Dt1!$1�9" �1�8<z�0! > 92*, 1k ,0T!4 h�T9u �(L16 � @13a�`E9<$  DE� 8hpp0.'.+ #nnsTI:�dvcuR~azI =g�mS7`T^� l`ss"\2|(",`�w T3� !c�e3r U1!,dievr Dz �&Cl�"vTlaknbsr�U`�8"les2-U� >�Glazs,�>`( gldw;�7 $Hul!zc D\08 cLes!D1-�cDr1 D�t`>(+nis� �1 $ cm%ss$T1(-4�l`rS T238%�cnacs\9� nh�}!s� T3&"lceasw Dt4$�!C(mqg�U9sa"clK�w8pJy"d �Lcsi`V18�,1c|qws 00$>+eu^`xr�`a�_laoVne}_`ni|gp_vqqt'� R0 }Wb`e3| pr:(u�n�qav+m�tmld>1( հ ,&T5(* T:�=0T7. v&,0T= *!�!+ T ,T=(o Z9 l q(�,T���.��2 ,"T0w`l�T56`<#^1� ,Ht6 �!P17 <$T10 
*.; ~?

vtm�hAsg(Tahq3u F�3lA3c!\ ,0C!qs"б  b`Qss0ԁ!)�q,Cqs(D62
yef_t9pE$!g�m��vu�_a�inte2_<eQPul(�bh_�Wp%�|!\::*coo�t �/fi4i=a�i� � . T48l�T7���90,tZ P1$$D '�P7`*$T8d &T� �dT1� , \1�d, T!2 .�1 l(L%, Vu.0�	6 < \q5$��T�V��`T9 $bt.5
n>+)�c/>3|%g�maghhe�{L
#eFdhg
�Lb{S$T'"<("n!�W$�"@ bLsL7�lhelqss"T8(� {��rwV|dytqsb�Pqq(, Bmb3{!T3!,4c�qs�t3zd8 al�us`t;f, `les#eP14ilHclG7ShL5 )cm'?i Tq6"� b\iSq(T5;�4A�Dcc �18 ,$E�qsr!V1;< c�%s��6�1, a�C{s,`21�>
)* Db  |��� t� ��@: l 4�l�\1 0T4�.0U�,`}(( �!<$u0�,M^q� ,�\3p�h0V�3 |!E34�H�95 *�12 #\7�LHU�0 ,8tq�$ &P���j'T�*pcg�wt�

YEs_Viqq"mc_maM�g0._r�in{}�W6usTm2(�qiT:,cost`w-Naeah'k���D� % V�"`\2!=�T#1�(T DaT7 , |7�,(P�$ Wi| 8!�"Tr"l �%",0T5r�) t1#4$P1$!>!P95 .%�1 ,`Em�� V!=P<&�0 $8V1d-RP2q! rmha�m�e,�

]= g"%^ cS t;84- �dCsQ(T11a,�C`ccr T�# � �Ppb T�4
�{_mce[vu�����^4gb_pes~uz-Rl9p8>+go/q7!6olq|9�E�)<P? .!T)�� T�l(8\1#,(U4$8!T1- X&q( |5 ,hPhD/ T=b,�D"p� Tq1,	UaS,bP13b  t1��,6�1% � D`6 .$T�7 ,f-8�l`T!0� D3<2hT;1)Db�bW7`v�m�T�,E)

vaePl�tI <q�a�[0R�clasgq�<`�V�!}�P/ BlQss(T�@, �,aG  , �daps.3$n1cm�ss@T� ,(�las� T1 , C|iqwT� . ahes�0�($ ah�ss P8C,%clasr!�1 "c,cs�$Q'0 -�k|css"T910|j�as$T#�h�0��bv#�T!c!.�c�aSs"T�5 % mma7G�T0=b.a#ohqq, $s(fzs"P3: , �Aa�sqTqy1L!#La�r"T�y0, cpAs� �.0�� Cla�s�T�1(:.
qm{T�yxg$9sv-e��f-�x}j(b7z|Eyv�z�V((T(.�?nqu`v/leTkmd*	"P3$e  0P6( U�,,�4 <�0b$6a,a\3 ,p<�- �9 tD�p0,$D25�xa\0: ,0�0# . T5$ ,"\�1�&�T�
P1/ (1�00�(T19 lD'�!<$T09 &(&a Ro}e�h��i3-JO
U�mq%%0a&.#�a{3 r<$Qlk�S  ,p�l�cs U0 )�Jl!sc Ta"�{Lu{s`\$ ,3ch!ss��r�<�#m��v%T4)�c���s P� l`bniis`\4�*�#agyHV7#( rLps�@L8h-*al3�sHt: <Cla�{i04�, BNe;q 1((eGyaSS T"-.�klasS(t13 ((C| sqL10("c(asu|Xq�,.s5ys@Tq�"L clAs3v5�*l$al�s�`\�($-�ch)7G��8�%$�)dqs�!T:)  $aavs`\4�
yec�|yvd(msWemm_d]l�`I.t]�<Grad�)�s(_CtdGh$)(T�:*#c~st odaphh|&(, v #, t1"* D1 ((x2�(d4 �8P�(-Dt%,0T78(2�:x,8t�/ 1� `t03`�1U1v , T12�, {<", Գ�� �q�$�"Q7N,%T#pb8%T19 D |"$�$0U�1));)
m*q/�|m��"<lacs)Bl #(Aq �D  �lqsc"\1@�(cl0sR�\,0f,�Ks`�2 | gLcss%\3 ,`cLasW T6�`�mqrs��5�| {T�p�T> *0klas{�D7`.cj�U#D8d!g`aWr S�L� j\�ss&�18`- stAu�E{E�,�"dss0T1>,!sless T!3 ,
Al!sq U1" ,"cdt9�0D3"`�(s,$3sbp17!,(cja�S(@A7 , �hAs{h#: $(|C{W Ts9(,b|ay�E"� ,(s�v{?03i3	�ec_txpm i2IE=_v%f�rohzvW�_}O�6wRh)^3t#ia\h$T���-fsV tn�ap�ne*)(�T `mhT1", tr , 30- O4 (t51,@P�
�,T . `8�L!���,)�11 ,�T59 ,"p1"(, D10 -4r6 ��U$. 1M!#7�| \!)`<(V59$" T2rb,a�1�s},{6);(N5g-rl!?%04knaWs"L kaqaR(,��lcr;pV�5,�b~dg� U1�$ml�1s0�>$l�soar!F1 %e�aCs \� � qh�sW,T1,=a�x����P: ,(cdqpg P7$,�ahk�s �8, slGw{b�i$( 3los[��" �0cn�`9P!140wa�r`^1��0{<a[�  : �`��+sU Xd -!{,sv7�`55 h%B�dws �11t`classT1", Gnqs10D!9�, 't#qs Q����(cm�s�%T36
	Dem��c�� <cd(q�B,5cla�s(E�,(�}a{ E�!( �\)�kIt5 (ik|ir��D3	l"bl�s3dD#(bqmars(Tu (#cmc�2(T5,-�+|Aqs`4,"c|asq"T7!,${8awg 09`,@cn�ss�T� -�#md{r8]�p��0clq7shT�1(% #dQcs�4=�.a�l`;s @q3�l�cld�q$14(l#c~esch�0� �<blyrs041t2- od`'1 T ' n OLa+s t!0&(�Cliwc�D1%`Cnass�W!1#,��lksU7 :�
y$3Z|y8e"i?WMeo�b5lzfinter_<�S�ds�0�z_t�sAm-(\;::{nnv|0V/(UD)n}n �"�10$ U3)��4 $ D�
v!�z<At%8cl�us!_-�sm!"pT Hcl�{c T3
,tcn)�c!�1", k�q! " c�a_s$4�!8�|�u 4z+ #lakc`'$�"b=�g!�6p((ciass`t7�,nslaSc��((-0Bmpss0U}6,�g�q9b$\7� 
��S_�pu ys{M�]�&uo]tga�qEr_�up-tc� ._Q|e{i�L�Qz;"soj�v2vO(Cuolg
m( 0 $ P&,T0c. �7 � ]6 ,�T!AD�`< Uc, D8(�$\��< 4t1(� N13"<�T12�0)]=3$$m�9��,0D9, ,(t16$ @9� ,t8�d 1 P*` lT2Q$.�.-!;*-Kweup�;z��.bLqS�8R- ��aSqu(,�rd Sr �1p% c,![$\��t*��au� P:�.chaus�T)$,(k�as{(V$!-(c�q{c�|= )$��a{b��w("cla�sp{ $#lAska�84, c}a�� L) 4!�,qs1 E%� , a|`Sq"�1 ,0!mm`r`^qr , ��!�3�P1��($kny{S0ܱ� - cmasr)H44(,�l�g �!\,"{XQs32v�($$�na9� <q9 .�s�Wq�D1( � cmaR p }d&aSv(TX1)yfs_}}pu 	s^d�}_FqnKhn9jt`r$4%r(r)^_St �Qhl T3z*uon�tAvw�atkOg�*( T!$�P1 -@\0�	h3�<T $�F%), T� |$0,#(& T9 .`�9�� X110*�T1r d0\7�,B\��i< t1= � � =`T17 ,!T18%�99  p&!R>(T"1!*&.$sN�S\);G�=�uh��<e�,gmqsw'h-vm�1s �0,bcL�7b"0"
cdc[r&4+= c�cas$V6-ALAsg Tg  '|�r�P( �(c�aus0V1 , {|lq� T00h!clasbd!! �$w�asc`V1"�< ghazs�D9;)�$b���s tq41<C|aa{T�E/��las{ T5> (�c�qus�Fqw %�cl!r[0T�� < glawS`P9�,"Bn�sw2]:8- 2�IS�`T�q`|
esOp{|q$a�kme%Weu�^pOi�terZ|uplex(G`(�_vcsAlt`:��Aqt(7na��\E:((�P *Uq$,�T2"f!Tq+2Vup(*R$-�b0*"T!, � M0<"�p$- t3i-(W!2�$ P1�"- �1 ,#U�U�, \16 4(T�7 ,�q(,��1)�.$v2q`<*r#../-�v�,I$i�d(�*
,�C�aQ{t0  claqc 14|0g~isqLT28� cqrs1T�4$ Sle�spU4`$"clEs�T7�� a��rQ�~3 N(cl�sp 10 ,!Clmqs�T8dd2!h�s� P8*8�{l�sb W12a
yes_tpe��7�eEmO&unfpoINtaR
tester(R ];stdcAd` P:#fukst Ag�abile*), TQ l T1` P h T�dl!t< <P5 L0V?4l"v7�<(U8 ( �0!D0�&T3U�(=& . P03 �0t0�, V1'),"V? |�T19�,4\10D
 Ts)<,64 n
./? �w~�zf.d�t:lei;M

#qblF�v0o[NA�eeuEmPF�tE@<aha�P!�wda�rbT0<$noa7r5tu2(aClbc t"4"s\a3_ ]0 SL##� Tz<f|(wq4P8(� smyw:�5
$!��b3q V6 n )lawq@V6"&$ClC[ V !iJac�T9 i c�is�"10#$ c�C#1"�q0 �<c,�s3(Tq2"8%#,s�s`1�,�cne�STp$=4hc,i���Dy�$/#AlAss`\9��c�+b�0t97,g�a�q �(", c�a3W �1y(� cJg#{8Qr ,("LAs�^  86�ye�^T{P�i2[�dNL}j~0im~�E2t$str+R (^^A#tabml ::(bEns` t<�4ilD/)h"�0(.�T�� T2�l0T50L \W�,N|!,`\w 32lT8�&$U9`,Tq <,!V1q l T�`, @4sh& L24(�"T�$�* T�,T!�`,$Tu9 , \3� ,��r�
5dm(lHpdm<*(eqq(Rl�sl�c3 T$!w�a37V 1*`cl!qS0V50=-c�sZ!T"  �,Agq`5`,Ta>�sp ]4 ,$b|��3PT) �xar T6! (#na�38@? �0k��qg L8 �0q,ISz!�0 , cle�S`|1 �-4als3c s118(b{|as�V�
`l sess0t7b,5cl!sbP060,"clasS�Q�'0< �hh�B!V�7*L`b.�ss Dgw$* ClasS X3� �!�(`�� U980,�q���{!Rv0!,clev3#V0!�(�my�t50E0{s_�m�WfU�pmhntes_t�staV(�8�;_na#tsl.$\:>+sobzT$vo.A|i(u*( T!"� t1 .�T21H5, P� 90Dt � ^6 (P(j�d\  T;.(V�2 <@�p30dsT" , t!�%, \�5!�-Tq%�<P1>4l`U16@-0U18� Tqy -#T"� |�6���3mn{li�M
pui5l�ve��dpw{!X,`'8a{R T < q-q;;d�t(c}ssr�q�- WF`kp 2�.�zmar7.tSd<��n�rs2u4!,(go rw6t1d= carp 6 �m�sWQ70< qla�qpPx <(ae`�s(T8",�slscqTq� ,2K��WQ T530 bg1�{$T50$!a
{m;�pyra�(�[m,�[DqntoI�U�z[��vTc�8c0Oba�5c!d~�:9nb_j�d�fo�mw�ne)(V8(� P1!$%aR"&(Us�, W�*, \52, f7;,4D7(�aU9 ,�T)�m�t05 �"ta�"l!�)�`$`T12(�#V9� �$U)52,iV!4"l`H9}�!�390&4T39`��T22 , T21	!tOm!pklty; E�pe�`lGt�\lc2s P<$bdasr \*� n�sr D1� {l�sq:T13�!!liq �!��k=eub!T6 .`glcws� 'k�ass Vu`- GLdq(e" ,�kH�3uTw4g c�a3q�j�< �Hasq|\1p, �^q�w T#2  {m�vs0V55 l�3�a�c�u�3.f,/sw0Tu# ,hcl!P3,T5&!ld�|Irs"D53	+mcl`�a"�q6`, #lAqbpD'rn!blAs# T0x < claA�!�#"<pcda�bT8pl&�Hs{0T81b<t9Az_py�-�i�mŽ^f}n^X�i��erwtAzt!R)p#(__bqstaahl(TZ8"sKJcd sg)pi�e./�!T0#,(T1`(�S:j��s < V< \% (!Tv($T?`T<, T( < E0r ,4�!,3\9r", � !, �06�,  ?=@n`� � ,$Vy0, T04F��19!l�v>3, T�58 c�vc� gnq�Ifi!)M(uu)f}at�6<"l)us`R.�a<aqW)H�,0�laA� 2 ,0c(e�abT��, KD`ur T3�( clacw0tr(,tg^e�saT5 F�lyqs p?($ Cn�{�)�",(sl�s��`,`R,!ss0�q1d,B�wws0P9" &lAsS�T�20d$#N!qs1Ա%p�%c}ir3 Ds$,"c�%cc(Py1 �kla�#dW94 *"Kwasv(T1w8$ kmqSs V)2`,cLe3� ��7�,�rmar3$Tp�!m Mu�`�!� 8 �lat`T08 % g��Y1 T�1�NqEs_�yqehl3T�u�[funOa�xnTevxgst�s�R0(_Vn�Qvca��aT12.Qm~{)�vK8a�qhg�8("Uph&45 '�6s!$�W3`-lT!,д!�C� `&T7I<] m D5 | Fs0"
}ds_d�pm`iw[�5SFf5n_p^ilvurdeS�4r2Z&h]NgctgIl`�T2�;�)n�� wgla}�|��)( V(. d9 $ T2, �W`, \7#,"��4, V�$L$V(, ^9 -`U90� ���T5�bl T12$l4T1z -$41!, 1 d�T16!, T37

tGixhqve4�b�As30W cLa33�T��c0a�qU $,#qaes"V1$- cnas#T2 ,$s�as�"t�(�A�!{q`(l0c\!ss U�"!o�asv(T."l '�q7chT7!,cmass\x�,0s�qq���; (cd�s T1�(��c.oqS�T���< chBss T!:Al$bhaur U93c6 �,a{#�U�4d #crs)T15�,4Keqa20\w$l"c�esc)u`7h8 ko��cd^18,0Co�r5!D08(&$ClcS �25 �LCl�z�!v�5���
yesv�p� hcO-mm�dT/�hoibtdzy�ea`armS�(K^f��u�Yol �:�3gn;u&v�D�t),!j;��T0 ("Xs�-(� y^;`� U6���1(,�TV ,�7Dl �8$d�U%, U1< ( \�", �32"$8Q0�",�T14`/�T0u , T4)-dT0'") TSt#�t10� p34r<"L38!|v+�U}�qti�e�:��-
laM�4av! �c,ass�L #eA{w&�$,8#}aksaV $�yhpGs Z10,$a~ac3�T2f, cl!s1�t7($3f�qs4�f�,ass��eY$al�3� Tn",c{lats V# � blc�{ T(!"#icys!M�3M c�e�c D`�  �asw u3),, sfsw v%0  chd+w �;,/ km]�r U!76&8clqsA�T8),�o8cq�Vv , c�asR$5�1 "#nac4A9��-���a�c P1� g|es�`D#0(, ,a{3 F2`�-yt:Ut�Pe`h{V��/^Vt,N`omO6e"[t$3`er)B,[_fqsdcaLl �>�*Sonat-�Goc�ile*/H�T0%< ]1"lDT2 lT��$�@� l��7$, T?�,��7 -09a,W�&- T02� T5e(,�L3�� T!�H W< *.T0u .pT12 � _�; ��a�".0`1|� @240- U29�*A0b.nrt v{nB\il�9{�kq^d{bL�1%-��#|e b@B23�` cbss U0) `tazs@T0 #cna2s`T50��pQ�y T�� Mics�W7$-`q_a2+1t4!( cma��"���}�aqw T�+ cL`s{ Pu! c�psS ; ,cnYsc(P9 ,b"l"s�U11` l�q"T1q$ `lBs�
�5 %"�h@�c ճ� ,`rlcs11X10,, �npsSV17 , bl{sR�w>!fPclqk�P1�0%8kn#saP58*.�{.argpT!=1&"c�ass!T6" !Bfe�S#T6s 
. T5 ,)P6�M,� (]0 ,DU?�$��19)�`11��#T1�$4V�7`0T14 - Py5". T�p-.!L;�Ā�F��1x$,!*�!T"!! -MBsu�tistM <k|�sr!Rd ul�i�AR(x$Q�!�3�T�lacla{s`t9 ,`cma3C(�8 l�C�ajy`30lcnasz P�- blqsw$T5 ��glcs{ T& #"Li3q T6 <"#,�5s Tph,��hQ{ST < a|bss8\3� ,"�}`sv �3($�c|bs#3�!1%"�hm�q0�=3 $0ala3s #6&m(cLgy'Tq50(!,�wqATp*�, !l!sK�Q0 �$+zasS(T� �8c�q [0P�0D �gu�u!d00".*cd�3s *3 ���e�M�9�$ Ig]moi_ww.Lpo`ntuv_|gg�e~l� 8[_
decM>T:�+�G<3$6�M�tylE:]((�Q /!T�2("U4!, U+�l�Tp#<D4h, D> .1T7 . Vx 4(V9 h P50 d �1$�$�2!� �110 V�� , R15`( t16a$$T13�8ts8($4_��($Tx , T:0)bojs&+!�
�� �}ue(clqQp2Z 3lt{ U!,@cNEcw Vpd- cl#S �(.bji�s"V2 o oz`�{%\3(K.-s��  , knays Pu(v�s,a2w(T:$, <�Sq$T�h(�OdqsҰP;* 0�<asr!P) <p#L`r{(V14 - {laSSh��  8  \�rs"V13(-`#~QS��\1 8<b�ir� \14 ,$cnq{d� = 
!, t0`$t-�,��p<�\#!,2W0�(\1TL2V� ,0�/0lT9!-`r;(-)t3�$`T9 &� T1�  p6 ,�T����b\154*t,$\96B, �19�<   �2�$, �21x w�lapI�u):�
,
 clqss"V3(,1cLjs0 Tt �0'|ps7�U- ,$cmaqS�Tv""0�haq5 ]w(.�A%11z!T0| bma�\9"&%Cmp7S!TA� -$c(Agc V�1 ,$Cwi�j!V12�l0�,!Ws$�5(+�cLa�w p14`4 a�c[3��(h�`a�r f0r".8c,Irc ]=� -0o<i�# �q9 d qla�q t1(>"cl!UU �0 eecN`p} t(!	yeS_t{`%`-g�ms}_fuN
 \ �l$T<",�Tq (U#!<"P4() \7d4)Y60���b,P{(<�P9$l =1``< t1�@$ P00 <�93 <$�0,*, t=5 ("T1<D."�?!, Pq8"l(U1) ,"�0�,�t2�� gwos|�t�matepc!;oJ
#|Asy\92�,0cl rc!t1�,0c|gb� W�,24�Cme�+8Pq=)&CnaVs(T5v1���iss"T17b(0�l@ss$T1�!,hclQ�s�]1-�!3,�cwh�8(� �lE{�(tr5*:�.�w��mqav*s_}e|Oetn_`o}lveZ_tM3�eR)�+�_sdacL Ts
ag�{tolatind.-%`�4bnlU!�v(|21� 63,u00�0�& � P6  N5!`\0 ,@�1" 4�0 l T��:- Tr2�, T01f.*V�t1, <5t�,!X!v , P!73� d18�,!��9 $ T20(0\21��"�+!{
de]Pn%�- 5clas1"[,`c�asr P�(�#h��s T0 <����3s T1!- 3Lar3 S �lc�{ �; ,0sHqs�@�<`(�sl!zr$T50,�cl#WzZ�$ cLbs2dtd ,,2}d[[ 48 . IlessaT9!,$,rs T10 . k�qr us2(.A�lE{s@U9> ,bco�2s Q13$, sMIwq(u54j<khac3�V��0(�CL`�P T1�+clqss D16 , clavs U1< � rhac{�t9��. �$cS�"tRpa,,g,acy ��)1mKqe�[t�z0mwmeMOny<_Bg9&tyRpu5vwr($ __c@a�n�U;*i�zR� re�a5ilm*-* Q2 <`\1�(2R3- V3 hT<4/�\5$(%4!�71��Ppl0< n(D$;$h Vb|0< y), T�3 ,P4./#W!� <!R36P-"uQ70,T10($�9,�2� ,�T#1 �./, 7-oc�i�$�

asS 2 ?�
yewqx4e0i�\M��f}V_0�a&fts}�drucnlC"(vVc�e��!P:8#cmosuhv}euui(e�)	=F�(,$T� � d(!,(T~8- $  �b\0 ,PT3�85T8 d Vh, Q0$,T�1`$ �52 $ �s? "5D90,�j5�5�,(T12> |!7!,`!y%,4Uq8,,$�38dd"21!�.("+os�`dNa4a|d)J#enli`
U�t�Plq�u `<as2 R(c<ns�`u � cl`sp(Tq1,(c�%s�$dq l!c�`qs(P"< sxh�'$ƫ�d(rl%b{!T$0h s�s7"�5`,$g,a&s D<$� alaUs T3�n0gLss2�-",!#duSs Pq"-@lp3[2\90 � fh�S� ҹq  4cNcSdhT125$�ilqyqdU�3#$ Cle{s*T1  /!claaw(9g$,�'|`wr�U9� < bn�s�p@1p�`Cla{hQ $-*cgAq{)T3a<+#\ass'421%(fli�S t2  ,hgL�1s T13(&9%s�Ty�a�ks^�YFenWpal|ar_d-p�eR*� ,j(�'nst v�hawil%*::`T1� T1 `�E2��`Vs 8,P|�, 5
#$�: ,V7b, }h`!u1� D0�l P1q&8(\q80�`q; l T54$,,!5($�17`^ T�7`$ 1� ,T1� ���"�!, T�3 ,"d83��"nsv);(
P �L�SS!p;9( gbKgS�t0(,�hobs �10!�ma� T"��Mytstype iQ_)�|vufOx�io�e2_�e;��s � $T�
cOnrx v�nu��d:	(�\2`0�10< T2!, ; ,&Td0� |7�
0Tp!#�18��U3 �z3 ,Vt"�(U� b.tvଠշr$$Z[ $"L-�!]90d< T0/(16 $p��(!P92.0U�58|�P1>h. U�7 ,0W1�, 5p!d�T30+�e21 .b\"'>/	);	

taip ede <one#s,$";hawcd\!14b�i+Qb�A", Blab2 1$( Dlu3s6 , cawk0T*!.qs|�qc,T*l`smQsr`�4 (al`tqbT6`$ cy�s� �7`,�chAqs0:�, cmc3s%09(m0w$ess$�!  ,"Bnas�T100, c,cs9`T{  s|ag�@U��n�#�kc# Fp < Sha2s ]1)   cn`ks 17 $c.Css&�17 
xmC_w{te`#sZicegeG�XnkodErWuE�tdz(r *W::*a/fut!t�nat�lT*	i t8�* d l T0�( W�q)14 �`� 02Fr0 T l p00�Vy(,l�)0 , \q!,0\�: "?7`,  t`, TY5 ,(U v ,!P�2 , s84, Z=9�>�;0�<$T:8�,"T2�y>�z((/ls}`vonadI|m)�F!`�d�f�
!KVe%d BOMZLO=\^TEZ[OR[GU�_[XS:'
pAit�i|/ ~kmassZ, 'n!wq �1,;#$A`s&Vx�<�jda!w�j$> 0lma+ T21. So!�b!P#`d,emur3$ � "�0rs%�� , amY�s�ն!,$ala3r(h7$ c�e{Ut2"L cciCq -�D�+,e�q$0h� claSR$�'20�`class <10$
Tamr�`te�<cl�u[,�e�cfa9s�D4<!cv`g3�U1  nh�q3!�d� clavv T2 %!s�iKs փ �)ah�Sv$�4((c:`�1�P7 (k�qss  6 �CLi�s1P= ,�clc3�b�8 ,�gn1rsT5�Psl+�w `%0`8 q<As{ v13 .$cfqwz112$"cl�s2lP1s0, f^asc$Q1 n`cl�xq	T4$l�lass tp~ <�neww��q� ��BhI�s D1: �cLaqclPQ9�8c��S Tp�a,$!lC<c ^v�< (lAq2�vb>	
kes_T{bM#(w_mco_f}n`.�bd�2ves�ER(rb(^_sudk4le \:�(Km�c` 6oL�5i&�+)�!s18})D; 
5emtmAtm 42ees�Z�5IFecs�D�� �ibsKi0 ($bdusw$�.2c401w"Ti�̡clar�$�{$,cc,5��$0- !l`�R u5`$)bmQss@2$��c�!ss$�� �8adi�q��8(,(clisr!4- ,(AN`�$v382$1#,�ws`U�9�-)b�as{�T1r#<!Ohu�)�E�l,!c,as3&t � , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 ...) const volatile);

#ifndef _MANAGED
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 ...) const volatile);
#endif

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 ...) const volatile);
#endif
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 , class T23 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 , class T23 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 , class T23 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 , class T23 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23) const volatile);

#ifndef BOOST_TT_NO_ELLIPSIS_IN_FUNC_TESTING
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 , class T23 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 , class T23 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 , class T23 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 , class T23 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 ...) const volatile);
#endif
#ifdef BOOST_TT_TEST_MS_FUNC_SIGS
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 , class T23 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 , class T23 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 , class T23 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 , class T23 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 , class T23 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 , class T23 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 , class T23 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 , class T23 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 ...) const volatile);

#ifndef _MANAGED
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 , class T23 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 , class T23 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 , class T23 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 , class T23 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 , class T23 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 , class T23 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 , class T23 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 , class T23 >
yes_type is_mem_fun_pointer_tester(R (__fastcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 ...) const volatile);
#endif

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 , class T23 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 , class T23 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 , class T23 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 , class T23 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23) const volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 , class T23 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 , class T23 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 , class T23 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 , class T23 >
yes_type is_mem_fun_pointer_tester(R (__cdecl T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 ...) const volatile);
#endif
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 , class T23 , class T24 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 , T24));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 , class T23 , class T24 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 , T24) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 , class T23 , class T24 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 , T24) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 , class T23 , class T24 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 , T24) const volatile);

#ifndef BOOST_TT_NO_ELLIPSIS_IN_FUNC_TESTING
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 , class T23 , class T24 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 , T24 ...));

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 , class T23 , class T24 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 , T24 ...) const);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 , class T23 , class T24 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 , T24 ...) volatile);

template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 , class T23 , class T24 >
yes_type is_mem_fun_pointer_tester(R (T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 , T24 ...) const volatile);
#endif
#ifdef BOOST_TT_TEST_MS_FUNC_SIGS
template <class R, class T , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 , class T23 , class T24 >
yes_type is_mem_fun_pointer_tester(R (__stdcall T::*const volatile*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 , T24));

template <class R, class T ihsm"sS�T0B<K�irq@U1 .'#Ask!\� �rdqsr%T`�i #,�3� t "6Chia�t ,fla7`\�!� aL3�q<U� �zb}�s�1h /�$~,��I9 , `|esw0tqp�sle#c V3�4l �n��3P3:"nlCDcQr T2�<�c�`:s T3< �3dess \q5�, *,s�d"d8v, W��sw�|Q 8:ca�[lR9 .�gdAss��G9)��c(Acw&]80�Uda�C W3q�,!KxwP� d2�`,"aLar2$�<2
g�syg�U51�)!c��I{)@< .dawA V 7�fKXt�z P#= &�\+'1uY(�l �zary P!j ,0K0e�s U9 �(blwv{ :0$ �$!zchP�3�& &n�Sg0՚0��pl���(t�#,$ol`1�#T�q(�
��d�$70, \!5��00�(T1� l&T1!,T5"�&�#��"D5$�$$t%�",`T5�3-|�1�=pT�(�Yx9#. �p 40p; <aT3*,, 23@�^� * Vodat�nA;
t�vduve c|Iz30�-�#lA20T` �IaS �$"( olm{s�T! 6�ala�r�^6� �ikS+�%"�� isk T$4%0g|psr�EEp,`#masc�T~ �.�n�sq�vf|@CfA7c Q<�<8k�q*{ T�(%�G8ay� = !� ",!s�$!` B]��c6�y2 ,0k�I1�(T:Z ,&�LcCs ��6!-�hn!SS$VY%(<�]gS�Ps6p�`!OqwЀT%2�lpclE{r T�( 	cl!wk�P5�!- G~%�7!�: ,"��yVy v0%0�sbmm�3 t6  Cm!{�(tS&� O�s ~r��>
s)r���pa2k�Uodmf�rO�.inttvMvaw5ax�R78_]3n`��ia&T?�*wo's�a�W�#6yhG+� d4&l\�t(�b%$T3� pb�,!R=$�" `-(�@,@\(<&T�< T11 L �1p)$ S3�"4$t13H,(T6f�hQ5�(d \1�(,�T51 ( T18�L&W!;�,$Ls*@, T:1 l ܠ'� T�0� Ѳ�!Mvsp Voni�+ldi;�
6-�tlAY=a-"fa2sT-<cnS�w�%8 grSkc �!, 3l�#aG,- G>qqK U�@�.Gli�w �3�T!aa�Q \5h(!+|aq� 7�|!C,aq{`Ll� !jm�s�d�$<�ced��(|x`l!cnas`D9!>(g�sZQT�8 hB]Ls�N0 %9i�as�Px bc,kr;2T�2 l@jL�{c!V4= ,*cmbS� xp)�s�`swbD&#�� ���q#���, �c^!g~ D1�"(�al�b)T1%�$�"�Css�\T%
=)s�t{��"-1_-ee_gu.Vqoj�%r>TaS��l�$(_?wtlAa}�2�*bq�st&vo yeidu*
!� 11��W�{ ,U�2�� e4 �aY1� .`t34pl T3(.(p54 	(T)8b`2V),$14� ]22a Tb�	!�27 \f,�CoGsV:qJ*~E�~�at� <�lqS[ �5�AlIs{ U < c�`[s�T0 $!�lak��R1(m�sxe�S`T�)�$��a{sa}+ .�lawa V�&�cNAvs(|uBn�W !, �li�S P|`c-or; T�p<esl@�?bTw@< !.`oR`�!0(h`A�c�r V;� -0��!���P!���$a�cF#&|5" �#car�t14$�b|!�CbP�_ l$O*xq�)D%v!`c�q�ga[vG-"�[aq38�=8-0�|�3C�V�=2-<`�!Oc"�222�*'la1s U:1"l #n�3�|0#� �|�72Q462x,!sl�2r t2006

#io~�g�oOQ\AmDK
}3�zxe0krMd}Kf5^�p�inA'~>}cad�S((�_faW~k}e�8P;�mN{�`�~la�i��j*(#�4<��1!   -%tw5< P�epT%"- V&�4h�%�.�28� \oHv10"$!�18,�X*:�L1�$.!l�$!,`Q�40,!P�4*l T$ <��34�lP11*, 0�t*h27�"C20��2�8.(T2$*I	�UfI�awg`�gLI;s �,$�ass Ti `�msR	�0!	�Hqq`%2,�s|�+s U##�q&MasrT�r,(g�cbr.T0 ,#c,ii}1\7&� o�s vfb�*s�c#s`Է` 0c��s3`uh�p$�,abw0T)0)$#i`�[wY10.`��esT�1<,!B�i�s�B12`O�icgd\=;�>(�ia#v%Tq�@, c�i3s-\�!,`h�s @96(- aB�330pwD,�ah!qbcw�:4,0c<Ajj@Tq?�oa�avrH\�8$�4g`is 0�`.'!n�schDz2 !hlass��7�8 �Tq�2���=
4�1?0*^:�T1	!(�20� P8nb&2 (`Pre,(U�j wG~1$+:J]�"d}pnAGu�6"naa1-r�h!��Sp �A�&ajaW3f\4 ,�#laqp��1 $"f�`3�F0�
((`�,s}l� la�MssP\19". c�!s U1V(�`c-a�s0�76(4�sN`�R!rw�`a�lbB[3�(<�<4ahsp"$.!c�a�ken4(-�c9qs�5�i((R<�2�T%$�cia�s tv0 | #\Asz \252)+d)rb tr ,,alCcr�/3 l Slaq�U�49>
h�_uqpG8aQOe%_V��s`�#n�erW\e�u�P`[ hY&q3t�`ln�T+.c�nqf��{
Z��e'ql@tg0=�la{v (�;`r2��,,2a,���"Tp2��.}ar3N)"� #��{# W2 %}tgss'V;�,$+NaS� �4�$ s>fr{ E=��2s�iqq2T4",(!xe{s2T�,`Eh�r2 T4�, 3l�; T
�BaeqW{`TB # �n��s�R2� 8Xkl�s�@T2h) #|!r� \s�p)#l�{s`ܪ0!>M�;Yg�Uqp�)�w��i_c}._r�	mtEq}v�w�f
R4~vcu^a�LT8
#A-�s|�V%xaVYnc"/ 	0t�p0E1(�2"~d]3 < oF@�"T="/ �7�& V` $u��(�ޡ`,�Ű6 �"\!y8$ T�2 �`T� -$V5� � �0�EV4/	(8и�`&35x"40�!9b<D] �9 t2��, R0"���32�!�:< ..O("�d.��(/
-
%E}pnaqe"�lq:W R� �|�6r14&(8Ala��P�(&0;e`wr@9!-!wlG�7 Ub�v a$%�c$6�.cmai3$|4 ��mdcs ��~,c�a�`U"0: rlqsbuA&"%{fC�]!�( m@#daq�  . k,aGrD0r m`lis30�3� ,A"Ns[s d�  +�drc$~y?*%�lAs� \;�p�pbM�S��x05�$SL��1)P!60,4g|eup P�|(gji2sb�5x �%�n�3y�yk,L #$sw!T�08)�rnySS�\2�*!m�aq Q�0 ,#s�e*cT! ��nq�{`P30(>�MvJTYr/�MrK}a��f=n�8/)\Td~]`)zP�T,R�__gq�taK8w �:."�gv3t o,d�ipL�8!Ui�41`,6�<!�+($!F6�}]= *$�p.8�"*b^P  W9!,(\1&�\� -0tr2�0U�3 *`��t!*a��7 l U�r�,D37&l V95�( �1q+,ht"p(�`q�&�\:3��*�� $�@C*�.*-f~O<�p)m!a/�
DAnpj�<' <n�c#`S(�_H`C{ ".`C�1rw UD,�aj!q�au�"$,r�3Wj�T"/�cag�wdV:� j�tWq)$ /(�Hawc"�4!lcL`Js(T0p,��g�y � � �@�
%T4a8 El`c� Tx((QH�js;�46Y<a!lbs2bU)0$�s�q�9%P1%0 c@�Ss&T13�, oAus`V9d@ c�@�s`p`�2,�c�A{qU�~`
q-2_2yPe iQ�mbgWv}5xjoNp�r|asPgr�R0l_M"as�Ca��!P.�)�.lg&g|adi�g*a$Ԡ$,$$�$ � 60�SB$(U*h<�]g l!Dvc�1�'0ipD=.�S84,(�)0B,&�1� ��7`/8t�3H)"�16 �*$17 ,!U96 d Gs�,�|8Q��5� (!20$u0�04 t20*$$429 95\44 �.	c�F2r%v�lEtm�k){M)rodxf
�l�R�"& @G�x"$nhL�~(�1e-$E �D\4"�$V3%,�V l9p� E94(8&E�0,0tQD(�U35 ,aw�60-03,, Ps7�o!D�7f.HX�8,�01) , T8�@.%Q2� -hDjb !t23p,��w�8r�F4�h��

]0c,hsS\12�
7,)s{(�1;� Bh@Sbb/4	>$�xacs(P�=b!bB}!!{ lQ6�, jhaQ�1�37&n cls�� ���p/���!q�"\!3,% !�#c�`T�0 -$3d�r� �30�MCla_zxT��`$p#dss0t&3fnD+L#� t2��,	
yd���9@e3�w�/dd^&]oO�j+��b6mp!sez0r )^�ec,P{���r06oh�Tmd��9 �t00�!T7 / Q2(-4t�.�T'�� A5$� D6$�*\va�T8,� �"} �Q  �)~93&,�0<bs ( $(\4��96i T!7�.	T> <0t�: $0v�4 ,$H21 �$�2wA&,{3 ,�E2	(smfcd.�a�IlE;�
*|%i�Cte {dpKq#��olat�2T�,�siaxs�\ 	-hcm!s3 �0.�ri#s Lrj,�r-js�a�g�4a�igv�� <aomm�W Q5$,-g.g�Wf^W4�(n|c}R�$"
T1�9n ae rs�u�,q(rGmA#�&T59(�(cja$�`�2 �,�gj+{`�W)"� cn�zg U12 -9cnas'r�3�,az��$�20>
yDgwt�pe`iqSiem?fu,Ydom~dU�/pEc�fr  �Lbd�+L`T/8{a}>s��ol�tIl�;	#�1�< T0jT� ib.( �4$D ]�H X6!$ T7" u* <�t�b( TsP% �y` �V�2dD"V2Sb( �t(\ 1 $.t=�!� dQ7�e4S�8�l"T��-(T3{�,0��!i D2 <!tw10<p�$p.f*) co�q|!�-�O�1a�8lg\c6adtws �,(c�qj{ T�,#�l wg�D4,$ �lp{3b�1(l(fD`2W��2'�hSACsz 1�
�Q9!(!0H$#�R�nl!D�3 � �R: < TXc.`Q26 &&�(w�la+m%iu*�
%lm�}�t�<p�i�s��(s`}ku"� (`'hiw�&�fBdj!q"\i�A00 T0�,h�T!rp T"b#.c,1u�p%P, �lbsw$\ < cNa�c |vf�s�brr(T-<��(���pD��� a�cZ3$|1 ,�'l�qr�T44$,$�d�3�T1�L&diL){s��!"q% emas�$Uyr, '�ssw ��- * #���w T3��+yd"3K!F�6 ��c,!s3 D=0.`c-`[� 9 ��t� 02 \ ge��2 �300� a, s1!Tz5$l�,�Qc��20%$�cLpg� \r1!�ca|�s�6r,�~
�yz=u|q�0hS_5c
v�mq4v9�$�*)Ipc��aTail/m9�vt}�3jxgitgs7t�{tEr&�Xx�)-Jci�|uDg Bk��TSr`�EVPaE�p-�*
M+� jEnkYx�s)�uq%DET2�I|q�=";-(�CO%sYi�

/-/=p)�`w�yk��*��L�L
v�|a #ueh4cl�s3�W�q�m�sv �!�O��D{PA]OO�]AF)mO�W�FZWTO\nPCY C�]	q_h�UM�PaRAGS*BOR\T�ZROUNP�^(cv`{1 ~)+N	�*$zkvY�w�cs_heE_w��9���|d���4e�f]"&^!(�.*�al�T$5o~e�i�`�	BB�MSPMT[E��LFQA DOR8�OoStOTT�KU~݂,P;),�ݪt7�t�)|e"<k(c�r ��('lc3s T)RLs^�/OIC��<�F
tWPX]C��T�) @�GTv.X@YNU]T�&�MC��#IWT�`DNE�{^PEG�slm�r�+p.�J	$�Y~yse �3^Mu4~un?pn}+nIr_tfs�ES�R (T;2#e�.U0>/|st�r
EO�UIF�c�o�Y�[gNWvUv- MP<�P:]NU�MP�Og�BEOSP�0__de�lWl�W��T5�~	qq�_W9rM`mzVo-mOfC�X��M.r�0_uUcdlU)0T^*clswp�o-K4L�*-0�C7stNiPE�MZI�pAMK�J_KST[D^�N�-`!Fc�qVmlerm<�9:
�"`goPl ta=kl}sSBV� K�se t B�OS�WR[��DAsg��( MC�wD�CNU^TS9%�+N�XwO5NUl�Pa�T̓-F+Ҕ_�R��JUES�khAcr,T�p:
=e�x�r8e4ocmAr�(R-0�-�sw@
"oKQd�A@COLC[n(V�O�_P�COU�T�Z,�G�sh_Q[�NU��QIRAQ(RONWT|PP�EGULDK$cm�wq �/�>�ys;^f}R"I6We,�v�o�p.yHTgdW�3tms((`P�:jozsd"f�lQt�}թi:�o_STS�X_%z]]JPAReG C�K��_P�X\VDFM)0
\' V`cwy�e)87L�t%x�lqvelb,e�i0R
fIv�l.�VCcP
t�i}ycug2>cL�Ss�R? C$`cBt!BOATOA3_C�o�aM�R(�oKST}�P�AOYFh!R)8BD�S_�PA.u�_PI��C*F�_YD�Qt]�K�N��(yam#r"�	 v
eRO	R�E��_`	S!OC	VW/QPORR�C+=NPC��|�7r, >
�o~eD '+�y~=o&*�8bMS3Vzx_INI.PA[AMS�OO�[T_P1WaO�.Es.9;(�zjctk
ua�P|qe <"|�ww�
( coc�yU(bjO�_pY�#HeG]I *o/{�]p_'�YN�S- nO�S_PRCJ��WqCr�EW8@O�p_�4OBGUNTP%smi�K5)>
��{\t�1}c_L�m�b�*pkK[�rktgsLM�v:�!MweDc�Hl R�:+cml�f4nua�	XeJ9,AB�We_@M�r)ER)r�_VtwPONnTGvW�lQ)� fnNs�(>�|auie ;	�Mwo�led%j,`Naxs1R,��Ms�s � @�Oӵ\�HAgE]A]IFh�MrxPX�J.]�4UP	(DMORTwBQW
�e}d�Ah�yk<c?s�l s4`z(TaN?T_�P_CMG�[HDCGiW?PP]�T�R	 ToJT\�X^%N�M� eRM2hBIm�AWPSLWJor<�e�Sq@V�1>
eo�McCe ��Ni{�(, cleYS P�]GS�OPS_s�m
YE+^d:Q)$�yoi`msRnnQ�Ci�t7r]$d�Ez(r:EUF`s^C�n�!L�:*�o~Rt ��ItIli9)(RGF�PS�^ECum�IAJ��S	JO�SXO�PvA�YGT��xya=;
UJte-Alwlg�gNQw�(rl"]qs�4 
dSWOR�E��_SAOS	VWQpR�O=NTC��m�$"/>rp)��0q�qlq�eh<bl!yshR< W�%�W`��"O7�}D0M�+
COSt�t_3w��TER�ctspM!V+d�
P[��UA{r�UEQ)C�sG�<PBWVOQ^TE2(H�)~3/lsl ��mavTe�)?-H�u�S�*'taj+�`cwbR(�v)�3`UML�@_pP�OKME�IG(bi�[p@_
8�Svwar� mk_oEl_g|np/��g�_p�R4�b�� �DucpaEllh�::jioWX�*6o�%tIX=-)(BISTUI|UO�]�MRCMS:JOC�V_VTc�ELGQ,U)>$));�B�.tal�ri�e�TclsS@B	!k-ass T�BO�T_ %AOMOI�[
F�_YD�Qt]�KeN��)xCmSVWPR_ELu_^R�RgNS4�nQV]P{�_ns,)�ay�4@`jkek3t�p8a_lE�OfunVxo)npeR[� 3|b{�3�V_&caPoq�� ���hc���| �o^ad}ld(�"B�A[�^0WGF�D��BSY�IBFO_
[X��B.UFDRdt�$j~M=G/�St1:��
Re,���|e ?�m�#r ,!#n�r3��"&
TAZ	 z��ST�pPS�OT/^Y QeMS.`_�7�]S��#OUf�eV,d�);r!U�2>}�x
Xs�IrA0h��o-m�vuo_Ponm1hp_�UwT�hS!8�'K3w��ll0�{p:aNnr4$�m0C�i|!?)�B_�QTd\��
)�B_S��W�YnUT�AҡLW��S]]�P_koLtA2\\	**;iYuea<ct42=,ea>R=�)mqse R BU�SU�P}SgL�_mG8FNUP]USZW�o�bT�r(�BoG[t�Q�]eKUmqAZAE�(O�R$`p�[GM��S.g�syc�Td0�	�|��xy`})hs�
rnOSD_Qj_C�UN^u]�	(hV/dapo,	;�t�uxduvE$b�is3 �%�clA3 \`@m�CTPZ_DgIoY�!�MQT�Q\_�O�NU�	�2oNS[� R��IS@P@]S(C_}SP�TQ_IGOGR�s|!�w�^�"8
{g^_3p�0e3^�e�[�p._PEilt�>_umSd%z`S�(#`we,`�~(�_��v6�olAUq�d
)*HLJZWT_fK�I��EA�X*B_GW^]XRMUNPEJ,Wyh�gMO;w��n,A�at%(m
F�E1ZMit!5y�Hu�sh$22�d3�*@ CO��u^YPcM
x�rt]`e�SdqOdtNE3A�~�sL�cs�erPS �W�AdIch1t::"a�j{w�v�eu�mdj�(rMOW�_XD�UFT�[�E��
qo{_y�A A3�mum�f�~u�I��hr_z�%vd��) Kdug|eU8:z�Egs|d6o,af�eu �/�O�\�Zo\JM_4QVW8k�R_PP�HO�E|�U),n/�(0*'j�d*folQdi]ѩk�hAgtjf*�4lnm&�BnKsP��RC�|ERI*xX�D.�KOst�tA_)s\�\e�UQfj