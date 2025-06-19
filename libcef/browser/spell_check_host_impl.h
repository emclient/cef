// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CEF_LIBCEF_BROWSER_SPELL_CHECK_HOST_IMPL_H_
#define CEF_LIBCEF_BROWSER_SPELL_CHECK_HOST_IMPL_H_

#include "build/build_config.h"
#include "components/spellcheck/common/spellcheck.mojom.h"
#include "components/spellcheck/spellcheck_buildflags.h"
#include "cef/include/cef_client.h"
#include "cef/include/cef_spellcheck_handler.h"

#if !BUILDFLAG(ENABLE_SPELLCHECK)
#error "Spellcheck should be enabled."
#endif

// A basic implementation of SpellCheckHost without using any Chrome-only
// feature, so that there is still basic spellcheck support when those features
// are not available (e.g., on Android WebView). The full implementation
// involving Chrome-only features is in SpellCheckHostChromeImpl.
class CefSpellCheckHostImpl : public spellcheck::mojom::SpellCheckHost {
 public:
  CefSpellCheckHostImpl(CefRefPtr<CefClient> client);

  CefSpellCheckHostImpl(const CefSpellCheckHostImpl&) = delete;
  CefSpellCheckHostImpl& operator=(const CefSpellCheckHostImpl&) = delete;

  ~CefSpellCheckHostImpl() override;

 protected:
  // spellcheck::mojom::SpellCheckHost:
  void NotifyChecked(const std::u16string& word, bool misspelled) override;

  void CallSpellingService(const std::u16string& text,
                           CallSpellingServiceCallback callback) override;

  void CheckSpelling(const std::u16string& word,
                     CheckSpellingCallback) override;

  void FillSuggestionList(const std::u16string& word,
                          FillSuggestionListCallback) override;

  void RequestTextCheck(const std::u16string& text,
                        RequestTextCheckCallback callback) override;

  void InitializeDictionaries(InitializeDictionariesCallback callback) override;

 private:
  CefRefPtr<CefSpellCheckHandler> handler_;
};

#endif  // CEF_LIBCEF_BROWSER_SPELL_CHECK_HOST_IMPL_H_
