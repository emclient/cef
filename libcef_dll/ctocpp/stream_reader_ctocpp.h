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
// $hash=c7fc51f91983570c414f34a1fb423cc1f2c088b3$
//

#ifndef CEF_LIBCEF_DLL_CTOCPP_STREAM_READER_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_STREAM_READER_CTOCPP_H_
#pragma once

#if !defined(WRAPPING_CEF_SHARED)
#error This file can be included wrapper-side only
#endif

#include "include/capi/cef_stream_capi.h"
#include "include/cef_stream.h"
#include "libcef_dll/ctocpp/ctocpp_ref_counted.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed wrapper-side only.
class CefStreamReaderCToCpp : public CefCToCppRefCounted<CefStreamReaderCToCpp,
                                                         CefStreamReader,
                                                         cef_stream_reader_t> {
 public:
  CefStreamReaderCToCpp();

  // CefStreamReader methods.
  size_t Read(void* ptr, size_t size, size_t n) OVERRIDE;
  int Seek(int64 offset, int whence) OVERRIDE;
  int64 Tell() OVERRIDE;
  int Eof() OVERRIDE;
  bool MayBlock() OVERRIDE;
};

#endif  // CEF_LIBCEF_DLL_CTOCPP_STREAM_READER_CTOCPP_H_
