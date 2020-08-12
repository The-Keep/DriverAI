cmake_minimum_required(VERSION 3.0)

add_executable(DriverAI "main.cpp")

file(GLOB APP_SRC "*.cpp" "*.h")
target_sources(DriverAI PRIVATE ${APP_SRC})

add_subdirectory(OpenANN)

# set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${PROJECT_SOURCE_DIR}/cmake")

target_include_directories(DriverAI PRIVATE ${PROJECT_SOURCE_DIR}/include)

set(THREADS_PREFER_PTHREAD_FLAG ON)

find_package(Threads REQUIRED)

# target_link_libraries(
#     DriverAI PRIVATE 
#     Threads::Threads 
#     ${CMAKE_SOURCE_DIR}/libraries/libopennn.a
# )
