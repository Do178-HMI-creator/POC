#ifndef AGTGPCIRCLE_H
#define AGTGPCIRCLE_H
#include "agtgraphicprimitiveifc.h"
#include "agtTypPoint.h"

class agtGpCircle : public agtGraphicPrimitiveIfc {
  public:
    agtGpCircle(agtTypPoint get_centerPoint, int r = 10);
    void update(agtTypPoint get_centerPoint, int r);
    void draw();

  private:
	agtTypPoint centerPoint;
    int r;
};

#endif // AGTGPCIRCLE_H
