# CMakeList.txt : CMake project for CMakeProject, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable (opengl "opengl.cpp" "line.cpp" "line.h" "rectangle.cpp" "rectangle.h" "point.cpp" "point.h" "pch.cpp" "pch.h")

# TODO: Add tests and install targets if needed.
