// Copyright (c) 2018 The Chromium Embedded Framework Authors. All rights
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
// $hash=13311a746c02c86b567a8bf9d790193d73fe3542$
//

#include "libcef_dll/cpptoc/print_callback_cpptoc.h"

namespace {

// MEMBER FUNCTIONS - Body may be edited by hand.

void CEF_CALLBACK
print_callback_on_print_finished(struct _cef_print_callback_t* self, int ok) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;

  // Execute
  CefPrintCallbackCppToC::Get(self)->OnPrintFinished(ok ? true : false);
}

}  // namespace

// CONSTRUCTOR - Do not edit by hand.

CefPrintCallbackCppToC::CefPrintCallbackCppToC() {
  GetStruct()->on_print_finished = print_callback_on_print_finished;
}

template <>
CefRefPtr<CefPrintCallback> CefCppToCRefCounted<
    CefPrintCallbackCppToC,
    CefPrintCallback,
    cef_print_callback_t>::UnwrapDerived(CefWrapperType type,
                                         cef_print_callback_t* s) {
  NOTREACHED() << "Unexpected class type: " << type;
  return NULL;
}

#if DCHECK_IS_ON()
template <>
base::AtomicRefCount CefCppToCRefCounted<CefPrintCallbackCppToC,
                                         CefPrintCallback,
                                         cef_print_callback_t>::DebugObjCt
    ATOMIC_DECLARATION;
#endif

template <>
CefWrapperType CefCppToCRefCounted<CefPrintCallbackCppToC,
                                   CefPrintCallback,
                                   cef_print_callback_t>::kWrapperType =
    WT_PRINT_CALLBACK;