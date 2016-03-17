// Copyright (c) 2012 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.

#ifndef CEF_LIBCEF_BROWSER_SPELLCHECK_HANDLER_H_
#define CEF_LIBCEF_BROWSER_SPELLCHECK_HANDLER_H_
#pragma once

#include <set>

#include "include/internal/cef_ptr.h"
#include "base/strings/string16.h"
#include "base/memory/scoped_ptr.h"

#include "base/memory/ref_counted.h"
#include "base/synchronization/lock.h"

#include "chrome/browser/spellchecker/spellcheck_handler.h"
#include "content/public/browser/render_process_host.h"
#include "chrome/common/spellcheck_result.h"

struct SpellCheckResult;
class SpellcheckWordIterator;
class SpellcheckCharAttribute;

// CefContextMenuParams implementation. This class is not thread safe.
class CefSpellCheckProxyHandler : public base::RefCountedThreadSafe<CefSpellCheckProxyHandler>, public SpellCheckHandler {
public:
	explicit CefSpellCheckProxyHandler(content::RenderProcessHost* host);

	~CefSpellCheckProxyHandler();

	void OnTextCheck(
		int route_id,
		const base::string16& text,
		std::vector<SpellCheckResult>& results) override;
private:

	content::RenderProcessHost* host_;
	scoped_ptr<SpellcheckWordIterator> iterator_;
	scoped_ptr<SpellcheckCharAttribute> attribute_;

	DISALLOW_COPY_AND_ASSIGN(CefSpellCheckProxyHandler);
};

#endif  // CEF_LIBCEF_BROWSER_SPELLCHECK_HANDLER_H_
