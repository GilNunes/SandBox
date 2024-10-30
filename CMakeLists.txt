cmake_minimum_required(VERSION 3.10)
project(MyProject)

include(FetchContent)
FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG        release-1.11.0
)
FetchContent_MakeAvailable(googletest)

set(CMAKE_CXX_STANDARD 14)

# Enable testing globally
enable_testing()

add_subdirectory(src)
add_subdirectory(tests)
