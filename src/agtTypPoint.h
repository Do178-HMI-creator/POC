#ifndef AGTTYPPOINT_H
#define AGTTYPPOINT_H

class agtTypPoint {
  public:
    agtTypPoint(float x_in = 0.0, float y_in = 0.0);

    // Add
    agtTypPoint operator+=(agtTypPoint pnt);
    agtTypPoint operator+(agtTypPoint pnt);
    agtTypPoint operator+=(float num);
    agtTypPoint operator+(float num);

    // Subtract
    agtTypPoint operator-=(agtTypPoint pnt);
    agtTypPoint operator-(agtTypPoint pnt);
    agtTypPoint operator-=(float num);
    agtTypPoint operator-(float num);

    float x;
    float y;
};

#endif // !AGTTYPPOINT_H
