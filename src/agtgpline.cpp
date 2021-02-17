#include "agtgpline.h"
#include <GL/glut.h>

agtGpLine::agtGpLine(agtTypPoint get_point1, agtTypPoint get_point2) {
	this->point1 = get_point1;
	this->point2 = get_point2;
}

void agtGpLine::update(agtTypPoint get_point1, agtTypPoint get_point2) {
	this->point1 = get_point1;
	this->point2 = get_point2;
}

void agtGpLine::draw() {
    glColor3f(0.0, 0.0, 1.0);
    glBegin(GL_LINES);
    glVertex2f(this->point1.x, this->point1.y);
    glVertex2f(this->point2.x, this->point2.y);
    glEnd();
    glFlush();
}
