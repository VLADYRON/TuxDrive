# This is a CMake file for Drive API v3
# using the Google APIs Client Library for C++.
#
# See http://google.github.io/google-api-cpp-client/latest/start/get_started
# for more information about what to do with this file.

project (google_drive_api)

# These sources assume that the CMakeLists.txt in ../.. added itself to
# the include directories so that include paths are specified explicitly
# with the directory #include "google/drive_api/..."
add_library(google_drive_api STATIC
            about.cc
            change.cc
            change_list.cc
            channel.cc
            comment.cc
            comment_list.cc
            file.cc
            file_list.cc
            generated_ids.cc
            permission.cc
            permission_list.cc
            reply.cc
            reply_list.cc
            revision.cc
            revision_list.cc
            start_page_token.cc
            user.cc
            drive_service.cc)
target_link_libraries(google_drive_api googleapis_http)
target_link_libraries(google_drive_api googleapis_internal)
target_link_libraries(google_drive_api googleapis_jsoncpp)
target_link_libraries(google_drive_api googleapis_utils)
