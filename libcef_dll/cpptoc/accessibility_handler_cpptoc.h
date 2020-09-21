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
// $hash=1558631406be085217be77909641e803f14b2d3c$
//

#ifndef CEF_LIBCEF_DLL_CPPTOC_ACCESSIBILITY_HANDLER_CPPTOC_H_
#define CEF_LIBCEF_DLL_CPPTOC_ACCESSIBILITY_HANDLER_CPPTOC_H_
#pragma once

#if !defined(WRAPPING_CEF_SHARED)
#error This file can be included wrapper-side only
#endif

#include "include/capi/cef_accessibility_handler_capi.h"
#include "include/cef_accessibility_handler.h"
#include "libcef_dll/cpptoc/cpptoc_ref_counted.h"

// Wrap a C++ class with a C structure.
// This class may be instantiated and accessed wrapper-side only.
class CefAccessibilityHandlerCppToC
    : public CefCppToCRefCounted<CefAccessibilityHandlerCppToC,
                                 CefAccessibilityHandler,
                                 cef_accessibility_handler_t> {
 public:
  CefAccessibilityHandlerCppToC();
};

#endif  // CEF_LIBCEF_DLL_CPPTOC_ACCESSIBILITY_HANDLER_CPPTOC_H_
