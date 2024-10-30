# tests/CMakeLists.txt

enable_testing()

add_executable(ct_startup ct_startup.cpp)
target_link_libraries(ct_startup PRIVATE gmock_main startup)
add_test(NAME ct_startup_test COMMAND ct_startup)
