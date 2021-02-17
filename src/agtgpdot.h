#ifndef AGTGPDOT_H
#define AGTGPDOT_H
#include "agtgraphicprimitiveifc.h"
#include "agtTypPoint.h"
#include "agtTypColor.h"

class agtGpDot : public agtGraphicPrimitiveIfc {
  public:
    agtGpDot(agtTypPoint get_point, agtTypColor get_rgb);
    void update(agtTypPoint get_point, agtTypColor get_rgb);
    void draw();

  private:
	  agtTypPoint point;
	  agtTypColor rgb;
};

#endif // AGTGPDOT_H
