// Copyright 2016 The Chromium Embedded Framework Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be found
// in the LICENSE file.

#include "libcef/browser/spellcheck_proxy_handler.h"
#include "content/public/browser/browser_thread.h"
#include "content/public/renderer/render_thread.h"
#include "content/public/renderer/render_view.h"
#include "libcef/browser/browser_host_impl.h"
#include "libcef/browser/thread_util.h"
#include "libcef/renderer/thread_util.h"
#include "libcef/common/cef_messages.h"

CefSpellCheckProxyHandler::CefSpellCheckProxyHandler(
    content::RenderFrame* render_frame) {
  render_frame_ = render_frame;
  iterator_.Reset();
}

// CefSpellCheckProxyHandler::~CefSpellCheckProxyHandler() {}

void CefSpellCheckProxyHandler::OnTextCheck(
    const base::string16& text,
    std::vector<SpellCheckResult>& results) {
 
    std::string lang;
    GetLanguageCode(lang);

    if (!iterator_.IsInitialized() ||
        (lang.compare(0, 2, lastLanguageCode_) != 0)) {
      lang.copy(lastLanguageCode_, 2, 0);
      lastLanguageCode_[2] = '\0';
      attribute_.SetDefaultLanguage(lang);
      iterator_.Initialize(&attribute_, true);
    }
    
    iterator_.SetText(text.c_str(), text.length());

    base::string16 word;
    size_t offset;
    size_t length;
    base::string16 split_characters = L".:\0";
    SpellcheckWordIterator::WordIteratorStatus status;
    while ((status = iterator_.GetNextWord(&word, &offset, &length)) !=
           SpellcheckWordIterator::WordIteratorStatus::IS_END_OF_TEXT) {
      // LOG(WARNING) << word;

      if (status == SpellcheckWordIterator::WordIteratorStatus::IS_SKIPPABLE)
        continue;

      const wchar_t* wordChar = word.c_str();
      int counter = 0;
      int last = 0;
      while (*wordChar) {
        // handles words containing special characters (dots, especially, like
        // 'www.example.org'). In that case, split them
        int index = split_characters.find(*wordChar, 0);
        if (index >= 0) {
          base::string16 w = word.substr(last, counter - last);

          if (IsMisspelled(w)) {
            SpellCheckResult result(SpellCheckResult::SPELLING, offset + last,
                                    counter - last);
            results.push_back(result);
          }
          last = counter + 1;
        }
        counter++;
        wordChar++;
      }

      if (last != counter) {
        base::string16 w = word.substr(last);

        if (IsMisspelled(w)) {
          SpellCheckResult result(SpellCheckResult::SPELLING, offset + last,
                                  length - last);
          results.push_back(result);
        }
      }
    }
}

bool CefSpellCheckProxyHandler::IsMisspelled(base::string16& word) {
  bool is_misspelled;
  render_frame_->Send(new CefHostMsg_SpellCheckRequest(render_frame_->GetRoutingID(), word, &is_misspelled));
  return is_misspelled;
}

void CefSpellCheckProxyHandler::GetLanguageCode(std::string& lang) {
  render_frame_->Send(new CefHostMsg_SpellCheckLanguage(render_frame_->GetRoutingID(), &lang));
}
