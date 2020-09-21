// Copyright (c) 2020 The Chromium Embedded Framework Authors. All rights
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
// $hash=3276329b836d2106f23d9f03e9b7ac228bcb7c10$
//

#include "libcef_dll/cpptoc/audio_handler_cpptoc.h"
#include "libcef_dll/ctocpp/browser_ctocpp.h"

namespace {

// MEMBER FUNCTIONS - Body may be edited by hand.

void CEF_CALLBACK
audio_handler_on_audio_stream_started(struct _cef_audio_handler_t* self,
                                      struct _cef_browser_t* browser,
                                      int audio_stream_id,
                                      int channels,
                                      cef_channel_layout_t channel_layout,
                                      int sample_rate,
                                      int frames_per_buffer) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: browser; type: refptr_diff
  DCHECK(browser);
  if (!browser)
    return;

  // Execute
  CefAudioHandlerCppToC::Get(self)->OnAudioStreamStarted(
      CefBrowserCToCpp::Wrap(browser), audio_stream_id, channels,
      channel_layout, sample_rate, frames_per_buffer);
}

void CEF_CALLBACK
audio_handler_on_audio_stream_packet(struct _cef_audio_handler_t* self,
                                     struct _cef_browser_t* browser,
                                     int audio_stream_id,
                                     const float** data,
                                     int frames,
                                     int64 pts) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: browser; type: refptr_diff
  DCHECK(browser);
  if (!browser)
    return;
  // Verify param: data; type: simple_byaddr
  DCHECK(data);
  if (!data)
    return;

  // Execute
  CefAudioHandlerCppToC::Get(self)->OnAudioStreamPacket(
      CefBrowserCToCpp::Wrap(browser), audio_stream_id, data, frames, pts);
}

void CEF_CALLBACK
audio_handler_on_audio_stream_stopped(struct _cef_audio_handler_t* self,
                                      struct _cef_browser_t* browser,
                                      int audio_stream_id) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: browser; type: refptr_diff
  DCHECK(browser);
  if (!browser)
    return;

  // Execute
  CefAudioHandlerCppToC::Get(self)->OnAudioStreamStopped(
      CefBrowserCToCpp::Wrap(browser), audio_stream_id);
}

}  // namespace

// CONSTRUCTOR - Do not edit by hand.

CefAudioHandlerCppToC::CefAudioHandlerCppToC() {
  GetStruct()->on_audio_stream_started = audio_handler_on_audio_stream_started;
  GetStruct()->on_audio_stream_packet = audio_handler_on_audio_stream_packet;
  GetStruct()->on_audio_stream_stopped = audio_handler_on_audio_stream_stopped;
}

template <>
CefRefPtr<CefAudioHandler> CefCppToCRefCounted<
    CefAudioHandlerCppToC,
    CefAudioHandler,
    cef_audio_handler_t>::UnwrapDerived(CefWrapperType type,
                                        cef_audio_handler_t* s) {
  NOTREACHED() << "Unexpected class type: " << type;
  return NULL;
}

#if DCHECK_IS_ON()
template <>
base::AtomicRefCount CefCppToCRefCounted<CefAudioHandlerCppToC,
                                         CefAudioHandler,
                                         cef_audio_handler_t>::DebugObjCt
    ATOMIC_DECLARATION;
#endif

template <>
CefWrapperType CefCppToCRefCounted<CefAudioHandlerCppToC,
                                   CefAudioHandler,
                                   cef_audio_handler_t>::kWrapperType =
    WT_AUDIO_HANDLER;
