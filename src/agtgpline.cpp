#include "agtgpline.h"
#include <GL/glut.h>

agtGpLine::agtGpLine(agtTypPoint get_point1, agtTypPoint get_point2, agtTypColor get_rgb) 
{
	this->point1 = get_point1;
	this->point2 = get_point2;
	this->rgb = get_rgb;
}

void agtGpLine::update(agtTypPoint get_point1, agtTypPoint get_point2, agtTypColor get_rgb) 
{
	this->point1 = get_point1;
	this->point2 = get_point2;
	this->rgb = get_rgb;
}

void agtGpLine::draw() 
{
    glColor3f(this->rgb.r_get(), this->rgb.g_get(), this->rgb.b_get());
    glBegin(GL_LINES);
    glVertex2f(this->point1.get_x(), this->point1.get_y());
    glVertex2f(this->point2.get_x(), this->point2.get_y());
    glEnd();
    glFlush();
}
