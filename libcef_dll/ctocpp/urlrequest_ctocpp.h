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
// $hash=6943308a7bc72ee51c7f69eaddf09880f16cee7d$
//

#ifndef CEF_LIBCEF_DLL_CTOCPP_URLREQUEST_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_URLREQUEST_CTOCPP_H_
#pragma once

#if !defined(WRAPPING_CEF_SHARED)
#error This file can be included wrapper-side only
#endif

#include "include/capi/cef_urlrequest_capi.h"
#include "include/cef_urlrequest.h"
#include "libcef_dll/ctocpp/ctocpp_ref_counted.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed wrapper-side only.
class CefURLRequestCToCpp : public CefCToCppRefCounted<CefURLRequestCToCpp,
                                                       CefURLRequest,
                                                       cef_urlrequest_t> {
 public:
  CefURLRequestCToCpp();

  // CefURLRequest methods.
  CefRefPtr<CefRequest> GetRequest() OVERRIDE;
  CefRefPtr<CefURLRequestClient> GetClient() OVERRIDE;
  Status GetRequestStatus() OVERRIDE;
  ErrorCode GetRequestError() OVERRIDE;
  CefRefPtr<CefResponse> GetResponse() OVERRIDE;
  bool ResponseWasCached() OVERRIDE;
  void Cancel() OVERRIDE;
};

#endif  // CEF_LIBCEF_DLL_CTOCPP_URLREQUEST_CTOCPP_H_
