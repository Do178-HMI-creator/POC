#include "agtgpline.h"
#include <GL/glut.h>

agtGpLine::agtGpLine(std::string name_c, agtTypPoint get_point1, agtTypPoint get_point2, agtTypColor get_rgb) {
    this->point1 = get_point1;
    this->point2 = get_point2;
    this->rgb = get_rgb;
}

void agtGpLine::update(agtTypPoint get_point1, agtTypPoint get_point2, agtTypColor get_rgb) {
    this->point1 = get_point1;
    this->point2 = get_point2;
    this->rgb = get_rgb;
}

void agtGpLine::draw() {
    glColor3f(this->rgb.r, this->rgb.g, this->rgb.b);
    glBegin(GL_LINES);
    glVertex2f(this->point1.x, this->point1.y);
    glVertex2f(this->point2.x, this->point2.y);
    glEnd();
    glFlush();
}
std::string agtGpLine::to_text() { return this->name; }
void agtGpLine::update(std::string message) {}
