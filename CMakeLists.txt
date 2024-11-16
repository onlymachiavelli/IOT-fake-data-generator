cmake_minimum_required(VERSION 3.10)
project(iot_project)

set(CMAKE_CXX_STANDARD 11)

# Path to Firebase C++ SDK
set(FIREBASE_SDK_PATH "/path/to/firebase-cpp-sdk-RELEASE")

# Include Firebase libraries (modify as needed for your specific Firebase services)
add_subdirectory(${FIREBASE_SDK_PATH} firebase_sdk)

# Add your source file
add_executable(iot_project main.cpp)

# Link Firebase libraries
target_link_libraries(iot_project firebase_auth firebase_firestore)
