cmake_minimum_required(VERSION 3.0.0)

target_sources(driverAI PRIVATE 
    "${CMAKE_CURRENT_SOURCE_DIR}/Manager.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/SonarManager.cpp"
)

target_include_directories(driverAI PUBLIC "{CMAKE_CURRENT_SOURCE_DIR}")