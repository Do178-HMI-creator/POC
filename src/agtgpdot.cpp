#include "agtgpdot.h"
#include <GL/glut.h>
#include <iostream>
#include <sstream>
#include <vector>

agtGpDot::agtGpDot(std::string name_c, agtTypPoint get_point, agtTypColor get_rgb) {
    this->point = get_point;
    this->rgb = get_rgb;
    this->name = name_c;
}

void agtGpDot::update(agtTypPoint get_point, agtTypColor get_rgb) {
    this->point = get_point;
    this->rgb = get_rgb;
}

std::vector<std::string> agtGpDot::split(const std::string s, char delimiter) {
    std::vector<std::string> tokens;
    std::string token;
    std::istringstream tokenStream(s);
    while (std::getline(tokenStream, token, delimiter)) {
        tokens.push_back(token);
    }
    return tokens;
}

void agtGpDot::update(std::string message) {

    if (split(message, '=')[0].compare("point.x")) {
        this->point.x = stoi(split(message, '=')[1]);
    } else {
        this->point.y = stoi(split(message, '=')[1]);
    }
    glutPostRedisplay();

}

std::string agtGpDot::to_text() { return this->name; }
void agtGpDot::draw() {
    glPointSize(9.0);
    glLineWidth(3.0);
    glColor3f(this->rgb.r_get(), this->rgb.g_get(), this->rgb.b_get());
    glBegin(GL_POINTS);
    glVertex2f(this->point.get_x(), this->point.get_y());
    glEnd();
    glFlush();
}
