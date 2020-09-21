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
// $hash=25c86d215045f76c93a7ebe19602c88297a7b34c$
//

#include "libcef_dll/cpptoc/download_image_callback_cpptoc.h"
#include "libcef_dll/ctocpp/image_ctocpp.h"

namespace {

// MEMBER FUNCTIONS - Body may be edited by hand.

void CEF_CALLBACK download_image_callback_on_download_image_finished(
    struct _cef_download_image_callback_t* self,
    const cef_string_t* image_url,
    int http_status_code,
    struct _cef_image_t* image) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: image_url; type: string_byref_const
  DCHECK(image_url);
  if (!image_url)
    return;
  // Unverified params: image

  // Execute
  CefDownloadImageCallbackCppToC::Get(self)->OnDownloadImageFinished(
      CefString(image_url), http_status_code, CefImageCToCpp::Wrap(image));
}

}  // namespace

// CONSTRUCTOR - Do not edit by hand.

CefDownloadImageCallbackCppToC::CefDownloadImageCallbackCppToC() {
  GetStruct()->on_download_image_finished =
      download_image_callback_on_download_image_finished;
}

template <>
CefRefPtr<CefDownloadImageCallback> CefCppToCRefCounted<
    CefDownloadImageCallbackCppToC,
    CefDownloadImageCallback,
    cef_download_image_callback_t>::UnwrapDerived(CefWrapperType type,
                                                  cef_download_image_callback_t*
                                                      s) {
  NOTREACHED() << "Unexpected class type: " << type;
  return NULL;
}

#if DCHECK_IS_ON()
template <>
base::AtomicRefCount CefCppToCRefCounted<
    CefDownloadImageCallbackCppToC,
    CefDownloadImageCallback,
    cef_download_image_callback_t>::DebugObjCt ATOMIC_DECLARATION;
#endif

template <>
CefWrapperType
    CefCppToCRefCounted<CefDownloadImageCallbackCppToC,
                        CefDownloadImageCallback,
                        cef_download_image_callback_t>::kWrapperType =
        WT_DOWNLOAD_IMAGE_CALLBACK;
