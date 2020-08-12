cmake_minimum_required(VERSION 3.0.0)

project("DriverAI")

include(CTest)
enable_testing()

option(CUDA "Flag for CUDA Support" Off)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_COMPILER_OPTIONS "")

add_subdirectory(src)
# add_subdirectory(libraries)

# COMPILER OPTION EXAMPLE
if (CUDA)
    message("-- CUDA Support Enabled")
    set(CMAKE_COMPILER_OPTIONS ${CMAKE_COMPILER_OPTIONS} -DGPU)
else(CUDA)
    message("-- CUDA Disabled")

target_compile_options(DriverAI PRIVATE -DGPU)

endif(CUDA)
unset(CUDA CACHE) # <---- this is the important!!

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)