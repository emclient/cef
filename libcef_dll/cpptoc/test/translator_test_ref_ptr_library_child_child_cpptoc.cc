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
// $hash=c8951814bf0179522a793e7ba77896db7bf9d979$
//

#include "libcef_dll/cpptoc/test/translator_test_ref_ptr_library_child_child_cpptoc.h"

// GLOBAL FUNCTIONS - Body may be edited by hand.

CEF_EXPORT cef_translator_test_ref_ptr_library_child_child_t*
cef_translator_test_ref_ptr_library_child_child_create(int value,
                                                       int other_value,
                                                       int other_other_value) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  CefRefPtr<CefTranslatorTestRefPtrLibraryChildChild> _retval =
      CefTranslatorTestRefPtrLibraryChildChild::Create(value, other_value,
                                                       other_other_value);

  // Return type: refptr_same
  return CefTranslatorTestRefPtrLibraryChildChildCppToC::Wrap(_retval);
}

namespace {

// MEMBER FUNCTIONS - Body may be edited by hand.

int CEF_CALLBACK
translator_test_ref_ptr_library_child_child_get_other_other_value(
    struct _cef_translator_test_ref_ptr_library_child_child_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  int _retval = CefTranslatorTestRefPtrLibraryChildChildCppToC::Get(self)
                    ->GetOtherOtherValue();

  // Return type: simple
  return _retval;
}

void CEF_CALLBACK
translator_test_ref_ptr_library_child_child_set_other_other_value(
    struct _cef_translator_test_ref_ptr_library_child_child_t* self,
    int value) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;

  // Execute
  CefTranslatorTestRefPtrLibraryChildChildCppToC::Get(self)->SetOtherOtherValue(
      value);
}

int CEF_CALLBACK translator_test_ref_ptr_library_child_child_get_other_value(
    struct _cef_translator_test_ref_ptr_library_child_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  int _retval =
      CefTranslatorTestRefPtrLibraryChildChildCppToC::Get(
          reinterpret_cast<cef_translator_test_ref_ptr_library_child_child_t*>(
              self))
          ->GetOtherValue();

  // Return type: simple
  return _retval;
}

void CEF_CALLBACK translator_test_ref_ptr_library_child_child_set_other_value(
    struct _cef_translator_test_ref_ptr_library_child_t* self,
    int value) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;

  // Execute
  CefTranslatorTestRefPtrLibraryChildChildCppToC::Get(
      reinterpret_cast<cef_translator_test_ref_ptr_library_child_child_t*>(
          self))
      ->SetOtherValue(value);
}

int CEF_CALLBACK translator_test_ref_ptr_library_child_child_get_value(
    struct _cef_translator_test_ref_ptr_library_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  int _retval =
      CefTranslatorTestRefPtrLibraryChildChildCppToC::Get(
          reinterpret_cast<cef_translator_test_ref_ptr_library_child_child_t*>(
              self))
          ->GetValue();

  // Return type: simple
  return _retval;
}

void CEF_CALLBACK translator_test_ref_ptr_library_child_child_set_value(
    struct _cef_translator_test_ref_ptr_library_t* self,
    int value) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;

  // Execute
  CefTranslatorTestRefPtrLibraryChildChildCppToC::Get(
      reinterpret_cast<cef_translator_test_ref_ptr_library_child_child_t*>(
          self))
      ->SetValue(value);
}

}  // namespace

// CONSTRUCTOR - Do not edit by hand.

CefTranslatorTestRefPtrLibraryChildChildCppToC::
    CefTranslatorTestRefPtrLibraryChildChildCppToC() {
  GetStruct()->get_other_other_value =
      translator_test_ref_ptr_library_child_child_get_other_other_value;
  GetStruct()->set_other_other_value =
      translator_test_ref_ptr_library_child_child_set_other_other_value;
  GetStruct()->base.get_other_value =
      translator_test_ref_ptr_library_child_child_get_other_value;
  GetStruct()->base.set_other_value =
      translator_test_ref_ptr_library_child_child_set_other_value;
  GetStruct()->base.base.get_value =
      translator_test_ref_ptr_library_child_child_get_value;
  GetStruct()->base.base.set_value =
      translator_test_ref_ptr_library_child_child_set_value;
}

template <>
CefRefPtr<CefTranslatorTestRefPtrLibraryChildChild>
CefCppToCRefCounted<CefTranslatorTestRefPtrLibraryChildChildCppToC,
                    CefTranslatorTestRefPtrLibraryChildChild,
                    cef_translator_test_ref_ptr_library_child_child_t>::
    UnwrapDerived(CefWrapperType type,
                  cef_translator_test_ref_ptr_library_child_child_t* s) {
  NOTREACHED() << "Unexpected class type: " << type;
  return NULL;
}

#if DCHECK_IS_ON()
template <>
base::AtomicRefCount CefCppToCRefCounted<
    CefTranslatorTestRefPtrLibraryChildChildCppToC,
    CefTranslatorTestRefPtrLibraryChildChild,
    cef_translator_test_ref_ptr_library_child_child_t>::DebugObjCt
    ATOMIC_DECLARATION;
#endif

template <>
CefWrapperType CefCppToCRefCounted<
    CefTranslatorTestRefPtrLibraryChildChildCppToC,
    CefTranslatorTestRefPtrLibraryChildChild,
    cef_translator_test_ref_ptr_library_child_child_t>::kWrapperType =
    WT_TRANSLATOR_TEST_REF_PTR_LIBRARY_CHILD_CHILD;
