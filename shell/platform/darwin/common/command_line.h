// Copyright 2017 The Flutter Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef FLUTTER_SHELL_PLATFORM_DARWIN_COMMON_COMMAND_LINE_H_
#define FLUTTER_SHELL_PLATFORM_DARWIN_COMMON_COMMAND_LINE_H_

#include "flutter/fml/command_line.h"
#include "flutter/fml/macros.h"

namespace shell {

fml::CommandLine CommandLineFromNSProcessInfo();

}  // namespace shell

#endif  // FLUTTER_SHELL_PLATFORM_DARWIN_COMMON_COMMAND_LINE_H_
