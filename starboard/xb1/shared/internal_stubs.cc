// Copyright 2022 The Cobalt Authors. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "starboard/xb1/shared/internal_shims.h"

#include <ppltasks.h>

namespace starboard {
namespace xb1 {
namespace shared {

bool CanAcquire() {
  return false;
}

// clang-format off
Windows::Foundation::IAsyncOperation<bool> ^ Acquire() {
  return concurrency::create_async([] { return false; });
}

void Release() {}

Platform::String ^ GetCertScope() { return ""; }

void GetSignature(Windows::Storage::Streams::IBuffer ^ message_buffer,
                  Windows::Storage::Streams::IBuffer ^ *signature) {}
// clang-format on

}  // namespace shared
}  // namespace xb1
}  // namespace starboard
