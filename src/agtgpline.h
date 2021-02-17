#ifndef AGTGPLINE_H
#define AGTGPLINE_H
#include "agtgraphicprimitiveifc.h"
#include "agtTypPoint.h"
#include "agtTypColor.h"

class agtGpLine : public agtGraphicPrimitiveIfc {
  public:
    agtGpLine(agtTypPoint get_point1, agtTypPoint get_point2, agtTypColor get_rgb);
    void update(agtTypPoint get_point1, agtTypPoint get_point2, agtTypColor get_rgb);
    void draw();

  private:
	  agtTypPoint point1;
	  agtTypPoint point2;
	  agtTypColor rgb;
};

#endif // AGTGPLINE_H
