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
// $hash=f580ab0e224f71e47468262555b360b0b6459743$
//

#ifndef CEF_LIBCEF_DLL_CPPTOC_DRAG_DATA_CPPTOC_H_
#define CEF_LIBCEF_DLL_CPPTOC_DRAG_DATA_CPPTOC_H_
#pragma once

#if !defined(BUILDING_CEF_SHARED)
#error This file can be included DLL-side only
#endif

#include "include/capi/cef_drag_data_capi.h"
#include "include/cef_drag_data.h"
#include "libcef_dll/cpptoc/cpptoc_ref_counted.h"

// Wrap a C++ class with a C structure.
// This class may be instantiated and accessed DLL-side only.
class CefDragDataCppToC : public CefCppToCRefCounted<CefDragDataCppToC,
                                                     CefDragData,
                                                     cef_drag_data_t> {
 public:
  CefDragDataCppToC();
};

#endif  // CEF_LIBCEF_DLL_CPPTOC_DRAG_DATA_CPPTOC_H_
