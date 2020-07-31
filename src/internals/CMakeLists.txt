cmake_minimum_required(VERSION 3.0)

target_sources(
    DriverAI PRIVATE 
    ${PROJECT_SOURCE_DIR}/src/internals/Mesh.cpp
    ${PROJECT_SOURCE_DIR}/src/internals/SceneObj.cpp
)