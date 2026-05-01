// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "cef/libcef/browser/spell_check_host_impl.h"

#include "build/build_config.h"
#include "components/spellcheck/spellcheck_buildflags.h"
#include "content/public/browser/browser_thread.h"
#include "cef/libcef/common/app_manager.h"

class CefSpellCheckCallbackImpl
    : public CefSpellCheckCallback {
 public:
  explicit CefSpellCheckCallbackImpl(
      CefSpellCheckHostImpl::RequestTextCheckCallback callback)
      : callback_(std::move(callback)) {}

  CefSpellCheckCallbackImpl(
      const CefSpellCheckCallbackImpl&) = delete;
  CefSpellCheckCallbackImpl& operator=(
      const CefSpellCheckCallbackImpl&) = delete;

  ~CefSpellCheckCallbackImpl() override {
    if (!callback_.is_null()) {
      std::vector<SpellCheckResult> results;
      std::move(callback_).Run(results);
    }
  }

  void Continue(const std::vector<CefRange>& ranges) override {
    if (!callback_.is_null()) {
      std::vector<SpellCheckResult> results;
      for (const CefRange& r : ranges) {
        std::vector<std::u16string> suggestions_for_word;
        results.push_back(SpellCheckResult(SpellCheckResult::SPELLING, r.from, r.to, suggestions_for_word));
      }
      std::move(callback_).Run(results);
    }
  }

 private:
  CefSpellCheckHostImpl::RequestTextCheckCallback callback_;

  IMPLEMENT_REFCOUNTING(CefSpellCheckCallbackImpl);
};

CefSpellCheckHostImpl::CefSpellCheckHostImpl(CefRefPtr<CefClient> client)
{
  handler_ = client->GetSpellCheckHandler();
}

CefSpellCheckHostImpl::~CefSpellCheckHostImpl() = default;

void CefSpellCheckHostImpl::NotifyChecked(const std::u16string& word,
                                          bool misspelled) {
  DCHECK_CURRENTLY_ON(content::BrowserThread::UI);

  // This API requires Chrome-only features.
  return;
}

void CefSpellCheckHostImpl::CallSpellingService(
    const std::u16string& text,
    CallSpellingServiceCallback callback) {
  DCHECK_CURRENTLY_ON(content::BrowserThread::UI);

  if (text.empty()) {
    mojo::ReportBadMessage("Requested spelling service with empty text");
    return;
  }

  // This API requires Chrome-only features.
  std::move(callback).Run(false, std::vector<SpellCheckResult>());
}

void CefSpellCheckHostImpl::CheckSpelling(const std::u16string& word,
                                          CheckSpellingCallback) {
  DCHECK_CURRENTLY_ON(content::BrowserThread::UI);
}
                                        
void CefSpellCheckHostImpl::FillSuggestionList(const std::u16string& word,
                                               FillSuggestionListCallback) {
  DCHECK_CURRENTLY_ON(content::BrowserThread::UI);
}

void CefSpellCheckHostImpl::RequestTextCheck(const std::u16string& text,
                                             RequestTextCheckCallback callback) {
  DCHECK_CURRENTLY_ON(content::BrowserThread::UI);

  if (text.empty()) {
    mojo::ReportBadMessage("Requested text check with empty text");
    return;
  }

  if (!handler_.get()) {
    std::vector<SpellCheckResult> results;
    std::move(callback).Run(results);
    return;
  }

  CefRefPtr<CefSpellCheckCallbackImpl> callbackWrapper =
      new CefSpellCheckCallbackImpl(std::move(callback));
  handler_.get()->OnRequestTextCheck(CefString(text), callbackWrapper);
}

void CefSpellCheckHostImpl::InitializeDictionaries(
    InitializeDictionariesCallback callback) {
  DCHECK_CURRENTLY_ON(content::BrowserThread::UI);

  std::move(callback).Run(/*dictionaries=*/{}, /*custom_words=*/{},
                          /*enable=*/true);
}
