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
// $hash=e75efe207ebf7ac426b5a8f18b2435eea1e8343d$
//

#include "libcef_dll/cpptoc/views/button_cpptoc.h"
#include "libcef_dll/cpptoc/views/browser_view_cpptoc.h"
#include "libcef_dll/cpptoc/views/label_button_cpptoc.h"
#include "libcef_dll/cpptoc/views/menu_button_cpptoc.h"
#include "libcef_dll/cpptoc/views/panel_cpptoc.h"
#include "libcef_dll/cpptoc/views/scroll_view_cpptoc.h"
#include "libcef_dll/cpptoc/views/textfield_cpptoc.h"
#include "libcef_dll/cpptoc/views/view_cpptoc.h"
#include "libcef_dll/cpptoc/views/window_cpptoc.h"
#include "libcef_dll/ctocpp/views/view_delegate_ctocpp.h"

namespace {

// MEMBER FUNCTIONS - Body may be edited by hand.

cef_label_button_t* CEF_CALLBACK
button_as_label_button(struct _cef_button_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefRefPtr<CefLabelButton> _retval =
      CefButtonCppToC::Get(self)->AsLabelButton();

  // Return type: refptr_same
  return CefLabelButtonCppToC::Wrap(_retval);
}

void CEF_CALLBACK button_set_state(struct _cef_button_t* self,
                                   cef_button_state_t state) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;

  // Execute
  CefButtonCppToC::Get(self)->SetState(state);
}

cef_button_state_t CEF_CALLBACK button_get_state(struct _cef_button_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return CEF_BUTTON_STATE_NORMAL;

  // Execute
  cef_button_state_t _retval = CefButtonCppToC::Get(self)->GetState();

  // Return type: simple
  return _retval;
}

void CEF_CALLBACK button_set_ink_drop_enabled(struct _cef_button_t* self,
                                              int enabled) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;

  // Execute
  CefButtonCppToC::Get(self)->SetInkDropEnabled(enabled ? true : false);
}

void CEF_CALLBACK button_set_tooltip_text(struct _cef_button_t* self,
                                          const cef_string_t* tooltip_text) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: tooltip_text; type: string_byref_const
  DCHECK(tooltip_text);
  if (!tooltip_text)
    return;

  // Execute
  CefButtonCppToC::Get(self)->SetTooltipText(CefString(tooltip_text));
}

void CEF_CALLBACK button_set_accessible_name(struct _cef_button_t* self,
                                             const cef_string_t* name) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: name; type: string_byref_const
  DCHECK(name);
  if (!name)
    return;

  // Execute
  CefButtonCppToC::Get(self)->SetAccessibleName(CefString(name));
}

cef_browser_view_t* CEF_CALLBACK
button_as_browser_view(struct _cef_view_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefRefPtr<CefBrowserView> _retval =
      CefButtonCppToC::Get(reinterpret_cast<cef_button_t*>(self))
          ->AsBrowserView();

  // Return type: refptr_same
  return CefBrowserViewCppToC::Wrap(_retval);
}

cef_button_t* CEF_CALLBACK button_as_button(struct _cef_view_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefRefPtr<CefButton> _retval =
      CefButtonCppToC::Get(reinterpret_cast<cef_button_t*>(self))->AsButton();

  // Return type: refptr_same
  return CefButtonCppToC::Wrap(_retval);
}

cef_panel_t* CEF_CALLBACK button_as_panel(struct _cef_view_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefRefPtr<CefPanel> _retval =
      CefButtonCppToC::Get(reinterpret_cast<cef_button_t*>(self))->AsPanel();

  // Return type: refptr_same
  return CefPanelCppToC::Wrap(_retval);
}

cef_scroll_view_t* CEF_CALLBACK
button_as_scroll_view(struct _cef_view_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefRefPtr<CefScrollView> _retval =
      CefButtonCppToC::Get(reinterpret_cast<cef_button_t*>(self))
          ->AsScrollView();

  // Return type: refptr_same
  return CefScrollViewCppToC::Wrap(_retval);
}

cef_textfield_t* CEF_CALLBACK button_as_textfield(struct _cef_view_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefRefPtr<CefTextfield> _retval =
      CefButtonCppToC::Get(reinterpret_cast<cef_button_t*>(self))
          ->AsTextfield();

  // Return type: refptr_same
  return CefTextfieldCppToC::Wrap(_retval);
}

cef_string_userfree_t CEF_CALLBACK
button_get_type_string(struct _cef_view_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefString _retval =
      CefButtonCppToC::Get(reinterpret_cast<cef_button_t*>(self))
          ->GetTypeString();

  // Return type: string
  return _retval.DetachToUserFree();
}

cef_string_userfree_t CEF_CALLBACK button_to_string(struct _cef_view_t* self,
                                                    int include_children) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefString _retval =
      CefButtonCppToC::Get(reinterpret_cast<cef_button_t*>(self))
          ->ToString(include_children ? true : false);

  // Return type: string
  return _retval.DetachToUserFree();
}

int CEF_CALLBACK button_is_valid(struct _cef_view_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  bool _retval =
      CefButtonCppToC::Get(reinterpret_cast<cef_button_t*>(self))->IsValid();

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK button_is_attached(struct _cef_view_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  bool _retval =
      CefButtonCppToC::Get(reinterpret_cast<cef_button_t*>(self))->IsAttached();

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK button_is_same(struct _cef_view_t* self,
                                struct _cef_view_t* that) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;
  // Verify param: that; type: refptr_same
  DCHECK(that);
  if (!that)
    return 0;

  // Execute
  bool _retval = CefButtonCppToC::Get(reinterpret_cast<cef_button_t*>(self))
                     ->IsSame(CefViewCppToC::Unwrap(that));

  // Return type: bool
  return _retval;
}

struct _cef_view_delegate_t* CEF_CALLBACK
button_get_delegate(struct _cef_view_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefRefPtr<CefViewDelegate> _retval =
      CefButtonCppToC::Get(reinterpret_cast<cef_button_t*>(self))
          ->GetDelegate();

  // Return type: refptr_diff
  return CefViewDelegateCToCpp::Unwrap(_retval);
}

struct _cef_window_t* CEF_CALLBACK button_get_window(struct _cef_view_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefRefPtr<CefWindow> _retval =
      CefButtonCppToC::Get(reinterpret_cast<cef_button_t*>(self))->GetWindow();

  // Return type: refptr_same
  return CefWindowCppToC::Wrap(_retval);
}

int CEF_CALLBACK button_get_id(struct _cef_view_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  int _retval =
      CefButtonCppToC::Get(reinterpret_cast<cef_button_t*>(self))->GetID();

  // Return type: simple
  return _retval;
}

void CEF_CALLBACK button_set_id(struct _cef_view_t* self, int id) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;

  // Execute
  CefButtonCppToC::Get(reinterpret_cast<cef_button_t*>(self))->SetID(id);
}

int CEF_CALLBACK button_get_group_id(struct _cef_view_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  int _retval =
      CefButtonCppToC::Get(reinterpret_cast<cef_button_t*>(self))->GetGroupID();

  // Return type: simple
  return _retval;
}

void CEF_CALLBACK button_set_group_id(struct _cef_view_t* self, int group_id) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;

  // Execute
  CefButtonCppToC::Get(reinterpret_cast<cef_button_t*>(self))
      ->SetGroupID(group_id);
}

struct _cef_view_t* CEF_CALLBACK
button_get_parent_view(struct _cef_view_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefRefPtr<CefView> _retval =
      CefButtonCppToC::Get(reinterpret_cast<cef_button_t*>(self))
          ->GetParentView();

  // Return type: refptr_same
  return CefViewCppToC::Wrap(_retval);
}

struct _cef_view_t* CEF_CALLBACK
button_get_view_for_id(struct _cef_view_t* self, int id) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefRefPtr<CefView> _retval =
      CefButtonCppToC::Get(reinterpret_cast<cef_button_t*>(self))
          ->GetViewForID(id);

  // Return type: refptr_same
  return CefViewCppToC::Wrap(_retval);
}

void CEF_CALLBACK button_set_bounds(struct _cef_view_t* self,
                                    const cef_rect_t* bounds) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: bounds; type: simple_byref_const
  DCHECK(bounds);
  if (!bounds)
    return;

  // Translate param: bounds; type: simple_byref_const
  CefRect boundsVal = bounds ? *bounds : CefRect();

  // Execute
  CefButtonCppToC::Get(reinterpret_cast<cef_button_t*>(self))
      ->SetBounds(boundsVal);
}

cef_rect_t CEF_CALLBACK button_get_bounds(struct _cef_view_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return CefRect();

  // Execute
  cef_rect_t _retval =
      CefButtonCppToC::Get(reinterpret_cast<cef_button_t*>(self))->GetBounds();

  // Return type: simple
  return _retval;
}

cef_rect_t CEF_CALLBACK button_get_bounds_in_screen(struct _cef_view_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return CefRect();

  // Execute
  cef_rect_t _retval =
      CefButtonCppToC::Get(reinterpret_cast<cef_button_t*>(self))
          ->GetBoundsInScreen();

  // Return type: simple
  return _retval;
}

void CEF_CALLBACK button_set_size(struct _cef_view_t* self,
                                  const cef_size_t* size) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: size; type: simple_byref_const
  DCHECK(size);
  if (!size)
    return;

  // Translate param: size; type: simple_byref_const
  CefSize sizeVal = size ? *size : CefSize();

  // Execute
  CefButtonCppToC::Get(reinterpret_cast<cef_button_t*>(self))->SetSize(sizeVal);
}

cef_size_t CEF_CALLBACK button_get_size(struct _cef_view_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return CefSize();

  // Execute
  cef_size_t _retval =
      CefButtonCppToC::Get(reinterpret_cast<cef_button_t*>(self))->GetSize();

  // Return type: simple
  return _retval;
}

void CEF_CALLBACK button_set_position(struct _cef_view_t* self,
                                      const cef_point_t* position) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: position; type: simple_byref_const
  DCHECK(position);
  if (!position)
    return;

  // Translate param: position; type: simple_byref_const
  CefPoint positionVal = position ? *position : CefPoint();

  // Execute
  CefButtonCppToC::Get(reinterpret_cast<cef_button_t*>(self))
      ->SetPosition(positionVal);
}

cef_point_t CEF_CALLBACK button_get_position(struct _cef_view_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return CefPoint();

  // Execute
  cef_point_t _retval =
      CefButtonCppToC::Get(reinterpret_cast<cef_button_t*>(self))
          ->GetPosition();

  // Return type: simple
  return _retval;
}

cef_size_t CEF_CALLBACK button_get_preferred_size(struct _cef_view_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return CefSize();

  // Execute
  cef_size_t _retval =
      CefButtonCppToC::Get(reinterpret_cast<cef_button_t*>(self))
          ->GetPreferredSize();

  // Return type: simple
  return _retval;
}

void CEF_CALLBACK button_size_to_preferred_size(struct _cef_view_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;

  // Execute
  CefButtonCppToC::Get(reinterpret_cast<cef_button_t*>(self))
      ->SizeToPreferredSize();
}

cef_size_t CEF_CALLBACK button_get_minimum_size(struct _cef_view_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return CefSize();

  // Execute
  cef_size_t _retval =
      CefButtonCppToC::Get(reinterpret_cast<cef_button_t*>(self))
          ->GetMinimumSize();

  // Return type: simple
  return _retval;
}

cef_size_t CEF_CALLBACK button_get_maximum_size(struct _cef_view_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return CefSize();

  // Execute
  cef_size_t _retval =
      CefButtonCppToC::Get(reinterpret_cast<cef_button_t*>(self))
          ->GetMaximumSize();

  // Return type: simple
  return _retval;
}

int CEF_CALLBACK button_get_height_for_width(struct _cef_view_t* self,
                                             int width) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  int _retval = CefButtonCppToC::Get(reinterpret_cast<cef_button_t*>(self))
                    ->GetHeightForWidth(width);

  // Return type: simple
  return _retval;
}

void CEF_CALLBACK button_invalidate_layout(struct _cef_view_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;

  // Execute
  CefButtonCppToC::Get(reinterpret_cast<cef_button_t*>(self))
      ->InvalidateLayout();
}

void CEF_CALLBACK button_set_visible(struct _cef_view_t* self, int visible) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;

  // Execute
  CefButtonCppToC::Get(reinterpret_cast<cef_button_t*>(self))
      ->SetVisible(visible ? true : false);
}

int CEF_CALLBACK button_is_visible(struct _cef_view_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  bool _retval =
      CefButtonCppToC::Get(reinterpret_cast<cef_button_t*>(self))->IsVisible();

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK button_is_drawn(struct _cef_view_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  bool _retval =
      CefButtonCppToC::Get(reinterpret_cast<cef_button_t*>(self))->IsDrawn();

  // Return type: bool
  return _retval;
}

void CEF_CALLBACK button_set_enabled(struct _cef_view_t* self, int enabled) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;

  // Execute
  CefButtonCppToC::Get(reinterpret_cast<cef_button_t*>(self))
      ->SetEnabled(enabled ? true : false);
}

int CEF_CALLBACK button_is_enabled(struct _cef_view_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  bool _retval =
      CefButtonCppToC::Get(reinterpret_cast<cef_button_t*>(self))->IsEnabled();

  // Return type: bool
  return _retval;
}

void CEF_CALLBACK button_set_focusable(struct _cef_view_t* self,
                                       int focusable) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;

  // Execute
  CefButtonCppToC::Get(reinterpret_cast<cef_button_t*>(self))
      ->SetFocusable(focusable ? true : false);
}

int CEF_CALLBACK button_is_focusable(struct _cef_view_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  bool _retval = CefButtonCppToC::Get(reinterpret_cast<cef_button_t*>(self))
                     ->IsFocusable();

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK button_is_accessibility_focusable(struct _cef_view_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  bool _retval = CefButtonCppToC::Get(reinterpret_cast<cef_button_t*>(self))
                     ->IsAccessibilityFocusable();

  // Return type: bool
  return _retval;
}

void CEF_CALLBACK button_request_focus(struct _cef_view_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;

  // Execute
  CefButtonCppToC::Get(reinterpret_cast<cef_button_t*>(self))->RequestFocus();
}

void CEF_CALLBACK button_set_background_color(struct _cef_view_t* self,
                                              cef_color_t color) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;

  // Execute
  CefButtonCppToC::Get(reinterpret_cast<cef_button_t*>(self))
      ->SetBackgroundColor(color);
}

cef_color_t CEF_CALLBACK button_get_background_color(struct _cef_view_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  cef_color_t _retval =
      CefButtonCppToC::Get(reinterpret_cast<cef_button_t*>(self))
          ->GetBackgroundColor();

  // Return type: simple
  return _retval;
}

int CEF_CALLBACK button_convert_point_to_screen(struct _cef_view_t* self,
                                                cef_point_t* point) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;
  // Verify param: point; type: simple_byref
  DCHECK(point);
  if (!point)
    return 0;

  // Translate param: point; type: simple_byref
  CefPoint pointVal = point ? *point : CefPoint();

  // Execute
  bool _retval = CefButtonCppToC::Get(reinterpret_cast<cef_button_t*>(self))
                     ->ConvertPointToScreen(pointVal);

  // Restore param: point; type: simple_byref
  if (point)
    *point = pointVal;

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK button_convert_point_from_screen(struct _cef_view_t* self,
                                                  cef_point_t* point) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;
  // Verify param: point; type: simple_byref
  DCHECK(point);
  if (!point)
    return 0;

  // Translate param: point; type: simple_byref
  CefPoint pointVal = point ? *point : CefPoint();

  // Execute
  bool _retval = CefButtonCppToC::Get(reinterpret_cast<cef_button_t*>(self))
                     ->ConvertPointFromScreen(pointVal);

  // Restore param: point; type: simple_byref
  if (point)
    *point = pointVal;

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK button_convert_point_to_window(struct _cef_view_t* self,
                                                cef_point_t* point) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;
  // Verify param: point; type: simple_byref
  DCHECK(point);
  if (!point)
    return 0;

  // Translate param: point; type: simple_byref
  CefPoint pointVal = point ? *point : CefPoint();

  // Execute
  bool _retval = CefButtonCppToC::Get(reinterpret_cast<cef_button_t*>(self))
                     ->ConvertPointToWindow(pointVal);

  // Restore param: point; type: simple_byref
  if (point)
    *point = pointVal;

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK button_convert_point_from_window(struct _cef_view_t* self,
                                                  cef_point_t* point) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;
  // Verify param: point; type: simple_byref
  DCHECK(point);
  if (!point)
    return 0;

  // Translate param: point; type: simple_byref
  CefPoint pointVal = point ? *point : CefPoint();

  // Execute
  bool _retval = CefButtonCppToC::Get(reinterpret_cast<cef_button_t*>(self))
                     ->ConvertPointFromWindow(pointVal);

  // Restore param: point; type: simple_byref
  if (point)
    *point = pointVal;

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK button_convert_point_to_view(struct _cef_view_t* self,
                                              struct _cef_view_t* view,
                                              cef_point_t* point) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;
  // Verify param: view; type: refptr_same
  DCHECK(view);
  if (!view)
    return 0;
  // Verify param: point; type: simple_byref
  DCHECK(point);
  if (!point)
    return 0;

  // Translate param: point; type: simple_byref
  CefPoint pointVal = point ? *point : CefPoint();

  // Execute
  bool _retval =
      CefButtonCppToC::Get(reinterpret_cast<cef_button_t*>(self))
          ->ConvertPointToView(CefViewCppToC::Unwrap(view), pointVal);

  // Restore param: point; type: simple_byref
  if (point)
    *point = pointVal;

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK button_convert_point_from_view(struct _cef_view_t* self,
                                                struct _cef_view_t* view,
                                                cef_point_t* point) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;
  // Verify param: view; type: refptr_same
  DCHECK(view);
  if (!view)
    return 0;
  // Verify param: point; type: simple_byref
  DCHECK(point);
  if (!point)
    return 0;

  // Translate param: point; type: simple_byref
  CefPoint pointVal = point ? *point : CefPoint();

  // Execute
  bool _retval =
      CefButtonCppToC::Get(reinterpret_cast<cef_button_t*>(self))
          ->ConvertPointFromView(CefViewCppToC::Unwrap(view), pointVal);

  // Restore param: point; type: simple_byref
  if (point)
    *point = pointVal;

  // Return type: bool
  return _retval;
}

}  // namespace

// CONSTRUCTOR - Do not edit by hand.

CefButtonCppToC::CefButtonCppToC() {
  GetStruct()->as_label_button = button_as_label_button;
  GetStruct()->set_state = button_set_state;
  GetStruct()->get_state = button_get_state;
  GetStruct()->set_ink_drop_enabled = button_set_ink_drop_enabled;
  GetStruct()->set_tooltip_text = button_set_tooltip_text;
  GetStruct()->set_accessible_name = button_set_accessible_name;
  GetStruct()->base.as_browser_view = button_as_browser_view;
  GetStruct()->base.as_button = button_as_button;
  GetStruct()->base.as_panel = button_as_panel;
  GetStruct()->base.as_scroll_view = button_as_scroll_view;
  GetStruct()->base.as_textfield = button_as_textfield;
  GetStruct()->base.get_type_string = button_get_type_string;
  GetStruct()->base.to_string = button_to_string;
  GetStruct()->base.is_valid = button_is_valid;
  GetStruct()->base.is_attached = button_is_attached;
  GetStruct()->base.is_same = button_is_same;
  GetStruct()->base.get_delegate = button_get_delegate;
  GetStruct()->base.get_window = button_get_window;
  GetStruct()->base.get_id = button_get_id;
  GetStruct()->base.set_id = button_set_id;
  GetStruct()->base.get_group_id = button_get_group_id;
  GetStruct()->base.set_group_id = button_set_group_id;
  GetStruct()->base.get_parent_view = button_get_parent_view;
  GetStruct()->base.get_view_for_id = button_get_view_for_id;
  GetStruct()->base.set_bounds = button_set_bounds;
  GetStruct()->base.get_bounds = button_get_bounds;
  GetStruct()->base.get_bounds_in_screen = button_get_bounds_in_screen;
  GetStruct()->base.set_size = button_set_size;
  GetStruct()->base.get_size = button_get_size;
  GetStruct()->base.set_position = button_set_position;
  GetStruct()->base.get_position = button_get_position;
  GetStruct()->base.get_preferred_size = button_get_preferred_size;
  GetStruct()->base.size_to_preferred_size = button_size_to_preferred_size;
  GetStruct()->base.get_minimum_size = button_get_minimum_size;
  GetStruct()->base.get_maximum_size = button_get_maximum_size;
  GetStruct()->base.get_height_for_width = button_get_height_for_width;
  GetStruct()->base.invalidate_layout = button_invalidate_layout;
  GetStruct()->base.set_visible = button_set_visible;
  GetStruct()->base.is_visible = button_is_visible;
  GetStruct()->base.is_drawn = button_is_drawn;
  GetStruct()->base.set_enabled = button_set_enabled;
  GetStruct()->base.is_enabled = button_is_enabled;
  GetStruct()->base.set_focusable = button_set_focusable;
  GetStruct()->base.is_focusable = button_is_focusable;
  GetStruct()->base.is_accessibility_focusable =
      button_is_accessibility_focusable;
  GetStruct()->base.request_focus = button_request_focus;
  GetStruct()->base.set_background_color = button_set_background_color;
  GetStruct()->base.get_background_color = button_get_background_color;
  GetStruct()->base.convert_point_to_screen = button_convert_point_to_screen;
  GetStruct()->base.convert_point_from_screen =
      button_convert_point_from_screen;
  GetStruct()->base.convert_point_to_window = button_convert_point_to_window;
  GetStruct()->base.convert_point_from_window =
      button_convert_point_from_window;
  GetStruct()->base.convert_point_to_view = button_convert_point_to_view;
  GetStruct()->base.convert_point_from_view = button_convert_point_from_view;
}

template <>
CefRefPtr<CefButton>
CefCppToCRefCounted<CefButtonCppToC, CefButton, cef_button_t>::UnwrapDerived(
    CefWrapperType type,
    cef_button_t* s) {
  if (type == WT_LABEL_BUTTON) {
    return CefLabelButtonCppToC::Unwrap(
        reinterpret_cast<cef_label_button_t*>(s));
  }
  if (type == WT_MENU_BUTTON) {
    return CefMenuButtonCppToC::Unwrap(reinterpret_cast<cef_menu_button_t*>(s));
  }
  NOTREACHED() << "Unexpected class type: " << type;
  return NULL;
}

#if DCHECK_IS_ON()
template <>
base::AtomicRefCount
    CefCppToCRefCounted<CefButtonCppToC, CefButton, cef_button_t>::DebugObjCt
        ATOMIC_DECLARATION;
#endif

template <>
CefWrapperType CefCppToCRefCounted<CefButtonCppToC, CefButton, cef_button_t>::
    kWrapperType = WT_BUTTON;
