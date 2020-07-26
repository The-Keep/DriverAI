cmake_minimum_required(VERSION 3.0.0)

target_include_directories(driverAI PUBLIC "{CMAKE_CURRENT_SOURCE_DIR}")
# target_link_libraries(PI_Driver ${CMAKE_SOURCE_DIR}/source/static/gsl.a)

add_subdirectory(value_iteration)
add_subdirectory(managers)