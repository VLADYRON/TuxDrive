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
//   File
// Documentation:
//   https://developers.google.com/drive/

#include "google/drive_api/file.h"
#include <string>
#include "googleapis/base/integral_types.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/client/util/date_time.h"
#include "googleapis/strings/stringpiece.h"

#include "google/drive_api/permission.h"
#include "google/drive_api/user.h"


#include <string>
#include "googleapis/strings/strcat.h"

namespace google_drive_api {
using namespace googleapis;



// Object factory method (static).
File::FileCapabilities* File::FileCapabilities::New() {
  return new client::JsonCppCapsule<FileCapabilities>;
}

// Standard immutable constructor.
File::FileCapabilities::FileCapabilities(const Json::Value& storage)
  : client::JsonCppData(storage) {
}

// Standard mutable constructor.
File::FileCapabilities::FileCapabilities(Json::Value* storage)
  : client::JsonCppData(storage) {
}

// Standard destructor.
File::FileCapabilities::~FileCapabilities() {
}


// Object factory method (static).
File::FileContentHints::FileContentHintsThumbnail* File::FileContentHints::FileContentHintsThumbnail::New() {
  return new client::JsonCppCapsule<FileContentHintsThumbnail>;
}

// Standard immutable constructor.
File::FileContentHints::FileContentHintsThumbnail::FileContentHintsThumbnail(const Json::Value& storage)
  : client::JsonCppData(storage) {
}

// Standard mutable constructor.
File::FileContentHints::FileContentHintsThumbnail::FileContentHintsThumbnail(Json::Value* storage)
  : client::JsonCppData(storage) {
}

// Standard destructor.
File::FileContentHints::FileContentHintsThumbnail::~FileContentHintsThumbnail() {
}
// Object factory method (static).
File::FileContentHints* File::FileContentHints::New() {
  return new client::JsonCppCapsule<FileContentHints>;
}

// Standard immutable constructor.
File::FileContentHints::FileContentHints(const Json::Value& storage)
  : client::JsonCppData(storage) {
}

// Standard mutable constructor.
File::FileContentHints::FileContentHints(Json::Value* storage)
  : client::JsonCppData(storage) {
}

// Standard destructor.
File::FileContentHints::~FileContentHints() {
}


// Object factory method (static).
File::FileImageMediaMetadata::FileImageMediaMetadataLocation* File::FileImageMediaMetadata::FileImageMediaMetadataLocation::New() {
  return new client::JsonCppCapsule<FileImageMediaMetadataLocation>;
}

// Standard immutable constructor.
File::FileImageMediaMetadata::FileImageMediaMetadataLocation::FileImageMediaMetadataLocation(const Json::Value& storage)
  : client::JsonCppData(storage) {
}

// Standard mutable constructor.
File::FileImageMediaMetadata::FileImageMediaMetadataLocation::FileImageMediaMetadataLocation(Json::Value* storage)
  : client::JsonCppData(storage) {
}

// Standard destructor.
File::FileImageMediaMetadata::FileImageMediaMetadataLocation::~FileImageMediaMetadataLocation() {
}
// Object factory method (static).
File::FileImageMediaMetadata* File::FileImageMediaMetadata::New() {
  return new client::JsonCppCapsule<FileImageMediaMetadata>;
}

// Standard immutable constructor.
File::FileImageMediaMetadata::FileImageMediaMetadata(const Json::Value& storage)
  : client::JsonCppData(storage) {
}

// Standard mutable constructor.
File::FileImageMediaMetadata::FileImageMediaMetadata(Json::Value* storage)
  : client::JsonCppData(storage) {
}

// Standard destructor.
File::FileImageMediaMetadata::~FileImageMediaMetadata() {
}

// Object factory method (static).
File::FileVideoMediaMetadata* File::FileVideoMediaMetadata::New() {
  return new client::JsonCppCapsule<FileVideoMediaMetadata>;
}

// Standard immutable constructor.
File::FileVideoMediaMetadata::FileVideoMediaMetadata(const Json::Value& storage)
  : client::JsonCppData(storage) {
}

// Standard mutable constructor.
File::FileVideoMediaMetadata::FileVideoMediaMetadata(Json::Value* storage)
  : client::JsonCppData(storage) {
}

// Standard destructor.
File::FileVideoMediaMetadata::~FileVideoMediaMetadata() {
}
// Object factory method (static).
File* File::New() {
  return new client::JsonCppCapsule<File>;
}

// Standard immutable constructor.
File::File(const Json::Value& storage)
  : client::JsonCppData(storage) {
}

// Standard mutable constructor.
File::File(Json::Value* storage)
  : client::JsonCppData(storage) {
}

// Standard destructor.
File::~File() {
}
}  // namespace google_drive_api
