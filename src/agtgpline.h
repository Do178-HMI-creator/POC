#ifndef AGTGPLINE_H
#define AGTGPLINE_H
#include "agtgraphicprimitiveifc.h"
#include "agtTypPoint.h"

class agtGpLine : public agtGraphicPrimitiveIfc {
  public:
    agtGpLine(agtTypPoint get_point1, agtTypPoint get_point2);
    void update(agtTypPoint get_point1, agtTypPoint get_point2);
    void draw();

  private:
	  agtTypPoint point1;
	  agtTypPoint point2;
};

#endif // AGTGPLINE_H
