#ifndef _LINE
#define _LINE

#include <iostream>

using namespace std;

class line {
public:
	int x_start;
	int x_final;
	int y_start;
	int y_final;

	line(int get_x1=123, int get_y1=234, int get_x2=123, int get_y2=455);

	void draw();

	void update(int get_x1, int get_y1, int get_x2, int get_y2);

};




#endif // !_LINE