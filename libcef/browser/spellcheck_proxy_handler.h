// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CEF_LIBCEF_BROWSER_SPELLCHECK_HANDLER_H_
#define CEF_LIBCEF_BROWSER_SPELLCHECK_HANDLER_H_
#pragma once

#include <set>

#include "base/strings/string16.h"
#include "include/internal/cef_ptr.h"

#include "base/memory/ref_counted.h"
#include "base/synchronization/lock.h"

#include "chrome/browser/spellchecker/spellcheck_handler.h"
#include "components/spellcheck/common/spellcheck_result.h"
#include "components/spellcheck/renderer/spellcheck_worditerator.h"
#include "content/public/browser/render_process_host.h"
#include "content/public/renderer/render_frame.h"

#include "libcef/renderer/browser_impl.h"

struct SpellCheckResult;
class SpellcheckWordIterator;
class SpellcheckCharAttribute;

class CefSpellCheckProxyHandler
    : public base::RefCountedThreadSafe<CefSpellCheckProxyHandler>,
      public SpellCheckHandler {
 public:
  explicit CefSpellCheckProxyHandler(content::RenderFrame* render_frame);

  virtual ~CefSpellCheckProxyHandler() = default;

  void OnTextCheck(const base::string16& text,
                   std::vector<SpellCheckResult>& results) override;

 private:
  bool IsMisspelled(base::string16& word);
  void GetLanguageCode(std::string& lang);

  content::RenderFrame* render_frame_;
  SpellcheckWordIterator iterator_;
  SpellcheckCharAttribute attribute_;
  CefRefPtr<CefSpellCheckHandler> spellcheckHandler_;
  char lastLanguageCode_[3];

  DISALLOW_COPY_AND_ASSIGN(CefSpellCheckProxyHandler);
};

#endif  // CEF_LIBCEF_BROWSER_SPELLCHECK_HANDLER_H_