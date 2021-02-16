#include "agtgprectangle.h"
#include <GL/glut.h>
#include <iostream>

agtGpRectangle::agtGpRectangle(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4) {
    this->x1 = x1;
    this->x2 = x2;
    this->x3 = x3;
    this->x4 = x4;
    this->y1 = y1;
    this->y2 = y2;
    this->y3 = y3;
    this->y4 = y4;
}

void agtGpRectangle::update(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4) {
    this->x1 = x1;
    this->x2 = x2;
    this->x3 = x3;
    this->x4 = x4;
    this->y1 = y1;
    this->y2 = y2;
    this->y3 = y3;
    this->y4 = y4;
}

void agtGpRectangle::draw() {
    glColor3f(1.0, 0.0, 0.0);
    glLineWidth(2);
    glBegin(GL_LINE_LOOP);
    glVertex2f(x1, y1);
    glVertex2f(x2, y2);
    glVertex2f(x3, y3);
    glVertex2f(x4, y4);
    glEnd();
    glFlush();
}
