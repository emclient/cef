// Copyright (c) 2012 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.

#include "libcef/browser/spellcheck_proxy_handler.h"

#include "libcef/browser/browser_host_impl.h"
#include "chrome/renderer/spellchecker/spellcheck_worditerator.h"
#include "chrome/common/spellcheck_marker.h"


CefSpellCheckProxyHandler::CefSpellCheckProxyHandler(content::RenderProcessHost* host) {

	host_ = host;
}

CefSpellCheckProxyHandler::~CefSpellCheckProxyHandler() {
}

void CefSpellCheckProxyHandler::OnTextCheck(
	int route_id,
	const base::string16& text,
	const std::vector<SpellCheckMarker>& markers,
	std::vector<SpellCheckResult>& results) {

	CefRefPtr<CefBrowserHostImpl> browser = CefBrowserHostImpl::GetBrowserForFrame(host_->GetID(), route_id + 1);	// FIXME. This is not correct, although it works in most cases

	if (browser.get())
	{
		CefRefPtr<CefSpellCheckHandler> handler = browser->GetClient()->GetSpellCheckHandler();

		if (handler.get())
		{
			CefString lang;
			handler->GetLanguageCode(lang);
			std::string strLang = lang.ToString();

			if (!iterator_.get() || (strLang.compare(0, 2, lastLanguageCode_) != 0))
			{
				strLang.copy(lastLanguageCode_, 2, 0);
				lastLanguageCode_[2] = '\0';

				attribute_.reset(new SpellcheckCharAttribute());
				attribute_->SetDefaultLanguage(lang.ToString());

				// Set up a SpellcheckWordIterator object which extracts English words,
				// and retrieve them.
				iterator_.reset(new SpellcheckWordIterator());
				iterator_->Initialize(attribute_.get(), true);
			}
			lang.ClearAndFree();

			iterator_->SetText(text.c_str(), text.length());

			base::string16 word;
			int offset;
			int length;
			base::string16 split_characters = L".:\0";
			SpellcheckWordIterator::WordIteratorStatus status;
			while ((status = iterator_->GetNextWord(&word, &offset, &length)) != SpellcheckWordIterator::WordIteratorStatus::IS_END_OF_TEXT) {

				//LOG(WARNING) << word;

				if (status == SpellcheckWordIterator::WordIteratorStatus::IS_SKIPPABLE)
					continue;

				const wchar_t *wordChar = word.c_str();
				int counter = 0;
				int last = 0;
				while (*wordChar)
				{
					// handles words containing special characters (dots, especially, like 'www.example.org'). In that case, split them
					int index = split_characters.find(*wordChar, 0);
					if (index >= 0)
					{
						base::string16 w = word.substr(last, counter - last);

						bool misspelled = false;
						for (size_t i = 0; i < markers.size(); i++)
						{
							SpellCheckMarker marker = markers.at(i);
							int markerOffset = (int)marker.offset;
							if (markerOffset == offset + last)
							{
								misspelled = true;
								break;
							}
							if (markerOffset >= offset + counter)
								break;
						}

						if (handler->IsWordMisspelled(CefString(w.c_str()), misspelled))
						{
							base::string16 replacement;
							SpellCheckResult result(SpellCheckResult::SPELLING, offset + last, counter - last, replacement);
							results.push_back(result);
						}
						last = counter + 1;
					}
					counter++;
					wordChar++;
				}


				if (last != counter)
				{
					base::string16 w = word.substr(last);

					bool misspelled = false;
					for (size_t i = 0; i < markers.size(); i++)
					{
						SpellCheckMarker marker = markers.at(i);
						int markerOffset = (int)marker.offset;
						if (markerOffset == offset + last)
						{
							misspelled = true;
							break;
						}
						if (markerOffset >= offset + counter)
							break;
					}

					if (handler->IsWordMisspelled(CefString(w.c_str()), misspelled))
					{
						base::string16 replacement;
						SpellCheckResult result(SpellCheckResult::SPELLING, offset + last, length - last, replacement);
						results.push_back(result);
					}
				}
			}
		}
	}
	else
	{
		LOG(WARNING) << "SPELLCHECK - browser is null";
	}
}
