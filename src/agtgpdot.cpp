#include "agtgpdot.h"
#include <GL/glut.h>

agtGpDot::agtGpDot(agtTypPoint get_point, agtTypColor get_rgb) 
{
	this->point = get_point;
	this->rgb = get_rgb;
}

void agtGpDot::update(agtTypPoint get_point, agtTypColor get_rgb) 
{
	this->point = get_point;
	this->rgb = get_rgb;
}

void agtGpDot::draw() 
{
    glColor3f(this->rgb.r_get(), this->rgb.g_get(), this->rgb.b_get());
    glBegin(GL_POINTS);
    glVertex2f(this->point.get_x(),this->point.get_y());
    glEnd();
    glFlush();
}
