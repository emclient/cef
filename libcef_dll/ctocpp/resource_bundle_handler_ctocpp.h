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
// $hash=a1862d350f8d94ec739d93e8f6ce1944336bcf18$
//

#ifndef CEF_LIBCEF_DLL_CTOCPP_RESOURCE_BUNDLE_HANDLER_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_RESOURCE_BUNDLE_HANDLER_CTOCPP_H_
#pragma once

#if !defined(BUILDING_CEF_SHARED)
#error This file can be included DLL-side only
#endif

#include "include/capi/cef_resource_bundle_handler_capi.h"
#include "include/cef_resource_bundle_handler.h"
#include "libcef_dll/ctocpp/ctocpp_ref_counted.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed DLL-side only.
class CefResourceBundleHandlerCToCpp
    : public CefCToCppRefCounted<CefResourceBundleHandlerCToCpp,
                                 CefResourceBundleHandler,
                                 cef_resource_bundle_handler_t> {
 public:
  CefResourceBundleHandlerCToCpp();

  // CefResourceBundleHandler methods.
  bool GetLocalizedString(int string_id, CefString& string) override;
  bool GetDataResource(int resource_id,
                       void*& data,
                       size_t& data_size) override;
  bool GetDataResourceForScale(int resource_id,
                               ScaleFactor scale_factor,
                               void*& data,
                               size_t& data_size) override;
};

#endif  // CEF_LIBCEF_DLL_CTOCPP_RESOURCE_BUNDLE_HANDLER_CTOCPP_H_
