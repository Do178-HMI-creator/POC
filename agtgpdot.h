#ifndef AGTGPDOT_H
#define AGTGPDOT_H
#include "agtgraphicprimitiveifc.h"

class agtGpDot : public agtGraphicPrimitiveIfc {
  public:
    agtGpDot(int get_x, int get_y);
    void update(int get_x, int get_y);
    void draw();

  private:
    int x;
    int y;
};

#endif // AGTGPDOT_H
