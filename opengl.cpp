// opengl.cpp : This file contains the 'main' function. Program execution begins
// and ends there.
//
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

#include <iostream>

#include "agtgpdot.h"
#include "agtgpline.h"
#include "agtgprectangle.h"
#include "pch.h"

void myinit() {
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 499.0, 0.0, 499.0);
}

void display() {
    agtGpDot my_agtGpDot(123, 234);
    agtGpLine my_agtGpLine(123, 234, 333, 234);
    agtGpRectangle my_agtGpRectangle(100, 150, 250, 150, 250, 344, 100, 344);

    glClear(GL_COLOR_BUFFER_BIT);
    my_agtGpDot.draw();
    my_agtGpLine.draw();
    my_agtGpRectangle.draw();
}

int main(int argc, char **argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(400 * 3, 300 * 3);
    // glutInitWindowPosition(0, 0);
    glutCreateWindow("Proof of Concept Program");
    myinit();
    glutDisplayFunc(display);
    glutMainLoop();
}
