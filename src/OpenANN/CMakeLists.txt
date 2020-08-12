cmake_minimum_required(VERSION 3.0.0)

file(GLOB OPENANN_SRC "*.cpp")

# add_library(OPENANN STATIC ${OPENANN_SRC})
target_sources(DriverAI PRIVATE ${OPENANN_SRC})