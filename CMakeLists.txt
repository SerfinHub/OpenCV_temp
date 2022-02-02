cmake_minimum_required(VERSION 3.0.0)

project(opencv VERSION 0.1.0)

find_package( OpenCV REQUIRED )
include_directories( ${OpenCV_INCLUDE_DIRS})
add_executable(${PROJECT_NAME} main.cpp)

add_subdirectory(components)

target_include_directories(${PROJECT_NAME} PUBLIC components)

target_link_directories(${PROJECT_NAME} PRIVATE components)

target_link_libraries(${PROJECT_NAME} Function)

target_link_libraries( ${PROJECT_NAME} ${OpenCV_LIBS} )

# Enable C++11
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)