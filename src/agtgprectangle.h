#ifndef AGTGPRECTANGLE_H
#define AGTGPRECTANGLE_H
#include "agtgraphicprimitiveifc.h"
#include "agtTypPoint.h"

class agtGpRectangle : public agtGraphicPrimitiveIfc {
  public:
    agtGpRectangle(agtTypPoint get_point1, agtTypPoint get_point2, agtTypPoint get_point3, agtTypPoint get_point4);
    void update(agtTypPoint get_point1, agtTypPoint get_point2, agtTypPoint get_point3, agtTypPoint get_point4);
    void draw();

  private:
	  agtTypPoint point1;
	  agtTypPoint point2;
	  agtTypPoint point3;
	  agtTypPoint point4;
};

#endif // AGTGPRECTANGLE_H
