cmake_minimum_required(VERSION 3.2)
project(NeuralNet)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(NeuralNet ${SOURCE_FILES} core/Perception.cpp core/Perception.h core/Trainer.cpp core/Trainer.h)