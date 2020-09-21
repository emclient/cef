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
// $hash=e495f921e3fc1fd3d22712309223aacfd019dbb2$
//

#ifndef CEF_LIBCEF_DLL_CPPTOC_REGISTER_CDM_CALLBACK_CPPTOC_H_
#define CEF_LIBCEF_DLL_CPPTOC_REGISTER_CDM_CALLBACK_CPPTOC_H_
#pragma once

#if !defined(WRAPPING_CEF_SHARED)
#error This file can be included wrapper-side only
#endif

#include "include/capi/cef_browser_capi.h"
#include "include/capi/cef_web_plugin_capi.h"
#include "include/cef_browser.h"
#include "include/cef_web_plugin.h"
#include "libcef_dll/cpptoc/cpptoc_ref_counted.h"

// Wrap a C++ class with a C structure.
// This class may be instantiated and accessed wrapper-side only.
class CefRegisterCdmCallbackCppToC
    : public CefCppToCRefCounted<CefRegisterCdmCallbackCppToC,
                                 CefRegisterCdmCallback,
                                 cef_register_cdm_callback_t> {
 public:
  CefRegisterCdmCallbackCppToC();
};

#endif  // CEF_LIBCEF_DLL_CPPTOC_REGISTER_CDM_CALLBACK_CPPTOC_H_
