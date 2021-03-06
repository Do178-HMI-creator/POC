cmake_minimum_required(VERSION 3.8)
project(POC)

add_executable(POC main.cpp agtgpdot.cpp agtgpdot.h agtgpline.cpp agtgpline.h agtgprectangle.cpp agtgprectangle.h agtgraphicprimitiveifc.h agtgpcircle.cpp agtgpcircle.h agtTypPoint.h agtTypPoint.cpp agtmessagebroker.cpp agtmessagebroker.h tree.h agtTypColor.h agtTypColor.cpp agtobjecttree.cpp agtobjecttree.h)

# Include OpenGL
find_package(OpenGL REQUIRED COMPONENTS OpenGL)
find_package(GLUT REQUIRED)
find_package(GLU REQUIRED)

add_dependencies(POC OpenGL::OpenGL)
include_directories(${GLUT_INCLUDE_DIRS})
include_directories(${GLU_INCLUDE_DIRS})

target_link_libraries(POC OpenGL::OpenGL ${GLUT_LIBRARY})
target_link_libraries(POC OpenGL::OpenGL ${GLU_LIBRARY})

# Include Thread
set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads REQUIRED)
target_link_libraries(POC Threads::Threads)
