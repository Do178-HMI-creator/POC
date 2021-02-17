#include "agtgpdot.h"
#include <GL/glut.h>

agtGpDot::agtGpDot(agtTypPoint get_point) {
	this->point = get_point;
}

void agtGpDot::update(agtTypPoint get_point) {
	this->point = get_point;
}

void agtGpDot::draw() {
    glColor3f(0.0, 1.0, 0.0);
    glBegin(GL_POINTS);
    glVertex2f(this->point.x,this->point.y);
    glEnd();
    glFlush();
}
