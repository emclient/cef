// Copyright (c) 2019 The Chromium Embedded Framework Authors. All rights
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
// $hash=597d47729f9b0ca7ee7f0c877e99168397a1c628$
//

#ifndef CEF_LIBCEF_DLL_CTOCPP_TOUCH_ACTION_HANDLER_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_TOUCH_ACTION_HANDLER_CTOCPP_H_
#pragma once

#if !defined(BUILDING_CEF_SHARED)
#error This file can be included DLL-side only
#endif

#include "include/capi/cef_touch_action_handler_capi.h"
#include "include/cef_touch_action_handler.h"
#include "libcef_dll/ctocpp/ctocpp_ref_counted.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed DLL-side only.
class CefTouchActionHandlerCToCpp
    : public CefCToCppRefCounted<CefTouchActionHandlerCToCpp,
                                 CefTouchActionHandler,
                                 cef_touch_action_handler_t> {
 public:
  CefTouchActionHandlerCToCpp();

  // CefTouchActionHandler methods.
  void HandleAction(CefString& action) override;
};

#endif  // CEF_LIBCEF_DLL_CTOCPP_TOUCH_ACTION_HANDLER_CTOCPP_H_
