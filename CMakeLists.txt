cmake_minimum_required(VERSION 3.26)
project(WinGO)

set(CMAKE_CXX_STANDARD 17)

# Set CMAKE_PREFIX_PATH
set(CMAKE_PREFIX_PATH "/home/borko/Qt/6.6.0/gcc_64" ${CMAKE_PREFIX_PATH})

# OR Set Qt6_DIR
set(Qt6_DIR "/home/borko/Qt/6.6.0/gcc_64/lib/cmake/Qt6")


# Find Qt6
find_package(Qt6 REQUIRED COMPONENTS Core Widgets Test)

set(CMAKE_AUTOMOC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

add_executable(WinGO main.cpp)

# Link your executable with Qt Test
target_link_libraries(WinGO Qt6::Test Qt6::Core Qt6::Widgets)