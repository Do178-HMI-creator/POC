#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

#include <iostream>

#include "agtTypPoint.h"
#include "agtgpdot.h"
#include "agtgpline.h"
#include "agtgprectangle.h"
#include "agtgpcircle.h"
#include "pch.h"

void myinit() 
{
	glMatrixMode(GL_PROJECTION);	
	glLoadIdentity();
	gluOrtho2D(0.0, 499.0, 0.0, 499.0);
}

void display() 
{
	agtTypPoint point1(23, 245);
	agtTypPoint point2(145, 245);
	agtTypPoint point3(195, 245);
	agtTypPoint point4(195, 295);
	agtTypPoint point5(145, 295);

	agtGpDot my_agtGpDot(point1);
	agtGpLine my_agtGpLine(point1, point2);
	agtGpRectangle my_agtGpRectangle(point2,point3,point4,point5);
	agtGpCircle my_agtGpCircle(point5, 125);

	
	glClear(GL_COLOR_BUFFER_BIT);	 
	my_agtGpDot.draw();
	my_agtGpLine.draw();
	my_agtGpRectangle.draw();
	my_agtGpCircle.draw();
}

int main(int argc, char **argv) 
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(400 * 3, 300 * 3);
	// glutInitWindowPosition(0, 0);
	glutCreateWindow("Proof of Concept Program");
	myinit();
	glutDisplayFunc(display);
	glutMainLoop();
}
