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
// $hash=a5a2deddd63254bb058eb3d43c27a2d92b9dfd5d$
//

#ifndef CEF_LIBCEF_DLL_CTOCPP_TASK_RUNNER_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_TASK_RUNNER_CTOCPP_H_
#pragma once

#if !defined(WRAPPING_CEF_SHARED)
#error This file can be included wrapper-side only
#endif

#include "include/capi/cef_task_capi.h"
#include "include/cef_task.h"
#include "libcef_dll/ctocpp/ctocpp_ref_counted.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed wrapper-side only.
class CefTaskRunnerCToCpp : public CefCToCppRefCounted<CefTaskRunnerCToCpp,
                                                       CefTaskRunner,
                                                       cef_task_runner_t> {
 public:
  CefTaskRunnerCToCpp();

  // CefTaskRunner methods.
  bool IsSame(CefRefPtr<CefTaskRunner> that) OVERRIDE;
  bool BelongsToCurrentThread() OVERRIDE;
  bool BelongsToThread(CefThreadId threadId) OVERRIDE;
  bool PostTask(CefRefPtr<CefTask> task) OVERRIDE;
  bool PostDelayedTask(CefRefPtr<CefTask> task, int64 delay_ms) OVERRIDE;
};

#endif  // CEF_LIBCEF_DLL_CTOCPP_TASK_RUNNER_CTOCPP_H_
