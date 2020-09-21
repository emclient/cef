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
// $hash=5f27a3855473d69fb55977bfc428bee6fa272186$
//

#ifndef CEF_LIBCEF_DLL_CTOCPP_REQUEST_CONTEXT_HANDLER_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_REQUEST_CONTEXT_HANDLER_CTOCPP_H_
#pragma once

#if !defined(BUILDING_CEF_SHARED)
#error This file can be included DLL-side only
#endif

#include "include/capi/cef_request_context_capi.h"
#include "include/capi/cef_request_context_handler_capi.h"
#include "include/cef_request_context.h"
#include "include/cef_request_context_handler.h"
#include "libcef_dll/ctocpp/ctocpp_ref_counted.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed DLL-side only.
class CefRequestContextHandlerCToCpp
    : public CefCToCppRefCounted<CefRequestContextHandlerCToCpp,
                                 CefRequestContextHandler,
                                 cef_request_context_handler_t> {
 public:
  CefRequestContextHandlerCToCpp();

  // CefRequestContextHandler methods.
  void OnRequestContextInitialized(
      CefRefPtr<CefRequestContext> request_context) override;
  CefRefPtr<CefCookieManager> GetCookieManager() override;
  bool OnBeforePluginLoad(const CefString& mime_type,
                          const CefString& plugin_url,
                          bool is_main_frame,
                          const CefString& top_origin_url,
                          CefRefPtr<CefWebPluginInfo> plugin_info,
                          PluginPolicy* plugin_policy) override;
};

#endif  // CEF_LIBCEF_DLL_CTOCPP_REQUEST_CONTEXT_HANDLER_CTOCPP_H_
