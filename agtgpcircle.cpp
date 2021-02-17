#include "agtgpcircle.h"
#include <GL/glut.h>
#include <cmath>
agtGpCircle::agtGpCircle(int x1, int y1, int r) {
    this->x1 = x1;
    this->y1 = y1;
    this->r = r;
}

void agtGpCircle::update(int x1, int y1, int r) {
    this->x1 = x1;
    this->y1 = y1;
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
        glVertex2f(x + this->x1, y + this->y1);//output vertex
    }
    glEnd();
    glFlush();
}
