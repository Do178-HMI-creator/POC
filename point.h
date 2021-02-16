#ifndef _POINT
#define _POINT

#include <iostream>

using namespace std;

class point {

public:
	int x;
	int y;

	point(int get_x, int get_y);

	void draw();

	void update(int get_x, int get_y);

};



#endif // !_POINT
