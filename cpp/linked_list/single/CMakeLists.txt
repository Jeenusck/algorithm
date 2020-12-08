add_library(forward_list INTERFACE)
target_include_directories(forward_list INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})

add_executable(test_forward_list main.cpp)
target_link_libraries (test_forward_list LINK_PUBLIC forward_list)
