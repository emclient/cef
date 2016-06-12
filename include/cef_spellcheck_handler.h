
#ifndef CEF_INCLUDE_CEF_SPELLCHECK_HANDLER_H_
#define CEF_INCLUDE_CEF_SPELLCHECK_HANDLER_H_
#pragma once

#include "include/cef_base.h"
#include "include/cef_browser.h"

///
// Implement this interface to handle spell checker events
///
/*--cef(source=client)--*/
class CefSpellCheckHandler : public virtual CefBase {
public:

	///
	// Returns the ISO language code used for spellcheck. This is useful for correct word-breaking
	///
	/*--cef()--*/
	virtual void GetLanguageCode(CefString& lang) {		
	}

	///
	// Called when a word needs to be checked. Return true if the word is misspelled, otherwise false
	///
	/*--cef()--*/
	virtual bool IsWordMisspelled(const CefString& word) {
		return false;
	}

};
#endif  // CEF_INCLUDE_CEF_SPELLCHECK_HANDLER_H_
