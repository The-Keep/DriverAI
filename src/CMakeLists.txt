cmake_minimum_required(VERSION 3.0)

add_executable(DriverAI ${PROJECT_SOURCE_DIR}/src/main.cpp)

target_sources(
    DriverAI PRIVATE
    ${PROJECT_SOURCE_DIR}/src/json.cpp
    ${PROJECT_SOURCE_DIR}/src/tools.cpp
    ${PROJECT_SOURCE_DIR}/src/Bitmap.cpp
    ${PROJECT_SOURCE_DIR}/src/anyoption.cpp
)

# set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${PROJECT_SOURCE_DIR}/cmake")

target_include_directories(DriverAI PRIVATE ${PROJECT_SOURCE_DIR}/include)

set(THREADS_PREFER_PTHREAD_FLAG ON)

find_package(Threads REQUIRED)

target_link_libraries(DriverAI PRIVATE Threads::Threads ${CMAKE_SOURCE_DIR}/libraries/libdarknet.a)

