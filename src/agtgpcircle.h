#ifndef AGTGPCIRCLE_H
#define AGTGPCIRCLE_H
#include "agtTypColor.h"
#include "agtTypPoint.h"
#include "agtgraphicprimitiveifc.h"

class agtGpCircle : public agtGraphicPrimitiveIfc {
  public:
    agtGpCircle(std::string name_c, agtTypPoint get_centerPoint, agtTypColor get_rgb, int r = 10);
    void update(agtTypPoint get_centerPoint, agtTypColor get_rgb, int r);
    void draw();
    std::string to_text();

  private:
    agtTypPoint centerPoint;
    agtTypColor rgb;
    int r;
};

#endif // AGTGPCIRCLE_H
