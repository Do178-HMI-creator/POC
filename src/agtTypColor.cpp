#include "agtTypColor.h"

agtTypColor::agtTypColor(float get_r, float get_g, float get_b)
{
	this->r = get_r;
	this->g = get_g;
	this->b = get_b;
}

float agtTypColor::r_get() 
	{
		return this->r;
	}

float agtTypColor::g_get()
	{
		return  this->g;
	}

float agtTypColor::b_get()
	{
		return this->b;
	}