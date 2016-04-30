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
#ifndef  GOOGLE_DRIVE_API_PERMISSION_H_
#define  GOOGLE_DRIVE_API_PERMISSION_H_

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
 * A permission for a file. A permission grants a user, group, domain or the
 * world access to a file or a folder hierarchy.
 *
 * @ingroup DataObject
 */
class Permission : public client::JsonCppData {
 public:
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static Permission* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit Permission(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit Permission(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~Permission();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_drive_api::Permission</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_drive_api::Permission");
  }

  /**
   * Determine if the '<code>allowFileDiscovery</code>' attribute was set.
   *
   * @return true if the '<code>allowFileDiscovery</code>' attribute was set.
   */
  bool has_allow_file_discovery() const {
    return Storage().isMember("allowFileDiscovery");
  }

  /**
   * Clears the '<code>allowFileDiscovery</code>' attribute.
   */
  void clear_allow_file_discovery() {
    MutableStorage()->removeMember("allowFileDiscovery");
  }


  /**
   * Get the value of the '<code>allowFileDiscovery</code>' attribute.
   */
  bool get_allow_file_discovery() const {
    const Json::Value& storage = Storage("allowFileDiscovery");
    return client::JsonValueToCppValueHelper<bool >(storage);
  }

  /**
   * Change the '<code>allowFileDiscovery</code>' attribute.
   *
   * Whether the permission allows the file to be discovered through search.
   * This is only applicable for permissions of type domain or anyone.
   *
   * @param[in] value The new value.
   */
  void set_allow_file_discovery(bool value) {
    client::SetJsonValueFromCppValueHelper<bool >(
      value, MutableStorage("allowFileDiscovery"));
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
   * A displayable name for users, groups or domains.
   *
   * @param[in] value The new value.
   */
  void set_display_name(const StringPiece& value) {
    *MutableStorage("displayName") = value.data();
  }

  /**
   * Determine if the '<code>domain</code>' attribute was set.
   *
   * @return true if the '<code>domain</code>' attribute was set.
   */
  bool has_domain() const {
    return Storage().isMember("domain");
  }

  /**
   * Clears the '<code>domain</code>' attribute.
   */
  void clear_domain() {
    MutableStorage()->removeMember("domain");
  }


  /**
   * Get the value of the '<code>domain</code>' attribute.
   */
  const StringPiece get_domain() const {
    const Json::Value& v = Storage("domain");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>domain</code>' attribute.
   *
   * The domain to which this permission refers.
   *
   * @param[in] value The new value.
   */
  void set_domain(const StringPiece& value) {
    *MutableStorage("domain") = value.data();
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
   * The email address of the user or group to which this permission refers.
   *
   * @param[in] value The new value.
   */
  void set_email_address(const StringPiece& value) {
    *MutableStorage("emailAddress") = value.data();
  }

  /**
   * Determine if the '<code>id</code>' attribute was set.
   *
   * @return true if the '<code>id</code>' attribute was set.
   */
  bool has_id() const {
    return Storage().isMember("id");
  }

  /**
   * Clears the '<code>id</code>' attribute.
   */
  void clear_id() {
    MutableStorage()->removeMember("id");
  }


  /**
   * Get the value of the '<code>id</code>' attribute.
   */
  const StringPiece get_id() const {
    const Json::Value& v = Storage("id");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>id</code>' attribute.
   *
   * The ID of this permission. This is a unique identifier for the grantee, and
   * is published in User resources as permissionId.
   *
   * @param[in] value The new value.
   */
  void set_id(const StringPiece& value) {
    *MutableStorage("id") = value.data();
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
   * This is always drive#permission.
   *
   * @param[in] value The new value.
   */
  void set_kind(const StringPiece& value) {
    *MutableStorage("kind") = value.data();
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

  /**
   * Determine if the '<code>role</code>' attribute was set.
   *
   * @return true if the '<code>role</code>' attribute was set.
   */
  bool has_role() const {
    return Storage().isMember("role");
  }

  /**
   * Clears the '<code>role</code>' attribute.
   */
  void clear_role() {
    MutableStorage()->removeMember("role");
  }


  /**
   * Get the value of the '<code>role</code>' attribute.
   */
  const StringPiece get_role() const {
    const Json::Value& v = Storage("role");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>role</code>' attribute.
   *
   * The role granted by this permission. Valid values are:
   * - owner
   * - writer
   * - commenter
   * - reader.
   *
   * @param[in] value The new value.
   */
  void set_role(const StringPiece& value) {
    *MutableStorage("role") = value.data();
  }

  /**
   * Determine if the '<code>type</code>' attribute was set.
   *
   * @return true if the '<code>type</code>' attribute was set.
   */
  bool has_type() const {
    return Storage().isMember("type");
  }

  /**
   * Clears the '<code>type</code>' attribute.
   */
  void clear_type() {
    MutableStorage()->removeMember("type");
  }


  /**
   * Get the value of the '<code>type</code>' attribute.
   */
  const StringPiece get_type() const {
    const Json::Value& v = Storage("type");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>type</code>' attribute.
   *
   * The type of the grantee. Valid values are:
   * - user
   * - group
   * - domain
   * - anyone.
   *
   * @param[in] value The new value.
   */
  void set_type(const StringPiece& value) {
    *MutableStorage("type") = value.data();
  }

 private:
  void operator=(const Permission&);
};  // Permission
}  // namespace google_drive_api
#endif  // GOOGLE_DRIVE_API_PERMISSION_H_
