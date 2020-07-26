cmake_minimum_required(VERSION 3.0.0)
project(driverAI VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(driverAI source/main.cpp)

add_subdirectory(source)
add_subdirectory(lib)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED YES)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# find_package(GSL REQUIRED)
# target_link_libraries(driverAI GSL::gsl GSL::gslcblas)

find_package (Eigen3 3.3 REQUIRED NO_MODULE)
target_link_libraries (driverAI Eigen3::Eigen)


set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
include(CPack)