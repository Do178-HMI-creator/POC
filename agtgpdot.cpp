#include "agtgpdot.h"
#include <GL/glut.h>

agtGpDot::agtGpDot(int get_x, int get_y) {
    this->x = get_x;
    this->y = get_y;
}

void agtGpDot::update(int get_x, int get_y) {
    this->x = get_x;
    this->y = get_y;
}

void agtGpDot::draw() {
    glColor3f(0.0, 1.0, 0.0);
    glBegin(GL_POINTS);
    glVertex2f(x, y);
    glEnd();
    glFlush();
}
