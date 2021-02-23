#ifndef AGTGPRECTANGLE_H
#define AGTGPRECTANGLE_H
#include "agtTypColor.h"
#include "agtTypPoint.h"
#include "agtgraphicprimitiveifc.h"

class agtGpRectangle : public agtGraphicPrimitiveIfc {
  public:
    agtGpRectangle(std::string name_c, agtTypPoint get_point1, agtTypPoint get_point2, agtTypPoint get_point3, agtTypPoint get_point4, agtTypColor get_rgb);
    void update(agtTypPoint get_point1, agtTypPoint get_point2, agtTypPoint get_point3, agtTypPoint get_point4, agtTypColor get_rgb);
    void update(std::string message) override;
    void draw() override;
    std::string getName() override;

  private:
    agtTypPoint point1;
    agtTypPoint point2;
    agtTypPoint point3;
    agtTypPoint point4;
    agtTypColor rgb;
};

#endif // AGTGPRECTANGLE_H
