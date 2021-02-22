#include "agtgpcircle.h"
#include <GL/glut.h>
#include <cmath>
#include <string>
agtGpCircle::agtGpCircle(std::string name_c, agtTypPoint get_centerPoint, agtTypColor get_rgb, int r) {
    this->centerPoint = get_centerPoint;
    this->rgb = get_rgb;
    this->r = r;
    this->name = name_c;
}

void agtGpCircle::update(agtTypPoint get_centerPoint, agtTypColor get_rgb, int r) {
    this->centerPoint = get_centerPoint;
    this->rgb = get_rgb;
    this->r = r;
}

void agtGpCircle::draw() {
    glColor3f(this->rgb.r, this->rgb.g, this->rgb.b);
    glLineWidth(2);
    glBegin(GL_LINE_LOOP);

    for (int ii = 0; ii < 360; ii++) {
        float theta = 2.0f * 3.1415926f * float(ii) / float(360);     // get the current angle
        float x = r * cosf(theta);                                    // calculate the x component
        float y = r * sinf(theta);                                    // calculate the y component
        glVertex2f(x + this->centerPoint.x, y + this->centerPoint.y); // output vertex
    }
    glEnd();
    glFlush();
}
std::string agtGpCircle::to_text() { return this->name; }
void agtGpCircle::update(std::string message) {}
