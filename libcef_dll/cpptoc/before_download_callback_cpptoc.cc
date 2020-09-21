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
// $hash=de2c2e29c297c448d516e77508b6402bcd0b5c9d$
//

#include "libcef_dll/cpptoc/before_download_callback_cpptoc.h"

namespace {

// MEMBER FUNCTIONS - Body may be edited by hand.

void CEF_CALLBACK
before_download_callback_cont(struct _cef_before_download_callback_t* self,
                              const cef_string_t* download_path,
                              int show_dialog) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Unverified params: download_path

  // Execute
  CefBeforeDownloadCallbackCppToC::Get(self)->Continue(
      CefString(download_path), show_dialog ? true : false);
}

}  // namespace

// CONSTRUCTOR - Do not edit by hand.

CefBeforeDownloadCallbackCppToC::CefBeforeDownloadCallbackCppToC() {
  GetStruct()->cont = before_download_callback_cont;
}

template <>
CefRefPtr<CefBeforeDownloadCallback>
CefCppToCRefCounted<CefBeforeDownloadCallbackCppToC,
                    CefBeforeDownloadCallback,
                    cef_before_download_callback_t>::
    UnwrapDerived(CefWrapperType type, cef_before_download_callback_t* s) {
  NOTREACHED() << "Unexpected class type: " << type;
  return NULL;
}

#if DCHECK_IS_ON()
template <>
base::AtomicRefCount CefCppToCRefCounted<
    CefBeforeDownloadCallbackCppToC,
    CefBeforeDownloadCallback,
    cef_before_download_callback_t>::DebugObjCt ATOMIC_DECLARATION;
#endif

template <>
CefWrapperType
    CefCppToCRefCounted<CefBeforeDownloadCallbackCppToC,
                        CefBeforeDownloadCallback,
                        cef_before_download_callback_t>::kWrapperType =
        WT_BEFORE_DOWNLOAD_CALLBACK;
