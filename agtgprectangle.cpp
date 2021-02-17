#include "agtgprectangle.h"
#include <GL/glut.h>
#include <iostream>

agtGpRectangle::agtGpRectangle(agtTypPoint get_point1, agtTypPoint get_point2, agtTypPoint get_point3, agtTypPoint get_point4) {
	this->point1 = get_point1;
	this->point2 = get_point2;
	this->point3 = get_point3;
	this->point4 = get_point4;
}

void agtGpRectangle::update(agtTypPoint get_point1, agtTypPoint get_point2, agtTypPoint get_point3, agtTypPoint get_point4) {
	this->point1 = get_point1;
	this->point2 = get_point2;
	this->point3 = get_point3;
	this->point4 = get_point4;
}

void agtGpRectangle::draw() {
    glColor3f(1.0, 0.0, 0.0);
    glLineWidth(2);
    glBegin(GL_LINE_LOOP);
    glVertex2f(this->point1.x, this->point1.y);
    glVertex2f(this->point2.x, this->point2.y);
    glVertex2f(this->point3.x, this->point3.y);
    glVertex2f(this->point4.x, this->point4.y);
    glEnd();
    glFlush();
}
