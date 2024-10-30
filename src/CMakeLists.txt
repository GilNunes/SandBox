add_subdirectory(startup)

add_executable(MyProject main.cpp)
target_link_libraries(MyProject PRIVATE startup)
