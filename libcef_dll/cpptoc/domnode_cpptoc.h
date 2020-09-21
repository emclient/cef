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
// $hash=61877d0410a41e1f255278a158d98ce3fd83b8d5$
//

#ifndef CEF_LIBCEF_DLL_CPPTOC_DOMNODE_CPPTOC_H_
#define CEF_LIBCEF_DLL_CPPTOC_DOMNODE_CPPTOC_H_
#pragma once

#if !defined(BUILDING_CEF_SHARED)
#error This file can be included DLL-side only
#endif

#include "include/capi/cef_dom_capi.h"
#include "include/cef_dom.h"
#include "libcef_dll/cpptoc/cpptoc_ref_counted.h"

// Wrap a C++ class with a C structure.
// This class may be instantiated and accessed DLL-side only.
class CefDOMNodeCppToC
    : public CefCppToCRefCounted<CefDOMNodeCppToC, CefDOMNode, cef_domnode_t> {
 public:
  CefDOMNodeCppToC();
};

#endif  // CEF_LIBCEF_DLL_CPPTOC_DOMNODE_CPPTOC_H_
