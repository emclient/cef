// Copyright (c) 2026 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.

#ifndef CEF_LIBCEF_BROWSER_SPELL_CHECK_TAG_H_
#define CEF_LIBCEF_BROWSER_SPELL_CHECK_TAG_H_
#pragma once

#include <string>
#include <vector>

// A tag passed to CefSpellCheckCallback::ContinueWithTags() travels with the
// misspelling as its last replacement suggestion, marked by a noncharacter
// prefix. Blink keeps the suggestions on the spelling marker and returns them
// in the context menu's dictionary suggestions, where the tag is taken out
// again. Blink joins the suggestions with newlines, so a tag must not contain
// one, and the renderer rewrites apostrophes, so a tag must not contain any.
inline constexpr char16_t kSpellCheckTagPrefix = 0xFDD0;

inline std::u16string MakeSpellCheckTag(const std::u16string& tag) {
  return kSpellCheckTagPrefix + tag;
}

inline bool HasSpellCheckTag(
    const std::vector<std::u16string>& dictionary_suggestions) {
  return !dictionary_suggestions.empty() &&
         !dictionary_suggestions.back().empty() &&
         dictionary_suggestions.back()[0] == kSpellCheckTagPrefix;
}

// Returns the tag of the misspelling, or an empty string.
inline std::u16string GetSpellCheckTag(
    const std::vector<std::u16string>& dictionary_suggestions) {
  return HasSpellCheckTag(dictionary_suggestions)
             ? dictionary_suggestions.back().substr(1)
             : std::u16string();
}

// Returns the number of dictionary suggestions without the tag.
inline size_t GetSpellCheckSuggestionCount(
    const std::vector<std::u16string>& dictionary_suggestions) {
  return dictionary_suggestions.size() -
         (HasSpellCheckTag(dictionary_suggestions) ? 1 : 0);
}

#endif  // CEF_LIBCEF_BROWSER_SPELL_CHECK_TAG_H_
