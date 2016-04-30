// Copyright 2010 Google Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License"); you may not
// use this file except in compliance with the License. You may obtain a copy of
// the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
// WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
// License for the specific language governing permissions and limitations under
// the License.

// This code was generated by google-apis-code-generator 1.5.1
//   Build date: 2016-04-08 17:16:44 UTC
//   on: 2016-04-28, 20:31:57 UTC
//   C++ generator version: 0.1.4

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   Drive API (drive/v3)
// Description:
//   Manages files in Drive including uploading, downloading, searching, detecting changes, and updating sharing permissions.
// Classes:
//   Revision
// Documentation:
//   https://developers.google.com/drive/

#include "google/drive_api/revision.h"
#include <string>
#include "googleapis/base/integral_types.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/client/util/date_time.h"
#include "googleapis/strings/stringpiece.h"

#include "google/drive_api/user.h"


#include <string>
#include "googleapis/strings/strcat.h"

namespace google_drive_api {
using namespace googleapis;


// Object factory method (static).
Revision* Revision::New() {
  return new client::JsonCppCapsule<Revision>;
}

// Standard immutable constructor.
Revision::Revision(const Json::Value& storage)
  : client::JsonCppData(storage) {
}

// Standard mutable constructor.
Revision::Revision(Json::Value* storage)
  : client::JsonCppData(storage) {
}

// Standard destructor.
Revision::~Revision() {
}
}  // namespace google_drive_api
