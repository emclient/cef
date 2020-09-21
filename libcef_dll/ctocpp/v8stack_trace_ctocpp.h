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
// $hash=c01bdd7c73a7c0727bfe9c80d842820198e8dd20$
//

#ifndef CEF_LIBCEF_DLL_CTOCPP_V8STACK_TRACE_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_V8STACK_TRACE_CTOCPP_H_
#pragma once

#if !defined(WRAPPING_CEF_SHARED)
#error This file can be included wrapper-side only
#endif

#include "include/capi/cef_v8_capi.h"
#include "include/cef_v8.h"
#include "libcef_dll/ctocpp/ctocpp_ref_counted.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed wrapper-side only.
class CefV8StackTraceCToCpp : public CefCToCppRefCounted<CefV8StackTraceCToCpp,
                                                         CefV8StackTrace,
                                                         cef_v8stack_trace_t> {
 public:
  CefV8StackTraceCToCpp();

  // CefV8StackTrace methods.
  bool IsValid() OVERRIDE;
  int GetFrameCount() OVERRIDE;
  CefRefPtr<CefV8StackFrame> GetFrame(int index) OVERRIDE;
};

#endif  // CEF_LIBCEF_DLL_CTOCPP_V8STACK_TRACE_CTOCPP_H_
