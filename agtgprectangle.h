#ifndef AGTGPRECTANGLE_H
#define AGTGPRECTANGLE_H
#include "agtgraphicprimitiveifc.h"

class agtGpRectangle : public agtGraphicPrimitiveIfc {
  public:
    agtGpRectangle(int x1 = 5, int y1 = 7, int x2 = 10, int y2 = 12, int x3 = 15, int y3 = 7, int x4 = 20, int y4 = 12);
    void update(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4);
    void draw();

  private:
    int x1, y1;
    int x2, y2;
    int x3, y3;
    int x4, y4;
};

#endif // AGTGPRECTANGLE_H
