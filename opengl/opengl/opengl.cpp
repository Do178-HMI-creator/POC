// opengl.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "pch.h"
#include<GL/glut.h>
#include "line.h"
#include "point.h"
#include "rectangle.h"
#include <iostream>



void myinit() {
	glClearColor(0.0, 0.0, 0.0, 1.0);
	glColor3f(1.0, 1.0, 0.0);
	glPointSize(9.0);
	glLineWidth(3.0);
	
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 499.0, 0.0, 499.0);
}

void display()
{
	line deneme_line(123, 234, 333, 234);
	point deneme_point(145, 188);
	rectangle deneme_rectangle(100, 150, 250, 150, 250, 344, 100, 344);


	deneme_line.draw();
	deneme_point.draw();
	deneme_rectangle.draw();
	

}

void main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(900, 900);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("line");
	
	
	glutDisplayFunc(display);
	myinit();
	glutMainLoop();

	
}
