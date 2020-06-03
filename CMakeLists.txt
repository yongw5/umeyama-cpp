cmake_minimum_required(VERSION 3.5)
project(umeyama)

set(CMAKE_CXX_STANDARD 11)

find_package(OpenCV REQUIRED)
add_executable(umeyama
        main.cc
        umeyama.h umeyama.cc
)

target_link_libraries(umeyama ${OpenCV_LIBS})
