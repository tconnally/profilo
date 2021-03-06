/*
 * Copyright (C) 2015 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ART_RUNTIME_BASE_FILE_MAGIC_H_
#define ART_RUNTIME_BASE_FILE_MAGIC_H_

#include <museum/8.0.0/external/libcxx/stdint.h>
#include <museum/8.0.0/external/libcxx/string>

#include <museum/8.0.0/art/runtime/os.h>

namespace facebook { namespace museum { namespace MUSEUM_VERSION { namespace art {

// Open file and read magic number
File OpenAndReadMagic(const char* filename, uint32_t* magic, std::string* error_msg);

// Check whether the given magic matches a known file type.
bool IsZipMagic(uint32_t magic);
bool IsDexMagic(uint32_t magic);

} } } } // namespace facebook::museum::MUSEUM_VERSION::art

#endif  // ART_RUNTIME_BASE_FILE_MAGIC_H_
