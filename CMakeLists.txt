# CMakeList.txt : CMake project for CMakeProject, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)
project(POC)

add_executable (POC "opengl.cpp" "line.cpp" "line.h" "rectangle.cpp" "rectangle.h" "point.cpp" "point.h" "pch.cpp" "pch.h")

# OpenGL
find_package(OpenGL REQUIRED COMPONENTS OpenGL)
find_package(GLUT REQUIRED)
find_package(GLU REQUIRED)

add_dependencies(POC OpenGL::OpenGL)
include_directories(${GLUT_INCLUDE_DIRS} )
include_directories(${GLU_INCLUDE_DIRS} )

target_link_libraries(POC OpenGL::OpenGL ${GLUT_LIBRARY} )
target_link_libraries(POC OpenGL::OpenGL ${GLU_LIBRARY} )

