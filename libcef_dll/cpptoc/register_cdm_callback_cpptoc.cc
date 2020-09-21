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
// $hash=2c2a74b1168f6d85444b1a81d2946f645fa298dd$
//

#include "libcef_dll/cpptoc/register_cdm_callback_cpptoc.h"

namespace {

// MEMBER FUNCTIONS - Body may be edited by hand.

void CEF_CALLBACK register_cdm_callback_on_cdm_registration_complete(
    struct _cef_register_cdm_callback_t* self,
    cef_cdm_registration_error_t result,
    const cef_string_t* error_message) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Unverified params: error_message

  // Execute
  CefRegisterCdmCallbackCppToC::Get(self)->OnCdmRegistrationComplete(
      result, CefString(error_message));
}

}  // namespace

// CONSTRUCTOR - Do not edit by hand.

CefRegisterCdmCallbackCppToC::CefRegisterCdmCallbackCppToC() {
  GetStruct()->on_cdm_registration_complete =
      register_cdm_callback_on_cdm_registration_complete;
}

template <>
CefRefPtr<CefRegisterCdmCallback> CefCppToCRefCounted<
    CefRegisterCdmCallbackCppToC,
    CefRegisterCdmCallback,
    cef_register_cdm_callback_t>::UnwrapDerived(CefWrapperType type,
                                                cef_register_cdm_callback_t*
                                                    s) {
  NOTREACHED() << "Unexpected class type: " << type;
  return NULL;
}

#if DCHECK_IS_ON()
template <>
base::AtomicRefCount CefCppToCRefCounted<
    CefRegisterCdmCallbackCppToC,
    CefRegisterCdmCallback,
    cef_register_cdm_callback_t>::DebugObjCt ATOMIC_DECLARATION;
#endif

template <>
CefWrapperType CefCppToCRefCounted<CefRegisterCdmCallbackCppToC,
                                   CefRegisterCdmCallback,
                                   cef_register_cdm_callback_t>::kWrapperType =
    WT_REGISTER_CDM_CALLBACK;
