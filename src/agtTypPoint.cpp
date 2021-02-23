#include "agtTypPoint.h"
#include <GL/glut.h>

agtTypPoint::agtTypPoint(float x_in, float y_in)
{
    this->x = x_in;
    this->y = y_in;
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