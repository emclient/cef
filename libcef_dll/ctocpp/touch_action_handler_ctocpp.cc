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
// $hash=1c3db37726981352df6cfcfcb40080b8cba3f62c$
//

#include "libcef_dll/ctocpp/touch_action_handler_ctocpp.h"

// VIRTUAL METHODS - Body may be edited by hand.

NO_SANITIZE("cfi-icall")
void CefTouchActionHandlerCToCpp::HandleAction(CefString& action) {
  cef_touch_action_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, handle_action))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->handle_action(_struct, action.GetWritableStruct());
}

// CONSTRUCTOR - Do not edit by hand.

CefTouchActionHandlerCToCpp::CefTouchActionHandlerCToCpp() {}

template <>
cef_touch_action_handler_t* CefCToCppRefCounted<
    CefTouchActionHandlerCToCpp,
    CefTouchActionHandler,
    cef_touch_action_handler_t>::UnwrapDerived(CefWrapperType type,
                                               CefTouchActionHandler* c) {
  NOTREACHED() << "Unexpected class type: " << type;
  return NULL;
}

#if DCHECK_IS_ON()
template <>
base::AtomicRefCount CefCToCppRefCounted<CefTouchActionHandlerCToCpp,
                                         CefTouchActionHandler,
                                         cef_touch_action_handler_t>::DebugObjCt
    ATOMIC_DECLARATION;
#endif

template <>
CefWrapperType CefCToCppRefCounted<CefTouchActionHandlerCToCpp,
                                   CefTouchActionHandler,
                                   cef_touch_action_handler_t>::kWrapperType =
    WT_TOUCH_ACTION_HANDLER;