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
// $hash=8c4bdb071a500a09f4832c2ec7f5c0b47152bcdf$
//

#ifndef CEF_LIBCEF_DLL_CTOCPP_DOWNLOAD_IMAGE_CALLBACK_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_DOWNLOAD_IMAGE_CALLBACK_CTOCPP_H_
#pragma once

#if !defined(BUILDING_CEF_SHARED)
#error This file can be included DLL-side only
#endif

#include "include/capi/cef_browser_capi.h"
#include "include/capi/cef_client_capi.h"
#include "include/cef_browser.h"
#include "include/cef_client.h"
#include "libcef_dll/ctocpp/ctocpp_ref_counted.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed DLL-side only.
class CefDownloadImageCallbackCToCpp
    : public CefCToCppRefCounted<CefDownloadImageCallbackCToCpp,
                                 CefDownloadImageCallback,
                                 cef_download_image_callback_t> {
 public:
  CefDownloadImageCallbackCToCpp();

  // CefDownloadImageCallback methods.
  void OnDownloadImageFinished(const CefString& image_url,
                               int http_status_code,
                               CefRefPtr<CefImage> image) override;
};

#endif  // CEF_LIBCEF_DLL_CTOCPP_DOWNLOAD_IMAGE_CALLBACK_CTOCPP_H_
