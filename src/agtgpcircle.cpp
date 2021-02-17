#include "agtgpcircle.h"
#include <GL/glut.h>
#include <cmath>
agtGpCircle::agtGpCircle(agtTypPoint get_centerPoint, int r) {
	this->centerPoint = get_centerPoint;
    this->r = r;
}

void agtGpCircle::update(agtTypPoint get_centerPoint, int r) {
	this->centerPoint = get_centerPoint;
    this->r = r;
}

void agtGpCircle::draw() {
    glColor3f(0.0, 1.0, 1.0);
    glLineWidth(2);
    glBegin(GL_LINE_LOOP);

    for (int ii = 0; ii < 360; ii++)   {
        float theta = 2.0f * 3.1415926f * float(ii) / float(360);//get the current angle
        float x = r * cosf(theta);//calculate the x component
        float y = r * sinf(theta);//calculate the y component
        glVertex2f(x + this->centerPoint.x, y + this->centerPoint.y);//output vertex
    }
    glEnd();
    glFlush();
}
