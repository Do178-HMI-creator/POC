#ifndef AGTTYPPOINT_H
#define AGTTYPPOINT_H


class agtTypPoint{
	public:
		agtTypPoint(float x_c = 0.0, float y_c = 0.0);
		
		float get_x();
		float get_y();

		//Add
		agtTypPoint operator+=(agtTypPoint pnt);
		agtTypPoint operator+(agtTypPoint pnt);
		agtTypPoint operator+=(float num);		
		agtTypPoint operator+(float num);

		//Subtract
		agtTypPoint operator-=(agtTypPoint pnt);
		agtTypPoint operator-(agtTypPoint pnt);
		agtTypPoint operator-=(float num);		
		agtTypPoint operator-(float num);

	private:
		float x;
		float y;


};


#endif // !AGTTYPPOINT_H

