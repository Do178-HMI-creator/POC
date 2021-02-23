#ifndef AGTGPLINE_H
#define AGTGPLINE_H
#include "agtTypColor.h"
#include "agtTypPoint.h"
#include "agtgraphicprimitiveifc.h"

class agtGpLine : public agtGraphicPrimitiveIfc
{
  public:
    agtGpLine(std::string name_c, agtTypPoint get_point1, agtTypPoint get_point2, agtTypColor get_rgb);
    void update(agtTypPoint get_point1, agtTypPoint get_point2, agtTypColor get_rgb);
    void update(std::string message) override;
    void draw() override;
    std::string getName() override;

  private:
    agtTypPoint point1;
    agtTypPoint point2;
    agtTypColor rgb;
};

#endif // AGTGPLINE_H
