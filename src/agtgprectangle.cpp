#include "agtgprectangle.h"
#include <GL/glut.h>

agtGpRectangle::agtGpRectangle(std::string name_c, agtTypPoint get_point1, agtTypPoint get_point2, agtTypPoint get_point3, agtTypPoint get_point4, agtTypColor get_rgb) {
    this->point1 = get_point1;
    this->point2 = get_point2;
    this->point3 = get_point3;
    this->point4 = get_point4;
    this->rgb = get_rgb;
}

void agtGpRectangle::update(agtTypPoint get_point1, agtTypPoint get_point2, agtTypPoint get_point3, agtTypPoint get_point4, agtTypColor get_rgb) {
    this->point1 = get_point1;
    this->point2 = get_point2;
    this->point3 = get_point3;
    this->point4 = get_point4;
    this->rgb = get_rgb;
}

void agtGpRectangle::draw() {

    glColor3f(this->rgb.r_get(), this->rgb.g_get(), this->rgb.b_get());
    glLineWidth(2);
    glBegin(GL_LINE_LOOP);
    glVertex2f(this->point1.get_x(), this->point1.get_y());
    glVertex2f(this->point2.get_x(), this->point2.get_y());
    glVertex2f(this->point3.get_x(), this->point3.get_y());
    glVertex2f(this->point4.get_x(), this->point4.get_y());
    glEnd();
    glFlush();
}
std::string agtGpRectangle::to_text() { return this->name; }