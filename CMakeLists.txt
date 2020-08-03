cmake_minimum_required(VERSION 3.0.0)

project("DriverAI")

include(CTest)
enable_testing()

add_subdirectory(src)
add_subdirectory(libs)
# add_subdirectory(libraries)

option(CUDA_BUILD "Flag for CUDA Support" Off)

set(CMAKE_CXX_STANDARD 11)

# COMPILER OPTION EXAMPLE
if (CUDA_BUILD)
    message("-- CUDA Support Enabled")
    target_compile_options(DriverAI PRIVATE -DGPU)
else()
    message("-- CUDA Disabled")
endif(CUDA_BUILD)
unset(CUDA_BUILD CACHE) # <---- this is the important!!

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)