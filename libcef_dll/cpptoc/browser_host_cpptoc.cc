// Copyright (c) 2019 The Chromium Embedded Framework Authors. All rights
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
// $hash=e5f7897a84b36acaae268e67323e36d055c9cf62$
//

#include "libcef_dll/cpptoc/browser_host_cpptoc.h"
#include "libcef_dll/cpptoc/browser_cpptoc.h"
#include "libcef_dll/cpptoc/drag_data_cpptoc.h"
#include "libcef_dll/cpptoc/extension_cpptoc.h"
#include "libcef_dll/cpptoc/navigation_entry_cpptoc.h"
#include "libcef_dll/cpptoc/request_context_cpptoc.h"
#include "libcef_dll/ctocpp/client_ctocpp.h"
#include "libcef_dll/ctocpp/download_image_callback_ctocpp.h"
#include "libcef_dll/ctocpp/navigation_entry_visitor_ctocpp.h"
#include "libcef_dll/ctocpp/pdf_print_callback_ctocpp.h"
#include "libcef_dll/ctocpp/print_callback_ctocpp.h"
#include "libcef_dll/ctocpp/run_file_dialog_callback_ctocpp.h"
#include "libcef_dll/transfer_util.h"

// GLOBAL FUNCTIONS - Body may be edited by hand.

CEF_EXPORT int cef_browser_host_create_browser(
    const cef_window_info_t* windowInfo,
    struct _cef_client_t* client,
    const cef_string_t* url,
    const struct _cef_browser_settings_t* settings,
    struct _cef_request_context_t* request_context) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: windowInfo; type: struct_byref_const
  DCHECK(windowInfo);
  if (!windowInfo)
    return 0;
  // Verify param: settings; type: struct_byref_const
  DCHECK(settings);
  if (!settings)
    return 0;
  // Unverified params: client, url, request_context

  // Translate param: windowInfo; type: struct_byref_const
  CefWindowInfo windowInfoObj;
  if (windowInfo)
    windowInfoObj.Set(*windowInfo, false);
  // Translate param: settings; type: struct_byref_const
  CefBrowserSettings settingsObj;
  if (settings)
    settingsObj.Set(*settings, false);

  // Execute
  bool _retval = CefBrowserHost::CreateBrowser(
      windowInfoObj, CefClientCToCpp::Wrap(client), CefString(url), settingsObj,
      CefRequestContextCppToC::Unwrap(request_context));

  // Return type: bool
  return _retval;
}

CEF_EXPORT cef_browser_t* cef_browser_host_create_browser_sync(
    const cef_window_info_t* windowInfo,
    struct _cef_client_t* client,
    const cef_string_t* url,
    const struct _cef_browser_settings_t* settings,
    struct _cef_request_context_t* request_context) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: windowInfo; type: struct_byref_const
  DCHECK(windowInfo);
  if (!windowInfo)
    return NULL;
  // Verify param: settings; type: struct_byref_const
  DCHECK(settings);
  if (!settings)
    return NULL;
  // Unverified params: client, url, request_context

  // Translate param: windowInfo; type: struct_byref_const
  CefWindowInfo windowInfoObj;
  if (windowInfo)
    windowInfoObj.Set(*windowInfo, false);
  // Translate param: settings; type: struct_byref_const
  CefBrowserSettings settingsObj;
  if (settings)
    settingsObj.Set(*settings, false);

  // Execute
  CefRefPtr<CefBrowser> _retval = CefBrowserHost::CreateBrowserSync(
      windowInfoObj, CefClientCToCpp::Wrap(client), CefString(url), settingsObj,
      CefRequestContextCppToC::Unwrap(request_context));

  // Return type: refptr_same
  return CefBrowserCppToC::Wrap(_retval);
}

namespace {

// MEMBER FUNCTIONS - Body may be edited by hand.

cef_browser_t* CEF_CALLBACK
browser_host_get_browser(struct _cef_browser_host_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefRefPtr<CefBrowser> _retval = CefBrowserHostCppToC::Get(self)->GetBrowser();

  // Return type: refptr_same
  return CefBrowserCppToC::Wrap(_retval);
}

void CEF_CALLBACK browser_host_close_browser(struct _cef_browser_host_t* self,
                                             int force_close) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;

  // Execute
  CefBrowserHostCppToC::Get(self)->CloseBrowser(force_close ? true : false);
}

int CEF_CALLBACK
browser_host_try_close_browser(struct _cef_browser_host_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  bool _retval = CefBrowserHostCppToC::Get(self)->TryCloseBrowser();

  // Return type: bool
  return _retval;
}

void CEF_CALLBACK browser_host_set_focus(struct _cef_browser_host_t* self,
                                         int focus) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;

  // Execute
  CefBrowserHostCppToC::Get(self)->SetFocus(focus ? true : false);
}

cef_window_handle_t CEF_CALLBACK
browser_host_get_window_handle(struct _cef_browser_host_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return kNullWindowHandle;

  // Execute
  cef_window_handle_t _retval =
      CefBrowserHostCppToC::Get(self)->GetWindowHandle();

  // Return type: simple
  return _retval;
}

cef_window_handle_t CEF_CALLBACK
browser_host_get_opener_window_handle(struct _cef_browser_host_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return kNullWindowHandle;

  // Execute
  cef_window_handle_t _retval =
      CefBrowserHostCppToC::Get(self)->GetOpenerWindowHandle();

  // Return type: simple
  return _retval;
}

int CEF_CALLBACK browser_host_has_view(struct _cef_browser_host_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  bool _retval = CefBrowserHostCppToC::Get(self)->HasView();

  // Return type: bool
  return _retval;
}

struct _cef_client_t* CEF_CALLBACK
browser_host_get_client(struct _cef_browser_host_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefRefPtr<CefClient> _retval = CefBrowserHostCppToC::Get(self)->GetClient();

  // Return type: refptr_diff
  return CefClientCToCpp::Unwrap(_retval);
}

struct _cef_request_context_t* CEF_CALLBACK
browser_host_get_request_context(struct _cef_browser_host_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefRefPtr<CefRequestContext> _retval =
      CefBrowserHostCppToC::Get(self)->GetRequestContext();

  // Return type: refptr_same
  return CefRequestContextCppToC::Wrap(_retval);
}

double CEF_CALLBACK
browser_host_get_zoom_level(struct _cef_browser_host_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  double _retval = CefBrowserHostCppToC::Get(self)->GetZoomLevel();

  // Return type: simple
  return _retval;
}

void CEF_CALLBACK browser_host_set_zoom_level(struct _cef_browser_host_t* self,
                                              double zoomLevel) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;

  // Execute
  CefBrowserHostCppToC::Get(self)->SetZoomLevel(zoomLevel);
}

void CEF_CALLBACK
browser_host_run_file_dialog(struct _cef_browser_host_t* self,
                             cef_file_dialog_mode_t mode,
                             const cef_string_t* title,
                             const cef_string_t* default_file_path,
                             cef_string_list_t accept_filters,
                             int selected_accept_filter,
                             cef_run_file_dialog_callback_t* callback) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: selected_accept_filter; type: simple_byval
  DCHECK_GE(selected_accept_filter, 0);
  if (selected_accept_filter < 0)
    return;
  // Verify param: callback; type: refptr_diff
  DCHECK(callback);
  if (!callback)
    return;
  // Unverified params: title, default_file_path, accept_filters

  // Translate param: accept_filters; type: string_vec_byref_const
  std::vector<CefString> accept_filtersList;
  transfer_string_list_contents(accept_filters, accept_filtersList);

  // Execute
  CefBrowserHostCppToC::Get(self)->RunFileDialog(
      mode, CefString(title), CefString(default_file_path), accept_filtersList,
      selected_accept_filter, CefRunFileDialogCallbackCToCpp::Wrap(callback));
}

void CEF_CALLBACK browser_host_start_download(struct _cef_browser_host_t* self,
                                              const cef_string_t* url) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: url; type: string_byref_const
  DCHECK(url);
  if (!url)
    return;

  // Execute
  CefBrowserHostCppToC::Get(self)->StartDownload(CefString(url));
}

void CEF_CALLBACK
browser_host_download_image(struct _cef_browser_host_t* self,
                            const cef_string_t* image_url,
                            int is_favicon,
                            uint32 max_image_size,
                            int bypass_cache,
                            cef_download_image_callback_t* callback) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: image_url; type: string_byref_const
  DCHECK(image_url);
  if (!image_url)
    return;
  // Verify param: callback; type: refptr_diff
  DCHECK(callback);
  if (!callback)
    return;

  // Execute
  CefBrowserHostCppToC::Get(self)->DownloadImage(
      CefString(image_url), is_favicon ? true : false, max_image_size,
      bypass_cache ? true : false,
      CefDownloadImageCallbackCToCpp::Wrap(callback));
}

void CEF_CALLBACK browser_host_print(struct _cef_browser_host_t* self,
                                     cef_print_callback_t* callback) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;

  // Unverified params: callback

  // Execute
  CefBrowserHostCppToC::Get(self)->Print(
      CefPrintCallbackCToCpp::Wrap(callback));
}

void CEF_CALLBACK
browser_host_print_with_settings(struct _cef_browser_host_t* self,
                                 const cef_string_t* printerName,
                                 size_t pagesCount,
                                 cef_range_t const* pages,
                                 cef_print_callback_t* callback) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: printerName; type: string_byref_const
  DCHECK(printerName);
  if (!printerName)
    return;
  // Verify param: pages; type: simple_vec_byref_const
  DCHECK(pagesCount == 0 || pages);
  if (pagesCount > 0 && !pages)
    return;

  // Unverified params: callback

  // Translate param: pages; type: simple_vec_byref_const
  std::vector<CefRange> pagesList;
  if (pagesCount > 0) {
    for (size_t i = 0; i < pagesCount; ++i) {
      CefRange pagesVal = pages[i];
      pagesList.push_back(pagesVal);
    }
  }

  // Execute
  CefBrowserHostCppToC::Get(self)->PrintWithSettings(
      CefString(printerName), pagesList,
      CefPrintCallbackCToCpp::Wrap(callback));
}

void CEF_CALLBACK
browser_host_print_to_pdf(struct _cef_browser_host_t* self,
                          const cef_string_t* path,
                          const struct _cef_pdf_print_settings_t* settings,
                          cef_pdf_print_callback_t* callback) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: path; type: string_byref_const
  DCHECK(path);
  if (!path)
    return;
  // Verify param: settings; type: struct_byref_const
  DCHECK(settings);
  if (!settings)
    return;
  // Unverified params: callback

  // Translate param: settings; type: struct_byref_const
  CefPdfPrintSettings settingsObj;
  if (settings)
    settingsObj.Set(*settings, false);

  // Execute
  CefBrowserHostCppToC::Get(self)->PrintToPDF(
      CefString(path), settingsObj, CefPdfPrintCallbackCToCpp::Wrap(callback));
}

void CEF_CALLBACK browser_host_find(struct _cef_browser_host_t* self,
                                    int identifier,
                                    const cef_string_t* searchText,
                                    int forward,
                                    int matchCase,
                                    int findNext) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: searchText; type: string_byref_const
  DCHECK(searchText);
  if (!searchText)
    return;

  // Execute
  CefBrowserHostCppToC::Get(self)->Find(
      identifier, CefString(searchText), forward ? true : false,
      matchCase ? true : false, findNext ? true : false);
}

void CEF_CALLBACK browser_host_stop_finding(struct _cef_browser_host_t* self,
                                            int clearSelection) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;

  // Execute
  CefBrowserHostCppToC::Get(self)->StopFinding(clearSelection ? true : false);
}

void CEF_CALLBACK
browser_host_show_dev_tools(struct _cef_browser_host_t* self,
                            const cef_window_info_t* windowInfo,
                            struct _cef_client_t* client,
                            const struct _cef_browser_settings_t* settings,
                            const cef_point_t* inspect_element_at) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Unverified params: windowInfo, client, settings, inspect_element_at

  // Translate param: windowInfo; type: struct_byref_const
  CefWindowInfo windowInfoObj;
  if (windowInfo)
    windowInfoObj.Set(*windowInfo, false);
  // Translate param: settings; type: struct_byref_const
  CefBrowserSettings settingsObj;
  if (settings)
    settingsObj.Set(*settings, false);
  // Translate param: inspect_element_at; type: simple_byref_const
  CefPoint inspect_element_atVal =
      inspect_element_at ? *inspect_element_at : CefPoint();

  // Execute
  CefBrowserHostCppToC::Get(self)->ShowDevTools(
      windowInfoObj, CefClientCToCpp::Wrap(client), settingsObj,
      inspect_element_atVal);
}

void CEF_CALLBACK
browser_host_close_dev_tools(struct _cef_browser_host_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;

  // Execute
  CefBrowserHostCppToC::Get(self)->CloseDevTools();
}

int CEF_CALLBACK browser_host_has_dev_tools(struct _cef_browser_host_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  bool _retval = CefBrowserHostCppToC::Get(self)->HasDevTools();

  // Return type: bool
  return _retval;
}

void CEF_CALLBACK
browser_host_get_navigation_entries(struct _cef_browser_host_t* self,
                                    cef_navigation_entry_visitor_t* visitor,
                                    int current_only) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: visitor; type: refptr_diff
  DCHECK(visitor);
  if (!visitor)
    return;

  // Execute
  CefBrowserHostCppToC::Get(self)->GetNavigationEntries(
      CefNavigationEntryVisitorCToCpp::Wrap(visitor),
      current_only ? true : false);
}

void CEF_CALLBACK
browser_host_set_mouse_cursor_change_disabled(struct _cef_browser_host_t* self,
                                              int disabled) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;

  // Execute
  CefBrowserHostCppToC::Get(self)->SetMouseCursorChangeDisabled(
      disabled ? true : false);
}

int CEF_CALLBACK
browser_host_is_mouse_cursor_change_disabled(struct _cef_browser_host_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  bool _retval = CefBrowserHostCppToC::Get(self)->IsMouseCursorChangeDisabled();

  // Return type: bool
  return _retval;
}

void CEF_CALLBACK
browser_host_replace_misspelling(struct _cef_browser_host_t* self,
                                 const cef_string_t* word) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: word; type: string_byref_const
  DCHECK(word);
  if (!word)
    return;

  // Execute
  CefBrowserHostCppToC::Get(self)->ReplaceMisspelling(CefString(word));
}

void CEF_CALLBACK
browser_host_add_word_to_dictionary(struct _cef_browser_host_t* self,
                                    const cef_string_t* word) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: word; type: string_byref_const
  DCHECK(word);
  if (!word)
    return;

  // Execute
  CefBrowserHostCppToC::Get(self)->AddWordToDictionary(CefString(word));
}

void CEF_CALLBACK browser_host_recheck(struct _cef_browser_host_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;

  // Execute
  CefBrowserHostCppToC::Get(self)->Recheck();
}

int CEF_CALLBACK
browser_host_is_window_rendering_disabled(struct _cef_browser_host_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  bool _retval = CefBrowserHostCppToC::Get(self)->IsWindowRenderingDisabled();

  // Return type: bool
  return _retval;
}

void CEF_CALLBACK browser_host_was_resized(struct _cef_browser_host_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;

  // Execute
  CefBrowserHostCppToC::Get(self)->WasResized();
}

void CEF_CALLBACK browser_host_was_hidden(struct _cef_browser_host_t* self,
                                          int hidden) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;

  // Execute
  CefBrowserHostCppToC::Get(self)->WasHidden(hidden ? true : false);
}

void CEF_CALLBACK
browser_host_notify_screen_info_changed(struct _cef_browser_host_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;

  // Execute
  CefBrowserHostCppToC::Get(self)->NotifyScreenInfoChanged();
}

void CEF_CALLBACK browser_host_invalidate(struct _cef_browser_host_t* self,
                                          cef_paint_element_type_t type) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;

  // Execute
  CefBrowserHostCppToC::Get(self)->Invalidate(type);
}

void CEF_CALLBACK
browser_host_send_external_begin_frame(struct _cef_browser_host_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;

  // Execute
  CefBrowserHostCppToC::Get(self)->SendExternalBeginFrame();
}

void CEF_CALLBACK
browser_host_send_key_event(struct _cef_browser_host_t* self,
                            const struct _cef_key_event_t* event) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: event; type: struct_byref_const
  DCHECK(event);
  if (!event)
    return;

  // Translate param: event; type: struct_byref_const
  CefKeyEvent eventObj;
  if (event)
    eventObj.Set(*event, false);

  // Execute
  CefBrowserHostCppToC::Get(self)->SendKeyEvent(eventObj);
}

void CEF_CALLBACK
browser_host_send_mouse_click_event(struct _cef_browser_host_t* self,
                                    const struct _cef_mouse_event_t* event,
                                    cef_mouse_button_type_t type,
                                    int mouseUp,
                                    int clickCount) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: event; type: struct_byref_const
  DCHECK(event);
  if (!event)
    return;

  // Translate param: event; type: struct_byref_const
  CefMouseEvent eventObj;
  if (event)
    eventObj.Set(*event, false);

  // Execute
  CefBrowserHostCppToC::Get(self)->SendMouseClickEvent(
      eventObj, type, mouseUp ? true : false, clickCount);
}

void CEF_CALLBACK
browser_host_send_mouse_move_event(struct _cef_browser_host_t* self,
                                   const struct _cef_mouse_event_t* event,
                                   int mouseLeave) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: event; type: struct_byref_const
  DCHECK(event);
  if (!event)
    return;

  // Translate param: event; type: struct_byref_const
  CefMouseEvent eventObj;
  if (event)
    eventObj.Set(*event, false);

  // Execute
  CefBrowserHostCppToC::Get(self)->SendMouseMoveEvent(
      eventObj, mouseLeave ? true : false);
}

void CEF_CALLBACK
browser_host_send_mouse_wheel_event(struct _cef_browser_host_t* self,
                                    const struct _cef_mouse_event_t* event,
                                    int deltaX,
                                    int deltaY) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: event; type: struct_byref_const
  DCHECK(event);
  if (!event)
    return;

  // Translate param: event; type: struct_byref_const
  CefMouseEvent eventObj;
  if (event)
    eventObj.Set(*event, false);

  // Execute
  CefBrowserHostCppToC::Get(self)->SendMouseWheelEvent(eventObj, deltaX,
                                                       deltaY);
}

void CEF_CALLBACK
browser_host_send_touch_event(struct _cef_browser_host_t* self,
                              const struct _cef_touch_event_t* event) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: event; type: struct_byref_const
  DCHECK(event);
  if (!event)
    return;

  // Translate param: event; type: struct_byref_const
  CefTouchEvent eventObj;
  if (event)
    eventObj.Set(*event, false);

  // Execute
  CefBrowserHostCppToC::Get(self)->SendTouchEvent(eventObj);
}

void CEF_CALLBACK
browser_host_send_focus_event(struct _cef_browser_host_t* self, int setFocus) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;

  // Execute
  CefBrowserHostCppToC::Get(self)->SendFocusEvent(setFocus ? true : false);
}

void CEF_CALLBACK
browser_host_send_capture_lost_event(struct _cef_browser_host_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;

  // Execute
  CefBrowserHostCppToC::Get(self)->SendCaptureLostEvent();
}

void CEF_CALLBACK
browser_host_notify_move_or_resize_started(struct _cef_browser_host_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;

  // Execute
  CefBrowserHostCppToC::Get(self)->NotifyMoveOrResizeStarted();
}

int CEF_CALLBACK
browser_host_get_windowless_frame_rate(struct _cef_browser_host_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  int _retval = CefBrowserHostCppToC::Get(self)->GetWindowlessFrameRate();

  // Return type: simple
  return _retval;
}

void CEF_CALLBACK
browser_host_set_windowless_frame_rate(struct _cef_browser_host_t* self,
                                       int frame_rate) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;

  // Execute
  CefBrowserHostCppToC::Get(self)->SetWindowlessFrameRate(frame_rate);
}

void CEF_CALLBACK
browser_host_ime_set_composition(struct _cef_browser_host_t* self,
                                 const cef_string_t* text,
                                 size_t underlinesCount,
                                 cef_composition_underline_t const* underlines,
                                 const cef_range_t* replacement_range,
                                 const cef_range_t* selection_range) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: replacement_range; type: simple_byref_const
  DCHECK(replacement_range);
  if (!replacement_range)
    return;
  // Verify param: selection_range; type: simple_byref_const
  DCHECK(selection_range);
  if (!selection_range)
    return;
  // Unverified params: text, underlines

  // Translate param: underlines; type: simple_vec_byref_const
  std::vector<CefCompositionUnderline> underlinesList;
  if (underlinesCount > 0) {
    for (size_t i = 0; i < underlinesCount; ++i) {
      CefCompositionUnderline underlinesVal = underlines[i];
      underlinesList.push_back(underlinesVal);
    }
  }
  // Translate param: replacement_range; type: simple_byref_const
  CefRange replacement_rangeVal =
      replacement_range ? *replacement_range : CefRange();
  // Translate param: selection_range; type: simple_byref_const
  CefRange selection_rangeVal = selection_range ? *selection_range : CefRange();

  // Execute
  CefBrowserHostCppToC::Get(self)->ImeSetComposition(
      CefString(text), underlinesList, replacement_rangeVal,
      selection_rangeVal);
}

void CEF_CALLBACK
browser_host_ime_commit_text(struct _cef_browser_host_t* self,
                             const cef_string_t* text,
                             const cef_range_t* replacement_range,
                             int relative_cursor_pos) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: replacement_range; type: simple_byref_const
  DCHECK(replacement_range);
  if (!replacement_range)
    return;
  // Unverified params: text

  // Translate param: replacement_range; type: simple_byref_const
  CefRange replacement_rangeVal =
      replacement_range ? *replacement_range : CefRange();

  // Execute
  CefBrowserHostCppToC::Get(self)->ImeCommitText(
      CefString(text), replacement_rangeVal, relative_cursor_pos);
}

void CEF_CALLBACK
browser_host_ime_finish_composing_text(struct _cef_browser_host_t* self,
                                       int keep_selection) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;

  // Execute
  CefBrowserHostCppToC::Get(self)->ImeFinishComposingText(
      keep_selection ? true : false);
}

void CEF_CALLBACK
browser_host_ime_cancel_composition(struct _cef_browser_host_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;

  // Execute
  CefBrowserHostCppToC::Get(self)->ImeCancelComposition();
}

void CEF_CALLBACK
browser_host_drag_target_drag_enter(struct _cef_browser_host_t* self,
                                    struct _cef_drag_data_t* drag_data,
                                    const struct _cef_mouse_event_t* event,
                                    cef_drag_operations_mask_t allowed_ops) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: drag_data; type: refptr_same
  DCHECK(drag_data);
  if (!drag_data)
    return;
  // Verify param: event; type: struct_byref_const
  DCHECK(event);
  if (!event)
    return;

  // Translate param: event; type: struct_byref_const
  CefMouseEvent eventObj;
  if (event)
    eventObj.Set(*event, false);

  // Execute
  CefBrowserHostCppToC::Get(self)->DragTargetDragEnter(
      CefDragDataCppToC::Unwrap(drag_data), eventObj, allowed_ops);
}

void CEF_CALLBACK
browser_host_drag_target_drag_over(struct _cef_browser_host_t* self,
                                   const struct _cef_mouse_event_t* event,
                                   cef_drag_operations_mask_t allowed_ops) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: event; type: struct_byref_const
  DCHECK(event);
  if (!event)
    return;

  // Translate param: event; type: struct_byref_const
  CefMouseEvent eventObj;
  if (event)
    eventObj.Set(*event, false);

  // Execute
  CefBrowserHostCppToC::Get(self)->DragTargetDragOver(eventObj, allowed_ops);
}

void CEF_CALLBACK
browser_host_drag_target_drag_leave(struct _cef_browser_host_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;

  // Execute
  CefBrowserHostCppToC::Get(self)->DragTargetDragLeave();
}

void CEF_CALLBACK
browser_host_drag_target_drop(struct _cef_browser_host_t* self,
                              const struct _cef_mouse_event_t* event) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: event; type: struct_byref_const
  DCHECK(event);
  if (!event)
    return;

  // Translate param: event; type: struct_byref_const
  CefMouseEvent eventObj;
  if (event)
    eventObj.Set(*event, false);

  // Execute
  CefBrowserHostCppToC::Get(self)->DragTargetDrop(eventObj);
}

void CEF_CALLBACK
browser_host_drag_source_ended_at(struct _cef_browser_host_t* self,
                                  int x,
                                  int y,
                                  cef_drag_operations_mask_t op) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;

  // Execute
  CefBrowserHostCppToC::Get(self)->DragSourceEndedAt(x, y, op);
}

void CEF_CALLBACK
browser_host_drag_source_system_drag_ended(struct _cef_browser_host_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;

  // Execute
  CefBrowserHostCppToC::Get(self)->DragSourceSystemDragEnded();
}

void CEF_CALLBACK browser_host_add_visited_url(struct _cef_browser_host_t* self,
                                               const cef_string_t* url) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: url; type: string_byref_const
  DCHECK(url);
  if (!url)
    return;

  // Execute
  CefBrowserHostCppToC::Get(self)->AddVisitedURL(CefString(url));
}

struct _cef_navigation_entry_t* CEF_CALLBACK
browser_host_get_visible_navigation_entry(struct _cef_browser_host_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefRefPtr<CefNavigationEntry> _retval =
      CefBrowserHostCppToC::Get(self)->GetVisibleNavigationEntry();

  // Return type: refptr_same
  return CefNavigationEntryCppToC::Wrap(_retval);
}

void CEF_CALLBACK
browser_host_set_accessibility_state(struct _cef_browser_host_t* self,
                                     cef_state_t accessibility_state) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;

  // Execute
  CefBrowserHostCppToC::Get(self)->SetAccessibilityState(accessibility_state);
}

void CEF_CALLBACK
browser_host_set_auto_resize_enabled(struct _cef_browser_host_t* self,
                                     int enabled,
                                     const cef_size_t* min_size,
                                     const cef_size_t* max_size) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: min_size; type: simple_byref_const
  DCHECK(min_size);
  if (!min_size)
    return;
  // Verify param: max_size; type: simple_byref_const
  DCHECK(max_size);
  if (!max_size)
    return;

  // Translate param: min_size; type: simple_byref_const
  CefSize min_sizeVal = min_size ? *min_size : CefSize();
  // Translate param: max_size; type: simple_byref_const
  CefSize max_sizeVal = max_size ? *max_size : CefSize();

  // Execute
  CefBrowserHostCppToC::Get(self)->SetAutoResizeEnabled(
      enabled ? true : false, min_sizeVal, max_sizeVal);
}

struct _cef_extension_t* CEF_CALLBACK
browser_host_get_extension(struct _cef_browser_host_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefRefPtr<CefExtension> _retval =
      CefBrowserHostCppToC::Get(self)->GetExtension();

  // Return type: refptr_same
  return CefExtensionCppToC::Wrap(_retval);
}

int CEF_CALLBACK
browser_host_is_background_host(struct _cef_browser_host_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  bool _retval = CefBrowserHostCppToC::Get(self)->IsBackgroundHost();

  // Return type: bool
  return _retval;
}

void CEF_CALLBACK browser_host_set_audio_muted(struct _cef_browser_host_t* self,
                                               int mute) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;

  // Execute
  CefBrowserHostCppToC::Get(self)->SetAudioMuted(mute ? true : false);
}

int CEF_CALLBACK browser_host_is_audio_muted(struct _cef_browser_host_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  bool _retval = CefBrowserHostCppToC::Get(self)->IsAudioMuted();

  // Return type: bool
  return _retval;
}

}  // namespace

// CONSTRUCTOR - Do not edit by hand.

CefBrowserHostCppToC::CefBrowserHostCppToC() {
  GetStruct()->get_browser = browser_host_get_browser;
  GetStruct()->close_browser = browser_host_close_browser;
  GetStruct()->try_close_browser = browser_host_try_close_browser;
  GetStruct()->set_focus = browser_host_set_focus;
  GetStruct()->get_window_handle = browser_host_get_window_handle;
  GetStruct()->get_opener_window_handle = browser_host_get_opener_window_handle;
  GetStruct()->has_view = browser_host_has_view;
  GetStruct()->get_client = browser_host_get_client;
  GetStruct()->get_request_context = browser_host_get_request_context;
  GetStruct()->get_zoom_level = browser_host_get_zoom_level;
  GetStruct()->set_zoom_level = browser_host_set_zoom_level;
  GetStruct()->run_file_dialog = browser_host_run_file_dialog;
  GetStruct()->start_download = browser_host_start_download;
  GetStruct()->download_image = browser_host_download_image;
  GetStruct()->print = browser_host_print;
  GetStruct()->print_with_settings = browser_host_print_with_settings;
  GetStruct()->print_to_pdf = browser_host_print_to_pdf;
  GetStruct()->find = browser_host_find;
  GetStruct()->stop_finding = browser_host_stop_finding;
  GetStruct()->show_dev_tools = browser_host_show_dev_tools;
  GetStruct()->close_dev_tools = browser_host_close_dev_tools;
  GetStruct()->has_dev_tools = browser_host_has_dev_tools;
  GetStruct()->get_navigation_entries = browser_host_get_navigation_entries;
  GetStruct()->set_mouse_cursor_change_disabled =
      browser_host_set_mouse_cursor_change_disabled;
  GetStruct()->is_mouse_cursor_change_disabled =
      browser_host_is_mouse_cursor_change_disabled;
  GetStruct()->replace_misspelling = browser_host_replace_misspelling;
  GetStruct()->add_word_to_dictionary = browser_host_add_word_to_dictionary;
  GetStruct()->recheck = browser_host_recheck;
  GetStruct()->is_window_rendering_disabled =
      browser_host_is_window_rendering_disabled;
  GetStruct()->was_resized = browser_host_was_resized;
  GetStruct()->was_hidden = browser_host_was_hidden;
  GetStruct()->notify_screen_info_changed =
      browser_host_notify_screen_info_changed;
  GetStruct()->invalidate = browser_host_invalidate;
  GetStruct()->send_external_begin_frame =
      browser_host_send_external_begin_frame;
  GetStruct()->send_key_event = browser_host_send_key_event;
  GetStruct()->send_mouse_click_event = browser_host_send_mouse_click_event;
  GetStruct()->send_mouse_move_event = browser_host_send_mouse_move_event;
  GetStruct()->send_mouse_wheel_event = browser_host_send_mouse_wheel_event;
  GetStruct()->send_touch_event = browser_host_send_touch_event;
  GetStruct()->send_focus_event = browser_host_send_focus_event;
  GetStruct()->send_capture_lost_event = browser_host_send_capture_lost_event;
  GetStruct()->notify_move_or_resize_started =
      browser_host_notify_move_or_resize_started;
  GetStruct()->get_windowless_frame_rate =
      browser_host_get_windowless_frame_rate;
  GetStruct()->set_windowless_frame_rate =
      browser_host_set_windowless_frame_rate;
  GetStruct()->ime_set_composition = browser_host_ime_set_composition;
  GetStruct()->ime_commit_text = browser_host_ime_commit_text;
  GetStruct()->ime_finish_composing_text =
      browser_host_ime_finish_composing_text;
  GetStruct()->ime_cancel_composition = browser_host_ime_cancel_composition;
  GetStruct()->drag_target_drag_enter = browser_host_drag_target_drag_enter;
  GetStruct()->drag_target_drag_over = browser_host_drag_target_drag_over;
  GetStruct()->drag_target_drag_leave = browser_host_drag_target_drag_leave;
  GetStruct()->drag_target_drop = browser_host_drag_target_drop;
  GetStruct()->drag_source_ended_at = browser_host_drag_source_ended_at;
  GetStruct()->drag_source_system_drag_ended =
      browser_host_drag_source_system_drag_ended;
  GetStruct()->add_visited_url = browser_host_add_visited_url;
  GetStruct()->get_visible_navigation_entry =
      browser_host_get_visible_navigation_entry;
  GetStruct()->set_accessibility_state = browser_host_set_accessibility_state;
  GetStruct()->set_auto_resize_enabled = browser_host_set_auto_resize_enabled;
  GetStruct()->get_extension = browser_host_get_extension;
  GetStruct()->is_background_host = browser_host_is_background_host;
  GetStruct()->set_audio_muted = browser_host_set_audio_muted;
  GetStruct()->is_audio_muted = browser_host_is_audio_muted;
}

template <>
CefRefPtr<CefBrowserHost>
CefCppToCRefCounted<CefBrowserHostCppToC, CefBrowserHost, cef_browser_host_t>::
    UnwrapDerived(CefWrapperType type, cef_browser_host_t* s) {
  NOTREACHED() << "Unexpected class type: " << type;
  return NULL;
}

#if DCHECK_IS_ON()
template <>
base::AtomicRefCount CefCppToCRefCounted<CefBrowserHostCppToC,
                                         CefBrowserHost,
                                         cef_browser_host_t>::DebugObjCt
    ATOMIC_DECLARATION;
#endif

template <>
CefWrapperType CefCppToCRefCounted<CefBrowserHostCppToC,
                                   CefBrowserHost,
                                   cef_browser_host_t>::kWrapperType =
    WT_BROWSER_HOST;
