// Copyright (c) 2012 Marshall A. Greenblatt. All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are
// met:
//
//    * Redistributions of source code must retain the above copyright
// notice, this list of conditions and the following disclaimer.
//    * Redistributions in binary form must reproduce the above
// copyright notice, this list of conditions and the following disclaimer
// in the documentation and/or other materials provided with the
// distribution.
//    * Neither the name of Google Inc. nor the name Chromium Embedded
// Framework nor the names of its contributors may be used to endorse
// or promote products derived from this software without specific prior
// written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
// OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//
// ---------------------------------------------------------------------------
//
// The contents of this file must follow a specific format in order to
// support the CEF translator tool. See the translator.README.txt file in the
// tools directory for more information.
//

#ifndef CEF_INCLUDE_CEF_SPELLCHECK_HANDLER_H_
#define CEF_INCLUDE_CEF_SPELLCHECK_HANDLER_H_
#pragma once

#include <vector>

#include "include/cef_base.h"

#if CEF_API_ADDED(CEF_NEXT)
///
/// Callback for asynchronous continuation of CefSpellCheckHandler::RequestTextCheck().
///
/*--cef(source=library,added=next)--*/
class CefSpellCheckCallback : public virtual CefBaseRefCounted {
 public:
  ///
  /// Callback for asynchronous continuation of RequestTextCheck(). Sets
  /// the ranges specified by |ranges| as misspelled.
  ///
  /*--cef(capi_name=cont)--*/
  virtual void Continue(const std::vector<CefRange>& ranges) = 0;
};

///
/// Class used to implement a custom spell check interface.
///
/*--cef(source=client,added=next)--*/
class CefSpellCheckHandler : public virtual CefBaseRefCounted {
 public:
  ///
  /// Check a given text for misspellings.
  ///
  /*--cef()--*/
  virtual void OnRequestTextCheck(const CefString& text,
                                  CefRefPtr<CefSpellCheckCallback> callback) = 0;
};
#endif

#endif  // CEF_INCLUDE_CEF_SPELLCHECK_HANDLER_H_
