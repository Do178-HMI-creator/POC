#ifndef AGTGPDOT_H
#define AGTGPDOT_H
#include "agtTypColor.h"
#include "agtTypPoint.h"
#include "agtgraphicprimitiveifc.h"
#include <vector>

class agtGpDot : public agtGraphicPrimitiveIfc {
  public:
    agtGpDot(std::string name_c, agtTypPoint get_point, agtTypColor get_rgb);
    void update(agtTypPoint get_point, agtTypColor get_rgb);
    void update(std::string message);
    void draw();
    std::string to_text();

  private:
    agtTypPoint point;
    agtTypColor rgb;
    std::vector<std::string> split(const std::string s, char delimiter);
};

#endif // AGTGPDOT_H
