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
// $hash=c6f4cbc3d7dc77d2bfb91a597d5190a64bb81385$
//

#include "libcef_dll/ctocpp/spell_check_handler_ctocpp.h"

// VIRTUAL METHODS - Body may be edited by hand.

NO_SANITIZE("cfi-icall")
void CefSpellCheckHandlerCToCpp::GetLanguageCode(CefString& lang) {
  cef_spell_check_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_language_code))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->get_language_code(_struct, lang.GetWritableStruct());
}

NO_SANITIZE("cfi-icall")
bool CefSpellCheckHandlerCToCpp::IsWordMisspelled(const CefString& word) {
  cef_spell_check_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, is_word_misspelled))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: word; type: string_byref_const
  DCHECK(!word.empty());
  if (word.empty())
    return false;

  // Execute
  int _retval = _struct->is_word_misspelled(_struct, word.GetStruct());

  // Return type: bool
  return _retval ? true : false;
}

// CONSTRUCTOR - Do not edit by hand.

CefSpellCheckHandlerCToCpp::CefSpellCheckHandlerCToCpp() {}

template <>
cef_spell_check_handler_t* CefCToCppRefCounted<
    CefSpellCheckHandlerCToCpp,
    CefSpellCheckHandler,
    cef_spell_check_handler_t>::UnwrapDerived(CefWrapperType type,
                                              CefSpellCheckHandler* c) {
  NOTREACHED() << "Unexpected class type: " << type;
  return NULL;
}

#if DCHECK_IS_ON()
template <>
base::AtomicRefCount CefCToCppRefCounted<CefSpellCheckHandlerCToCpp,
                                         CefSpellCheckHandler,
                                         cef_spell_check_handler_t>::DebugObjCt
    ATOMIC_DECLARATION;
#endif

template <>
CefWrapperType CefCToCppRefCounted<CefSpellCheckHandlerCToCpp,
                                   CefSpellCheckHandler,
                                   cef_spell_check_handler_t>::kWrapperType =
    WT_SPELL_CHECK_HANDLER;
