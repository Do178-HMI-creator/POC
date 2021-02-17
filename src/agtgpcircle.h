#ifndef AGTGPCIRCLE_H
#define AGTGPCIRCLE_H
#include "agtgraphicprimitiveifc.h"
#include "agtTypPoint.h"
#include "agtTypColor.h"

class agtGpCircle : public agtGraphicPrimitiveIfc {
  public:
    agtGpCircle(agtTypPoint get_centerPoint, agtTypColor get_rgb, int r = 10);
    void update(agtTypPoint get_centerPoint, agtTypColor get_rgb, int r);
    void draw();

  private:
	agtTypPoint centerPoint;	
	agtTypColor rgb;
    int r;	
};

#endif // AGTGPCIRCLE_H
