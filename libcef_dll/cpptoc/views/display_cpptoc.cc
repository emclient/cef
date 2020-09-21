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
// $hash=922d0fa4e7480fbc71fe73f262dad0f5def18fd1$
//

#include "libcef_dll/cpptoc/views/display_cpptoc.h"
#include <algorithm>

// GLOBAL FUNCTIONS - Body may be edited by hand.

CEF_EXPORT cef_display_t* cef_display_get_primary() {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  CefRefPtr<CefDisplay> _retval = CefDisplay::GetPrimaryDisplay();

  // Return type: refptr_same
  return CefDisplayCppToC::Wrap(_retval);
}

CEF_EXPORT cef_display_t* cef_display_get_nearest_point(
    const cef_point_t* point,
    int input_pixel_coords) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: point; type: simple_byref_const
  DCHECK(point);
  if (!point)
    return NULL;

  // Translate param: point; type: simple_byref_const
  CefPoint pointVal = point ? *point : CefPoint();

  // Execute
  CefRefPtr<CefDisplay> _retval = CefDisplay::GetDisplayNearestPoint(
      pointVal, input_pixel_coords ? true : false);

  // Return type: refptr_same
  return CefDisplayCppToC::Wrap(_retval);
}

CEF_EXPORT cef_display_t* cef_display_get_matching_bounds(
    const cef_rect_t* bounds,
    int input_pixel_coords) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: bounds; type: simple_byref_const
  DCHECK(bounds);
  if (!bounds)
    return NULL;

  // Translate param: bounds; type: simple_byref_const
  CefRect boundsVal = bounds ? *bounds : CefRect();

  // Execute
  CefRefPtr<CefDisplay> _retval = CefDisplay::GetDisplayMatchingBounds(
      boundsVal, input_pixel_coords ? true : false);

  // Return type: refptr_same
  return CefDisplayCppToC::Wrap(_retval);
}

CEF_EXPORT size_t cef_display_get_count() {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  size_t _retval = CefDisplay::GetDisplayCount();

  // Return type: simple
  return _retval;
}

CEF_EXPORT void cef_display_get_alls(size_t* displaysCount,
                                     cef_display_t** displays) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: displays; type: refptr_vec_same_byref
  DCHECK(displaysCount && (*displaysCount == 0 || displays));
  if (!displaysCount || (*displaysCount > 0 && !displays))
    return;

  // Translate param: displays; type: refptr_vec_same_byref
  std::vector<CefRefPtr<CefDisplay>> displaysList;
  if (displaysCount && *displaysCount > 0 && displays) {
    for (size_t i = 0; i < *displaysCount; ++i) {
      displaysList.push_back(CefDisplayCppToC::Unwrap(displays[i]));
    }
  }

  // Execute
  CefDisplay::GetAllDisplays(displaysList);

  // Restore param: displays; type: refptr_vec_same_byref
  if (displaysCount && displays) {
    *displaysCount = std::min(displaysList.size(), *displaysCount);
    if (*displaysCount > 0) {
      for (size_t i = 0; i < *displaysCount; ++i) {
        displays[i] = CefDisplayCppToC::Wrap(displaysList[i]);
      }
    }
  }
}

namespace {

// MEMBER FUNCTIONS - Body may be edited by hand.

int64 CEF_CALLBACK display_get_id(struct _cef_display_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  int64 _retval = CefDisplayCppToC::Get(self)->GetID();

  // Return type: simple
  return _retval;
}

float CEF_CALLBACK
display_get_device_scale_factor(struct _cef_display_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  float _retval = CefDisplayCppToC::Get(self)->GetDeviceScaleFactor();

  // Return type: simple
  return _retval;
}

void CEF_CALLBACK display_convert_point_to_pixels(struct _cef_display_t* self,
                                                  cef_point_t* point) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: point; type: simple_byref
  DCHECK(point);
  if (!point)
    return;

  // Translate param: point; type: simple_byref
  CefPoint pointVal = point ? *point : CefPoint();

  // Execute
  CefDisplayCppToC::Get(self)->ConvertPointToPixels(pointVal);

  // Restore param: point; type: simple_byref
  if (point)
    *point = pointVal;
}

void CEF_CALLBACK display_convert_point_from_pixels(struct _cef_display_t* self,
                                                    cef_point_t* point) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: point; type: simple_byref
  DCHECK(point);
  if (!point)
    return;

  // Translate param: point; type: simple_byref
  CefPoint pointVal = point ? *point : CefPoint();

  // Execute
  CefDisplayCppToC::Get(self)->ConvertPointFromPixels(pointVal);

  // Restore param: point; type: simple_byref
  if (point)
    *point = pointVal;
}

cef_rect_t CEF_CALLBACK display_get_bounds(struct _cef_display_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return CefRect();

  // Execute
  cef_rect_t _retval = CefDisplayCppToC::Get(self)->GetBounds();

  // Return type: simple
  return _retval;
}

cef_rect_t CEF_CALLBACK display_get_work_area(struct _cef_display_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return CefRect();

  // Execute
  cef_rect_t _retval = CefDisplayCppToC::Get(self)->GetWorkArea();

  // Return type: simple
  return _retval;
}

int CEF_CALLBACK display_get_rotation(struct _cef_display_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  int _retval = CefDisplayCppToC::Get(self)->GetRotation();

  // Return type: simple
  return _retval;
}

}  // namespace

// CONSTRUCTOR - Do not edit by hand.

CefDisplayCppToC::CefDisplayCppToC() {
  GetStruct()->get_id = display_get_id;
  GetStruct()->get_device_scale_factor = display_get_device_scale_factor;
  GetStruct()->convert_point_to_pixels = display_convert_point_to_pixels;
  GetStruct()->convert_point_from_pixels = display_convert_point_from_pixels;
  GetStruct()->get_bounds = display_get_bounds;
  GetStruct()->get_work_area = display_get_work_area;
  GetStruct()->get_rotation = display_get_rotation;
}

template <>
CefRefPtr<CefDisplay>
CefCppToCRefCounted<CefDisplayCppToC, CefDisplay, cef_display_t>::UnwrapDerived(
    CefWrapperType type,
    cef_display_t* s) {
  NOTREACHED() << "Unexpected class type: " << type;
  return NULL;
}

#if DCHECK_IS_ON()
template <>
base::AtomicRefCount
    CefCppToCRefCounted<CefDisplayCppToC, CefDisplay, cef_display_t>::DebugObjCt
        ATOMIC_DECLARATION;
#endif

template <>
CefWrapperType CefCppToCRefCounted<CefDisplayCppToC,
                                   CefDisplay,
                                   cef_display_t>::kWrapperType = WT_DISPLAY;
