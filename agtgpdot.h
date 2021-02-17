#ifndef AGTGPDOT_H
#define AGTGPDOT_H
#include "agtgraphicprimitiveifc.h"
#include"agtTypPoint.h"

class agtGpDot : public agtGraphicPrimitiveIfc {
  public:
    agtGpDot(agtTypPoint get_point);
    void update(agtTypPoint get_point);
    void draw();

  private:
	  agtTypPoint point;
};

#endif // AGTGPDOT_H
