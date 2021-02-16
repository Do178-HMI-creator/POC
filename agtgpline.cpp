#include "agtgpline.h"
#include <GL/glut.h>

agtGpLine::agtGpLine(int get_x1, int get_y1, int get_x2, int get_y2) {
    this->x_start = get_x1;
    this->y_start = get_y1;
    this->x_final = get_x2;
    this->y_final = get_y2;
}

void agtGpLine::update(int get_x1, int get_y1, int get_x2, int get_y2) {
    this->x_start = get_x1;
    this->y_start = get_y1;
    this->x_final = get_x2;
    this->y_final = get_y2;
}

void agtGpLine::draw() {
    glColor3f(0.0, 0.0, 1.0);
    glBegin(GL_LINES);
    glVertex2f(x_start, y_start);
    glVertex2f(x_final, y_final);
    glEnd();
    glFlush();
}
