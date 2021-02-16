#include "pch.h"
#include <iostream>
#include<GL/glut.h>
#include "point.h"

using namespace std;

point::point(int get_x, int get_y)
{
	this->x = get_x;
	this->y = get_y;
}

void point::draw()
{
	//glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0, 1.0, 0.0);

	glBegin(GL_POINTS);
	glVertex2f(x, y);
	
	glEnd();
	glFlush();
}

void point::update(int get_x, int get_y)
{
	this->x = get_x;
	this->y = get_y;
}