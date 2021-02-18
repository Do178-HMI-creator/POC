#ifndef AGTGRAPHICPRIMITIVEIFC_H
#define AGTGRAPHICPRIMITIVEIFC_H
#include <string>
class agtGraphicPrimitiveIfc {
  public:
    virtual void draw() = 0;
    virtual std::string to_text() = 0;

  protected:
    std::string name;
};

#endif // AGTGRAPHICPRIMITIVEIFC_H
