#ifndef AGTGPCIRCLE_H
#define AGTGPCIRCLE_H
#include "agtgraphicprimitiveifc.h"

class agtGpCircle : public agtGraphicPrimitiveIfc {
  public:
    agtGpCircle(int x1 = 5, int y1 = 7, int r = 10);
    void update(int x1, int y1, int r);
    void draw();

  private:
    int x1, y1;
    int r;
};

#endif // AGTGPCIRCLE_H
