// Copyright (c) 2018 The Chromium Embedded Framework Authors. All rights
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
// $hash=0b2c7c24a96c8f5791b69cbbfd2ef6f09f027b4d$
//

#include "libcef_dll/ctocpp/browser_host_ctocpp.h"
#include "libcef_dll/cpptoc/client_cpptoc.h"
#include "libcef_dll/cpptoc/download_image_callback_cpptoc.h"
#include "libcef_dll/cpptoc/navigation_entry_visitor_cpptoc.h"
#include "libcef_dll/cpptoc/pdf_print_callback_cpptoc.h"
#include "libcef_dll/cpptoc/print_callback_cpptoc.h"
#include "libcef_dll/cpptoc/run_file_dialog_callback_cpptoc.h"
#include "libcef_dll/ctocpp/browser_ctocpp.h"
#include "libcef_dll/ctocpp/drag_data_ctocpp.h"
#include "libcef_dll/ctocpp/extension_ctocpp.h"
#include "libcef_dll/ctocpp/navigation_entry_ctocpp.h"
#include "libcef_dll/ctocpp/request_context_ctocpp.h"
#include "libcef_dll/transfer_util.h"

// STATIC METHODS - Body may be edited by hand.

NO_SANITIZE("cfi-icall")
bool CefBrowserHost::CreateBrowser(
    const CefWindowInfo& windowInfo,
    CefRefPtr<CefClient> client,
    const CefString& url,
    const CefBrowserSettings& settings,
    CefRefPtr<CefRequestContext> request_context) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Unverified params: client, url, request_context

  // Execute
  int _retval = cef_browser_host_create_browser(
      &windowInfo, CefClientCppToC::Wrap(client), url.GetStruct(), &settings,
      CefRequestContextCToCpp::Unwrap(request_context));

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall")
CefRefPtr<CefBrowser> CefBrowserHost::CreateBrowserSync(
    const CefWindowInfo& windowInfo,
    CefRefPtr<CefClient> client,
    const CefString& url,
    const CefBrowserSettings& settings,
    CefRefPtr<CefRequestContext> request_context) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Unverified params: client, url, request_context

  // Execute
  cef_browser_t* _retval = cef_browser_host_create_browser_sync(
      &windowInfo, CefClientCppToC::Wrap(client), url.GetStruct(), &settings,
      CefRequestContextCToCpp::Unwrap(request_context));

  // Return type: refptr_same
  return CefBrowserCToCpp::Wrap(_retval);
}

// VIRTUAL METHODS - Body may be edited by hand.

NO_SANITIZE("cfi-icall")
CefRefPtr<CefBrowser> CefBrowserHostCToCpp::GetBrowser() {
  cef_browser_host_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_browser))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_browser_t* _retval = _struct->get_browser(_struct);

  // Return type: refptr_same
  return CefBrowserCToCpp::Wrap(_retval);
}

NO_SANITIZE("cfi-icall")
void CefBrowserHostCToCpp::CloseBrowser(bool force_close) {
  cef_browser_host_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, close_browser))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->close_browser(_struct, force_close);
}

NO_SANITIZE("cfi-icall") bool CefBrowserHostCToCpp::TryCloseBrowser() {
  cef_browser_host_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, try_close_browser))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->try_close_browser(_struct);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall") void CefBrowserHostCToCpp::SetFocus(bool focus) {
  cef_browser_host_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, set_focus))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->set_focus(_struct, focus);
}

NO_SANITIZE("cfi-icall")
CefWindowHandle CefBrowserHostCToCpp::GetWindowHandle() {
  cef_browser_host_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_window_handle))
    return kNullWindowHandle;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_window_handle_t _retval = _struct->get_window_handle(_struct);

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall")
CefWindowHandle CefBrowserHostCToCpp::GetOpenerWindowHandle() {
  cef_browser_host_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_opener_window_handle))
    return kNullWindowHandle;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_window_handle_t _retval = _struct->get_opener_window_handle(_struct);

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall") bool CefBrowserHostCToCpp::HasView() {
  cef_browser_host_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, has_view))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->has_view(_struct);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall")
CefRefPtr<CefClient> CefBrowserHostCToCpp::GetClient() {
  cef_browser_host_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_client))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_client_t* _retval = _struct->get_client(_struct);

  // Return type: refptr_diff
  return CefClientCppToC::Unwrap(_retval);
}

NO_SANITIZE("cfi-icall")
CefRefPtr<CefRequestContext> CefBrowserHostCToCpp::GetRequestContext() {
  cef_browser_host_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_request_context))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_request_context_t* _retval = _struct->get_request_context(_struct);

  // Return type: refptr_same
  return CefRequestContextCToCpp::Wrap(_retval);
}

NO_SANITIZE("cfi-icall") double CefBrowserHostCToCpp::GetZoomLevel() {
  cef_browser_host_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_zoom_level))
    return 0;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  double _retval = _struct->get_zoom_level(_struct);

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall")
void CefBrowserHostCToCpp::SetZoomLevel(double zoomLevel) {
  cef_browser_host_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, set_zoom_level))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->set_zoom_level(_struct, zoomLevel);
}

NO_SANITIZE("cfi-icall")
void CefBrowserHostCToCpp::RunFileDialog(
    FileDialogMode mode,
    const CefString& title,
    const CefString& default_file_path,
    const std::vector<CefString>& accept_filters,
    int selected_accept_filter,
    CefRefPtr<CefRunFileDialogCallback> callback) {
  cef_browser_host_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, run_file_dialog))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: selected_accept_filter; type: simple_byval
  DCHECK_GE(selected_accept_filter, 0);
  if (selected_accept_filter < 0)
    return;
  // Verify param: callback; type: refptr_diff
  DCHECK(callback.get());
  if (!callback.get())
    return;
  // Unverified params: title, default_file_path, accept_filters

  // Translate param: accept_filters; type: string_vec_byref_const
  cef_string_list_t accept_filtersList = cef_string_list_alloc();
  DCHECK(accept_filtersList);
  if (accept_filtersList)
    transfer_string_list_contents(accept_filters, accept_filtersList);

  // Execute
  _struct->run_file_dialog(_struct, mode, title.GetStruct(),
                           default_file_path.GetStruct(), accept_filtersList,
                           selected_accept_filter,
                           CefRunFileDialogCallbackCppToC::Wrap(callback));

  // Restore param:accept_filters; type: string_vec_byref_const
  if (accept_filtersList)
    cef_string_list_free(accept_filtersList);
}

NO_SANITIZE("cfi-icall")
void CefBrowserHostCToCpp::StartDownload(const CefString& url) {
  cef_browser_host_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, start_download))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: url; type: string_byref_const
  DCHECK(!url.empty());
  if (url.empty())
    return;

  // Execute
  _struct->start_download(_struct, url.GetStruct());
}

NO_SANITIZE("cfi-icall")
void CefBrowserHostCToCpp::DownloadImage(
    const CefString& image_url,
    bool is_favicon,
    uint32 max_image_size,
    bool bypass_cache,
    CefRefPtr<CefDownloadImageCallback> callback) {
  cef_browser_host_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, download_image))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: image_url; type: string_byref_const
  DCHECK(!image_url.empty());
  if (image_url.empty())
    return;
  // Verify param: callback; type: refptr_diff
  DCHECK(callback.get());
  if (!callback.get())
    return;

  // Execute
  _struct->download_image(_struct, image_url.GetStruct(), is_favicon,
                          max_image_size, bypass_cache,
                          CefDownloadImageCallbackCppToC::Wrap(callback));
}

NO_SANITIZE("cfi-icall")
void CefBrowserHostCToCpp::Print(CefRefPtr<CefPrintCallback> callback) {
  cef_browser_host_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, print))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Unverified params: callback

  // Execute
  _struct->print(_struct, CefPrintCallbackCppToC::Wrap(callback));
}

NO_SANITIZE("cfi-icall")
void CefBrowserHostCToCpp::PrintWithSettings(
    const CefString& printerName,
    const std::vector<CefRange>& pages,
    CefRefPtr<CefPrintCallback> callback) {
  cef_browser_host_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, print_with_settings))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: printerName; type: string_byref_const
  DCHECK(!printerName.empty());
  if (printerName.empty())
    return;
  // Unverified params: callback

  // Translate param: pages; type: simple_vec_byref_const
  const size_t pagesCount = pages.size();
  cef_range_t* pagesList = NULL;
  if (pagesCount > 0) {
    pagesList = new cef_range_t[pagesCount];
    DCHECK(pagesList);
    if (pagesList) {
      for (size_t i = 0; i < pagesCount; ++i) {
        pagesList[i] = pages[i];
      }
    }
  }

  // Execute
  _struct->print_with_settings(_struct, printerName.GetStruct(), pagesCount,
                               pagesList,
                               CefPrintCallbackCppToC::Wrap(callback));

  // Restore param:pages; type: simple_vec_byref_const
  if (pagesList)
    delete[] pagesList;
}

NO_SANITIZE("cfi-icall")
void CefBrowserHostCToCpp::PrintToPDF(const CefString& path,
                                      const CefPdfPrintSettings& settings,
                                      CefRefPtr<CefPdfPrintCallback> callback) {
  cef_browser_host_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, print_to_pdf))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: path; type: string_byref_const
  DCHECK(!path.empty());
  if (path.empty())
    return;
  // Unverified params: callback

  // Execute
  _struct->print_to_pdf(_struct, path.GetStruct(), &settings,
                        CefPdfPrintCallbackCppToC::Wrap(callback));
}

NO_SANITIZE("cfi-icall")
void CefBrowserHostCToCpp::Find(int identifier,
                                const CefString& searchText,
                                bool forward,
                                bool matchCase,
                                bool findNext) {
  cef_browser_host_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, find))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: searchText; type: string_byref_const
  DCHECK(!searchText.empty());
  if (searchText.empty())
    return;

  // Execute
  _struct->find(_struct, identifier, searchText.GetStruct(), forward, matchCase,
                findNext);
}

NO_SANITIZE("cfi-icall")
void CefBrowserHostCToCpp::StopFinding(bool clearSelection) {
  cef_browser_host_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, stop_finding))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->stop_finding(_struct, clearSelection);
}

NO_SANITIZE("cfi-icall")
void CefBrowserHostCToCpp::ShowDevTools(const CefWindowInfo& windowInfo,
                                        CefRefPtr<CefClient> client,
                                        const CefBrowserSettings& settings,
                                        const CefPoint& inspect_element_at) {
  cef_browser_host_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, show_dev_tools))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Unverified params: windowInfo, client, settings, inspect_element_at

  // Execute
  _struct->show_dev_tools(_struct, &windowInfo, CefClientCppToC::Wrap(client),
                          &settings, &inspect_element_at);
}

NO_SANITIZE("cfi-icall") void CefBrowserHostCToCpp::CloseDevTools() {
  cef_browser_host_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, close_dev_tools))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->close_dev_tools(_struct);
}

NO_SANITIZE("cfi-icall") bool CefBrowserHostCToCpp::HasDevTools() {
  cef_browser_host_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, has_dev_tools))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->has_dev_tools(_struct);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall")
void CefBrowserHostCToCpp::GetNavigationEntries(
    CefRefPtr<CefNavigationEntryVisitor> visitor,
    bool current_only) {
  cef_browser_host_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_navigation_entries))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: visitor; type: refptr_diff
  DCHECK(visitor.get());
  if (!visitor.get())
    return;

  // Execute
  _struct->get_navigation_entries(
      _struct, CefNavigationEntryVisitorCppToC::Wrap(visitor), current_only);
}

NO_SANITIZE("cfi-icall")
void CefBrowserHostCToCpp::SetMouseCursorChangeDisabled(bool disabled) {
  cef_browser_host_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, set_mouse_cursor_change_disabled))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->set_mouse_cursor_change_disabled(_struct, disabled);
}

NO_SANITIZE("cfi-icall")
bool CefBrowserHostCToCpp::IsMouseCursorChangeDisabled() {
  cef_browser_host_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, is_mouse_cursor_change_disabled))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->is_mouse_cursor_change_disabled(_struct);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall")
void CefBrowserHostCToCpp::ReplaceMisspelling(const CefString& word) {
  cef_browser_host_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, replace_misspelling))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: word; type: string_byref_const
  DCHECK(!word.empty());
  if (word.empty())
    return;

  // Execute
  _struct->replace_misspelling(_struct, word.GetStruct());
}

NO_SANITIZE("cfi-icall")
void CefBrowserHostCToCpp::AddWordToDictionary(const CefString& word) {
  cef_browser_host_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, add_word_to_dictionary))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: word; type: string_byref_const
  DCHECK(!word.empty());
  if (word.empty())
    return;

  // Execute
  _struct->add_word_to_dictionary(_struct, word.GetStruct());
}

NO_SANITIZE("cfi-icall") void CefBrowserHostCToCpp::Recheck() {
  cef_browser_host_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, recheck))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->recheck(_struct);
}

NO_SANITIZE("cfi-icall")
bool CefBrowserHostCToCpp::IsWindowRenderingDisabled() {
  cef_browser_host_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, is_window_rendering_disabled))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->is_window_rendering_disabled(_struct);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall") void CefBrowserHostCToCpp::WasResized() {
  cef_browser_host_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, was_resized))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->was_resized(_struct);
}

NO_SANITIZE("cfi-icall") void CefBrowserHostCToCpp::WasHidden(bool hidden) {
  cef_browser_host_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, was_hidden))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->was_hidden(_struct, hidden);
}

NO_SANITIZE("cfi-icall") void CefBrowserHostCToCpp::NotifyScreenInfoChanged() {
  cef_browser_host_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, notify_screen_info_changed))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->notify_screen_info_changed(_struct);
}

NO_SANITIZE("cfi-icall")
void CefBrowserHostCToCpp::Invalidate(PaintElementType type) {
  cef_browser_host_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, invalidate))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->invalidate(_struct, type);
}

NO_SANITIZE("cfi-icall") void CefBrowserHostCToCpp::SendExternalBeginFrame() {
  cef_browser_host_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, send_external_begin_frame))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->send_external_begin_frame(_struct);
}

NO_SANITIZE("cfi-icall")
void CefBrowserHostCToCpp::SendKeyEvent(const CefKeyEvent& event) {
  cef_browser_host_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, send_key_event))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->send_key_event(_struct, &event);
}

NO_SANITIZE("cfi-icall")
void CefBrowserHostCToCpp::SendMouseClickEvent(const CefMouseEvent& event,
                                               MouseButtonType type,
                                               bool mouseUp,
                                               int clickCount) {
  cef_browser_host_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, send_mouse_click_event))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->send_mouse_click_event(_struct, &event, type, mouseUp, clickCount);
}

NO_SANITIZE("cfi-icall")
void CefBrowserHostCToCpp::SendMouseMoveEvent(const CefMouseEvent& event,
                                              bool mouseLeave) {
  cef_browser_host_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, send_mouse_move_event))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->send_mouse_move_event(_struct, &event, mouseLeave);
}

NO_SANITIZE("cfi-icall")
void CefBrowserHostCToCpp::SendMouseWheelEvent(const CefMouseEvent& event,
                                               int deltaX,
                                               int deltaY) {
  cef_browser_host_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, send_mouse_wheel_event))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->send_mouse_wheel_event(_struct, &event, deltaX, deltaY);
}

NO_SANITIZE("cfi-icall")
void CefBrowserHostCToCpp::SendFocusEvent(bool setFocus) {
  cef_browser_host_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, send_focus_event))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->send_focus_event(_struct, setFocus);
}

NO_SANITIZE("cfi-icall") void CefBrowserHostCToCpp::SendCaptureLostEvent() {
  cef_browser_host_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, send_capture_lost_event))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->send_capture_lost_event(_struct);
}

NO_SANITIZE("cfi-icall")
void CefBrowserHostCToCpp::NotifyMoveOrResizeStarted() {
  cef_browser_host_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, notify_move_or_resize_started))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->notify_move_or_resize_started(_struct);
}

NO_SANITIZE("cfi-icall") int CefBrowserHostCToCpp::GetWindowlessFrameRate() {
  cef_browser_host_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_windowless_frame_rate))
    return 0;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->get_windowless_frame_rate(_struct);

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall")
void CefBrowserHostCToCpp::SetWindowlessFrameRate(int frame_rate) {
  cef_browser_host_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, set_windowless_frame_rate))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->set_windowless_frame_rate(_struct, frame_rate);
}

NO_SANITIZE("cfi-icall")
void CefBrowserHostCToCpp::ImeSetComposition(
    const CefString& text,
    const std::vector<CefCompositionUnderline>& underlines,
    const CefRange& replacement_range,
    const CefRange& selection_range) {
  cef_browser_host_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, ime_set_composition))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Unverified params: text, underlines

  // Translate param: underlines; type: simple_vec_byref_const
  const size_t underlinesCount = underlines.size();
  cef_composition_underline_t* underlinesList = NULL;
  if (underlinesCount > 0) {
    underlinesList = new cef_composition_underline_t[underlinesCount];
    DCHECK(underlinesList);
    if (underlinesList) {
      for (size_t i = 0; i < underlinesCount; ++i) {
        underlinesList[i] = underlines[i];
      }
    }
  }

  // Execute
  _struct->ime_set_composition(_struct, text.GetStruct(), underlinesCount,
                               underlinesList, &replacement_range,
                               &selection_range);

  // Restore param:underlines; type: simple_vec_byref_const
  if (underlinesList)
    delete[] underlinesList;
}

NO_SANITIZE("cfi-icall")
void CefBrowserHostCToCpp::ImeCommitText(const CefString& text,
                                         const CefRange& replacement_range,
                                         int relative_cursor_pos) {
  cef_browser_host_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, ime_commit_text))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Unverified params: text

  // Execute
  _struct->ime_commit_text(_struct, text.GetStruct(), &replacement_range,
                           relative_cursor_pos);
}

NO_SANITIZE("cfi-icall")
void CefBrowserHostCToCpp::ImeFinishComposingText(bool keep_selection) {
  cef_browser_host_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, ime_finish_composing_text))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->ime_finish_composing_text(_struct, keep_selection);
}

NO_SANITIZE("cfi-icall") void CefBrowserHostCToCpp::ImeCancelComposition() {
  cef_browser_host_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, ime_cancel_composition))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->ime_cancel_composition(_struct);
}

NO_SANITIZE("cfi-icall")
void CefBrowserHostCToCpp::DragTargetDragEnter(CefRefPtr<CefDragData> drag_data,
                                               const CefMouseEvent& event,
                                               DragOperationsMask allowed_ops) {
  cef_browser_host_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, drag_target_drag_enter))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: drag_data; type: refptr_same
  DCHECK(drag_data.get());
  if (!drag_data.get())
    return;

  // Execute
  _struct->drag_target_drag_enter(_struct, CefDragDataCToCpp::Unwrap(drag_data),
                                  &event, allowed_ops);
}

NO_SANITIZE("cfi-icall")
void CefBrowserHostCToCpp::DragTargetDragOver(const CefMouseEvent& event,
                                              DragOperationsMask allowed_ops) {
  cef_browser_host_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, drag_target_drag_over))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->drag_target_drag_over(_struct, &event, allowed_ops);
}

NO_SANITIZE("cfi-icall") void CefBrowserHostCToCpp::DragTargetDragLeave() {
  cef_browser_host_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, drag_target_drag_leave))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->drag_target_drag_leave(_struct);
}

NO_SANITIZE("cfi-icall")
void CefBrowserHostCToCpp::DragTargetDrop(const CefMouseEvent& event) {
  cef_browser_host_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, drag_target_drop))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->drag_target_drop(_struct, &event);
}

NO_SANITIZE("cfi-icall")
void CefBrowserHostCToCpp::DragSourceEndedAt(int x,
                                             int y,
                                             DragOperationsMask op) {
  cef_browser_host_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, drag_source_ended_at))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->drag_source_ended_at(_struct, x, y, op);
}

NO_SANITIZE("cfi-icall")
void CefBrowserHostCToCpp::DragSourceSystemDragEnded() {
  cef_browser_host_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, drag_source_system_drag_ended))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->drag_source_system_drag_ended(_struct);
}

NO_SANITIZE("cfi-icall")
void CefBrowserHostCToCpp::AddVisitedURL(const CefString& url) {
  cef_browser_host_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, add_visited_url))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: url; type: string_byref_const
  DCHECK(!url.empty());
  if (url.empty())
    return;

  // Execute
  _struct->add_visited_url(_struct, url.GetStruct());
}

NO_SANITIZE("cfi-icall")
CefRefPtr<
    CefNavigationEntry> CefBrowserHostCToCpp::GetVisibleNavigationEntry() {
  cef_browser_host_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_visible_navigation_entry))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_navigation_entry_t* _retval =
      _struct->get_visible_navigation_entry(_struct);

  // Return type: refptr_same
  return CefNavigationEntryCToCpp::Wrap(_retval);
}

NO_SANITIZE("cfi-icall")
void CefBrowserHostCToCpp::SetAccessibilityState(
    cef_state_t accessibility_state) {
  cef_browser_host_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, set_accessibility_state))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->set_accessibility_state(_struct, accessibility_state);
}

NO_SANITIZE("cfi-icall")
void CefBrowserHostCToCpp::SetAutoResizeEnabled(bool enabled,
                                                const CefSize& min_size,
                                                const CefSize& max_size) {
  cef_browser_host_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, set_auto_resize_enabled))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->set_auto_resize_enabled(_struct, enabled, &min_size, &max_size);
}

NO_SANITIZE("cfi-icall")
CefRefPtr<CefExtension> CefBrowserHostCToCpp::GetExtension() {
  cef_browser_host_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_extension))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_extension_t* _retval = _struct->get_extension(_struct);

  // Return type: refptr_same
  return CefExtensionCToCpp::Wrap(_retval);
}

NO_SANITIZE("cfi-icall") bool CefBrowserHostCToCpp::IsBackgroundHost() {
  cef_browser_host_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, is_background_host))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->is_background_host(_struct);

  // Return type: bool
  return _retval ? true : false;
}

// CONSTRUCTOR - Do not edit by hand.

CefBrowserHostCToCpp::CefBrowserHostCToCpp() {}

template <>
cef_browser_host_t*
CefCToCppRefCounted<CefBrowserHostCToCpp, CefBrowserHost, cef_browser_host_t>::
    UnwrapDerived(CefWrapperType type, CefBrowserHost* c) {
  NOTREACHED() << "Unexpected class type: " << type;
  return NULL;
}

#if DCHECK_IS_ON()
template <>
base::AtomicRefCount CefCToCppRefCounted<CefBrowserHostCToCpp,
                                         CefBrowserHost,
                                         cef_browser_host_t>::DebugObjCt
    ATOMIC_DECLARATION;
#endif

template <>
CefWrapperType CefCToCppRefCounted<CefBrowserHostCToCpp,
                                   CefBrowserHost,
                                   cef_browser_host_t>::kWrapperType =
    WT_BROWSER_HOST;
