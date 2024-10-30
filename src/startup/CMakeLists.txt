# src/startup/CMakeLists.txt

add_library(startup src/startup.cpp)

target_include_directories(startup PUBLIC include)

# Create the ut_startup test executable
add_executable(ut_startup tests/ut_startup.cpp)
target_link_libraries(ut_startup PRIVATE gmock_main startup)

# Register the ut_startup test with CTest
add_test(NAME ut_startup_test COMMAND ut_startup)

