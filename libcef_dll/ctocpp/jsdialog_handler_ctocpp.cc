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
// $hash=b2933cb7066e6322e99597fbffebd21d50dd9309$
//

#include "libcef_dll/ctocpp/jsdialog_handler_ctocpp.h"
#include "libcef_dll/cpptoc/browser_cpptoc.h"
#include "libcef_dll/cpptoc/jsdialog_callback_cpptoc.h"

// VIRTUAL METHODS - Body may be edited by hand.

NO_SANITIZE("cfi-icall")
bool CefJSDialogHandlerCToCpp::OnJSDialog(
    CefRefPtr<CefBrowser> browser,
    const CefString& origin_url,
    JSDialogType dialog_type,
    const CefString& message_text,
    const CefString& default_prompt_text,
    CefRefPtr<CefJSDialogCallback> callback,
    bool& suppress_message) {
  cef_jsdialog_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_jsdialog))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get())
    return false;
  // Verify param: callback; type: refptr_diff
  DCHECK(callback.get());
  if (!callback.get())
    return false;
  // Unverified params: origin_url, message_text, default_prompt_text

  // Translate param: suppress_message; type: bool_byref
  int suppress_messageInt = suppress_message;

  // Execute
  int _retval = _struct->on_jsdialog(
      _struct, CefBrowserCppToC::Wrap(browser), origin_url.GetStruct(),
      dialog_type, message_text.GetStruct(), default_prompt_text.GetStruct(),
      CefJSDialogCallbackCppToC::Wrap(callback), &suppress_messageInt);

  // Restore param:suppress_message; type: bool_byref
  suppress_message = suppress_messageInt ? true : false;

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall")
bool CefJSDialogHandlerCToCpp::OnBeforeUnloadDialog(
    CefRefPtr<CefBrowser> browser,
    const CefString& message_text,
    bool is_reload,
    CefRefPtr<CefJSDialogCallback> callback) {
  cef_jsdialog_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_before_unload_dialog))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get())
    return false;
  // Verify param: callback; type: refptr_diff
  DCHECK(callback.get());
  if (!callback.get())
    return false;
  // Unverified params: message_text

  // Execute
  int _retval = _struct->on_before_unload_dialog(
      _struct, CefBrowserCppToC::Wrap(browser), message_text.GetStruct(),
      is_reload, CefJSDialogCallbackCppToC::Wrap(callback));

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall")
void CefJSDialogHandlerCToCpp::OnResetDialogState(
    CefRefPtr<CefBrowser> browser) {
  cef_jsdialog_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_reset_dialog_state))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get())
    return;

  // Execute
  _struct->on_reset_dialog_state(_struct, CefBrowserCppToC::Wrap(browser));
}

NO_SANITIZE("cfi-icall")
void CefJSDialogHandlerCToCpp::OnDialogClosed(CefRefPtr<CefBrowser> browser) {
  cef_jsdialog_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_dialog_closed))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get())
    return;

  // Execute
  _struct->on_dialog_closed(_struct, CefBrowserCppToC::Wrap(browser));
}

// CONSTRUCTOR - Do not edit by hand.

CefJSDialogHandlerCToCpp::CefJSDialogHandlerCToCpp() {}

template <>
cef_jsdialog_handler_t* CefCToCppRefCounted<
    CefJSDialogHandlerCToCpp,
    CefJSDialogHandler,
    cef_jsdialog_handler_t>::UnwrapDerived(CefWrapperType type,
                                           CefJSDialogHandler* c) {
  NOTREACHED() << "Unexpected class type: " << type;
  return NULL;
}

#if DCHECK_IS_ON()
template <>
base::AtomicRefCount CefCToCppRefCounted<CefJSDialogHandlerCToCpp,
                                         CefJSDialogHandler,
                                         cef_jsdialog_handler_t>::DebugObjCt
    ATOMIC_DECLARATION;
#endif

template <>
CefWrapperType CefCToCppRefCounted<CefJSDialogHandlerCToCpp,
                                   CefJSDialogHandler,
                                   cef_jsdialog_handler_t>::kWrapperType =
    WT_JSDIALOG_HANDLER;
