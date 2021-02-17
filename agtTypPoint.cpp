#include "agtTypPoint.h"
#include <GL/glut.h>

agtTypPoint::agtTypPoint(float x_c, float y_c)
{
	this->x = x_c;
	this->y = y_c;
}

agtTypPoint agtTypPoint::operator+=(agtTypPoint pnt)
{
	(*this).x += pnt.x; 
	(*this).y += pnt.y; 
	return (*this);
}

agtTypPoint agtTypPoint::operator+(agtTypPoint pnt)
{
	agtTypPoint temp;
	temp.x = (*this).x + pnt.x;
	temp.y = (*this).y + pnt.y;
	return temp;
}

agtTypPoint agtTypPoint::operator+=(float num)
{
	(*this).x += num; 
	(*this).y += num; 
	return (*this);
}

agtTypPoint agtTypPoint::operator+(float num)
{
	agtTypPoint temp;
	temp.x = (*this).x + num;
	temp.y = (*this).y + num;
	return temp;	
}

agtTypPoint agtTypPoint::operator-=(agtTypPoint pnt)
{
	(*this).x -= pnt.x;
	(*this).y -= pnt.y; 
	return (*this);
}

agtTypPoint agtTypPoint::operator-(agtTypPoint pnt)
{
	agtTypPoint temp;
	temp.x = (*this).x - pnt.x;
	temp.y = (*this).y - pnt.y;
	return temp;
}

agtTypPoint agtTypPoint::operator-=(float num)
{
	(*this).x -= num; 
	(*this).y -= num; 
	return (*this);
}

agtTypPoint agtTypPoint::operator-(float num)
{
	agtTypPoint temp;
	temp.x = (*this).x - num;
	temp.y = (*this).y - num;
	return temp;	
}