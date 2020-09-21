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
// $hash=409234d23488f034450f55e7cb52c656320eb3e6$
//

#include "libcef_dll/cpptoc/load_handler_cpptoc.h"
#include "libcef_dll/ctocpp/browser_ctocpp.h"
#include "libcef_dll/ctocpp/frame_ctocpp.h"

namespace {

// MEMBER FUNCTIONS - Body may be edited by hand.

void CEF_CALLBACK
load_handler_on_loading_state_change(struct _cef_load_handler_t* self,
                                     cef_browser_t* browser,
                                     int isLoading,
                                     int canGoBack,
                                     int canGoForward) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: browser; type: refptr_diff
  DCHECK(browser);
  if (!browser)
    return;

  // Execute
  CefLoadHandlerCppToC::Get(self)->OnLoadingStateChange(
      CefBrowserCToCpp::Wrap(browser), isLoading ? true : false,
      canGoBack ? true : false, canGoForward ? true : false);
}

void CEF_CALLBACK
load_handler_on_load_start(struct _cef_load_handler_t* self,
                           cef_browser_t* browser,
                           cef_frame_t* frame,
                           cef_transition_type_t transition_type) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: browser; type: refptr_diff
  DCHECK(browser);
  if (!browser)
    return;
  // Verify param: frame; type: refptr_diff
  DCHECK(frame);
  if (!frame)
    return;

  // Execute
  CefLoadHandlerCppToC::Get(self)->OnLoadStart(CefBrowserCToCpp::Wrap(browser),
                                               CefFrameCToCpp::Wrap(frame),
                                               transition_type);
}

void CEF_CALLBACK load_handler_on_load_end(struct _cef_load_handler_t* self,
                                           cef_browser_t* browser,
                                           cef_frame_t* frame,
                                           int httpStatusCode) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: browser; type: refptr_diff
  DCHECK(browser);
  if (!browser)
    return;
  // Verify param: frame; type: refptr_diff
  DCHECK(frame);
  if (!frame)
    return;

  // Execute
  CefLoadHandlerCppToC::Get(self)->OnLoadEnd(CefBrowserCToCpp::Wrap(browser),
                                             CefFrameCToCpp::Wrap(frame),
                                             httpStatusCode);
}

void CEF_CALLBACK load_handler_on_load_error(struct _cef_load_handler_t* self,
                                             cef_browser_t* browser,
                                             cef_frame_t* frame,
                                             cef_errorcode_t errorCode,
                                             const cef_string_t* errorText,
                                             const cef_string_t* failedUrl) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: browser; type: refptr_diff
  DCHECK(browser);
  if (!browser)
    return;
  // Verify param: frame; type: refptr_diff
  DCHECK(frame);
  if (!frame)
    return;
  // Verify param: failedUrl; type: string_byref_const
  DCHECK(failedUrl);
  if (!failedUrl)
    return;
  // Unverified params: errorText

  // Execute
  CefLoadHandlerCppToC::Get(self)->OnLoadError(
      CefBrowserCToCpp::Wrap(browser), CefFrameCToCpp::Wrap(frame), errorCode,
      CefString(errorText), CefString(failedUrl));
}

}  // namespace

// CONSTRUCTOR - Do not edit by hand.

CefLoadHandlerCppToC::CefLoadHandlerCppToC() {
  GetStruct()->on_loading_state_change = load_handler_on_loading_state_change;
  GetStruct()->on_load_start = load_handler_on_load_start;
  GetStruct()->on_load_end = load_handler_on_load_end;
  GetStruct()->on_load_error = load_handler_on_load_error;
}

template <>
CefRefPtr<CefLoadHandler>
CefCppToCRefCounted<CefLoadHandlerCppToC, CefLoadHandler, cef_load_handler_t>::
    UnwrapDerived(CefWrapperType type, cef_load_handler_t* s) {
  NOTREACHED() << "Unexpected class type: " << type;
  return NULL;
}

#if DCHECK_IS_ON()
template <>
base::AtomicRefCount CefCppToCRefCounted<CefLoadHandlerCppToC,
                                         CefLoadHandler,
                                         cef_load_handler_t>::DebugObjCt
    ATOMIC_DECLARATION;
#endif

template <>
CefWrapperType CefCppToCRefCounted<CefLoadHandlerCppToC,
                                   CefLoadHandler,
                                   cef_load_handler_t>::kWrapperType =
    WT_LOAD_HANDLER;
