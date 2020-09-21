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
// $hash=5c67dafeb34f960a2038c5930358fecf2894887e$
//

#ifndef CEF_LIBCEF_DLL_CTOCPP_PRINT_DIALOG_CALLBACK_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_PRINT_DIALOG_CALLBACK_CTOCPP_H_
#pragma once

#if !defined(WRAPPING_CEF_SHARED)
#error This file can be included wrapper-side only
#endif

#include "include/capi/cef_print_handler_capi.h"
#include "include/cef_print_handler.h"
#include "libcef_dll/ctocpp/ctocpp_ref_counted.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed wrapper-side only.
class CefPrintDialogCallbackCToCpp
    : public CefCToCppRefCounted<CefPrintDialogCallbackCToCpp,
                                 CefPrintDialogCallback,
                                 cef_print_dialog_callback_t> {
 public:
  CefPrintDialogCallbackCToCpp();

  // CefPrintDialogCallback methods.
  void Continue(CefRefPtr<CefPrintSettings> settings) OVERRIDE;
  void Cancel() OVERRIDE;
};

#endif  // CEF_LIBCEF_DLL_CTOCPP_PRINT_DIALOG_CALLBACK_CTOCPP_H_
