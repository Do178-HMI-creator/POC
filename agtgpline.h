#ifndef AGTGPLINE_H
#define AGTGPLINE_H
#include "agtgraphicprimitiveifc.h"

class agtGpLine : public agtGraphicPrimitiveIfc {
  public:
    agtGpLine(int get_x1 = 123, int get_y1 = 234, int get_x2 = 123, int get_y2 = 455);
    void update(int get_x1, int get_y1, int get_x2, int get_y2);
    void draw();

  private:
    int x_start;
    int x_final;
    int y_start;
    int y_final;
};

#endif // AGTGPLINE_H
