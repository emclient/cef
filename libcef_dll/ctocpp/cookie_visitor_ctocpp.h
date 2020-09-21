// Copyright (c) 2020 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//
// $hash=6b1b0ff7423bf62b2889d9cd2cd1470d17bc0bf8$
//

#ifndef CEF_LIBCEF_DLL_CTOCPP_COOKIE_VISITOR_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_COOKIE_VISITOR_CTOCPP_H_
#pragma once

#if !defined(BUILDING_CEF_SHARED)
#error This file can be included DLL-side only
#endif

#include "include/capi/cef_cookie_capi.h"
#include "include/cef_cookie.h"
#include "libcef_dll/ctocpp/ctocpp_ref_counted.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed DLL-side only.
class CefCookieVisitorCToCpp
    : public CefCToCppRefCounted<CefCookieVisitorCToCpp,
                                 CefCookieVisitor,
                                 cef_cookie_visitor_t> {
 public:
  CefCookieVisitorCToCpp();

  // CefCookieVisitor methods.
  bool Visit(const CefCookie& cookie,
             int count,
             int total,
             bool& deleteCookie) override;
};

#endif  // CEF_LIBCEF_DLL_CTOCPP_COOKIE_VISITOR_CTOCPP_H_
