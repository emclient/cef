// Copyright (c) 2019 The Chromium Embedded Framework Authors. All rights
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
// $hash=0b08f42115fa2d4b07d7d6e754b4d7cdfbe44701$
//

#ifndef CEF_LIBCEF_DLL_CTOCPP_SPELL_CHECK_HANDLER_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_SPELL_CHECK_HANDLER_CTOCPP_H_
#pragma once

#if !defined(BUILDING_CEF_SHARED)
#error This file can be included DLL-side only
#endif

#include "include/capi/cef_spellcheck_handler_capi.h"
#include "include/cef_spellcheck_handler.h"
#include "libcef_dll/ctocpp/ctocpp_ref_counted.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed DLL-side only.
class CefSpellCheckHandlerCToCpp
    : public CefCToCppRefCounted<CefSpellCheckHandlerCToCpp,
                                 CefSpellCheckHandler,
                                 cef_spell_check_handler_t> {
 public:
  CefSpellCheckHandlerCToCpp();

  // CefSpellCheckHandler methods.
  void GetLanguageCode(CefString& lang) override;
  bool IsWordMisspelled(const CefString& word) override;
};

#endif  // CEF_LIBCEF_DLL_CTOCPP_SPELL_CHECK_HANDLER_CTOCPP_H_
