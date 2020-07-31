cmake_minimum_required(VERSION 3.0.0)

project("DriverAI")

include(CTest)
enable_testing()

add_subdirectory(src)
add_subdirectory(libs)

# set(CMAKE_CXX_STANDARD 11)

# include_directories("${PROJECT_SOURCE_DIR}/dlls")

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)