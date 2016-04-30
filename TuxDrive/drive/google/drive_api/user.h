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
// Generated from:
//   Version: v3
//   Revision: 22
// Generated by:
//    Tool: google-apis-code-generator 1.5.1
//     C++: 0.1.4
#ifndef  GOOGLE_DRIVE_API_USER_H_
#define  GOOGLE_DRIVE_API_USER_H_

#include <string>
#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

namespace Json {
class Value;
}  // namespace Json

namespace google_drive_api {
using namespace googleapis;

/**
 * Information about a Drive user.
 *
 * @ingroup DataObject
 */
class User : public client::JsonCppData {
 public:
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static User* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit User(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit User(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~User();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_drive_api::User</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_drive_api::User");
  }

  /**
   * Determine if the '<code>displayName</code>' attribute was set.
   *
   * @return true if the '<code>displayName</code>' attribute was set.
   */
  bool has_display_name() const {
    return Storage().isMember("displayName");
  }

  /**
   * Clears the '<code>displayName</code>' attribute.
   */
  void clear_display_name() {
    MutableStorage()->removeMember("displayName");
  }


  /**
   * Get the value of the '<code>displayName</code>' attribute.
   */
  const StringPiece get_display_name() const {
    const Json::Value& v = Storage("displayName");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>displayName</code>' attribute.
   *
   * A plain text displayable name for this user.
   *
   * @param[in] value The new value.
   */
  void set_display_name(const StringPiece& value) {
    *MutableStorage("displayName") = value.data();
  }

  /**
   * Determine if the '<code>emailAddress</code>' attribute was set.
   *
   * @return true if the '<code>emailAddress</code>' attribute was set.
   */
  bool has_email_address() const {
    return Storage().isMember("emailAddress");
  }

  /**
   * Clears the '<code>emailAddress</code>' attribute.
   */
  void clear_email_address() {
    MutableStorage()->removeMember("emailAddress");
  }


  /**
   * Get the value of the '<code>emailAddress</code>' attribute.
   */
  const StringPiece get_email_address() const {
    const Json::Value& v = Storage("emailAddress");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>emailAddress</code>' attribute.
   *
   * The email address of the user. This may not be present in certain contexts
   * if the user has not made their email address visible to the requester.
   *
   * @param[in] value The new value.
   */
  void set_email_address(const StringPiece& value) {
    *MutableStorage("emailAddress") = value.data();
  }

  /**
   * Determine if the '<code>kind</code>' attribute was set.
   *
   * @return true if the '<code>kind</code>' attribute was set.
   */
  bool has_kind() const {
    return Storage().isMember("kind");
  }

  /**
   * Clears the '<code>kind</code>' attribute.
   */
  void clear_kind() {
    MutableStorage()->removeMember("kind");
  }


  /**
   * Get the value of the '<code>kind</code>' attribute.
   */
  const StringPiece get_kind() const {
    const Json::Value& v = Storage("kind");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>kind</code>' attribute.
   *
   * This is always drive#user.
   *
   * @param[in] value The new value.
   */
  void set_kind(const StringPiece& value) {
    *MutableStorage("kind") = value.data();
  }

  /**
   * Determine if the '<code>me</code>' attribute was set.
   *
   * @return true if the '<code>me</code>' attribute was set.
   */
  bool has_me() const {
    return Storage().isMember("me");
  }

  /**
   * Clears the '<code>me</code>' attribute.
   */
  void clear_me() {
    MutableStorage()->removeMember("me");
  }


  /**
   * Get the value of the '<code>me</code>' attribute.
   */
  bool get_me() const {
    const Json::Value& storage = Storage("me");
    return client::JsonValueToCppValueHelper<bool >(storage);
  }

  /**
   * Change the '<code>me</code>' attribute.
   *
   * Whether this user is the requesting user.
   *
   * @param[in] value The new value.
   */
  void set_me(bool value) {
    client::SetJsonValueFromCppValueHelper<bool >(
      value, MutableStorage("me"));
  }

  /**
   * Determine if the '<code>permissionId</code>' attribute was set.
   *
   * @return true if the '<code>permissionId</code>' attribute was set.
   */
  bool has_permission_id() const {
    return Storage().isMember("permissionId");
  }

  /**
   * Clears the '<code>permissionId</code>' attribute.
   */
  void clear_permission_id() {
    MutableStorage()->removeMember("permissionId");
  }


  /**
   * Get the value of the '<code>permissionId</code>' attribute.
   */
  const StringPiece get_permission_id() const {
    const Json::Value& v = Storage("permissionId");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>permissionId</code>' attribute.
   *
   * The user's ID as visible in Permission resources.
   *
   * @param[in] value The new value.
   */
  void set_permission_id(const StringPiece& value) {
    *MutableStorage("permissionId") = value.data();
  }

  /**
   * Determine if the '<code>photoLink</code>' attribute was set.
   *
   * @return true if the '<code>photoLink</code>' attribute was set.
   */
  bool has_photo_link() const {
    return Storage().isMember("photoLink");
  }

  /**
   * Clears the '<code>photoLink</code>' attribute.
   */
  void clear_photo_link() {
    MutableStorage()->removeMember("photoLink");
  }


  /**
   * Get the value of the '<code>photoLink</code>' attribute.
   */
  const StringPiece get_photo_link() const {
    const Json::Value& v = Storage("photoLink");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>photoLink</code>' attribute.
   *
   * A link to the user's profile photo, if available.
   *
   * @param[in] value The new value.
   */
  void set_photo_link(const StringPiece& value) {
    *MutableStorage("photoLink") = value.data();
  }

 private:
  void operator=(const User&);
};  // User
}  // namespace google_drive_api
#endif  // GOOGLE_DRIVE_API_USER_H_
