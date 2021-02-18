#ifndef AGTTYPCOLOR_H
#define AGTTYPCOLOR_H

class agtTypColor {
  public:
    agtTypColor(float get_r = 0.0, float get_g = 0.0, float get_b = 0.0);

    float r_get();
    float g_get();
    float b_get();
    float r, g, b;
};

#endif // !AGTTYPCOLOR_H
