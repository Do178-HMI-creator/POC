#ifndef AGTGRAPHICPRIMITIVEIFC_H
#define AGTGRAPHICPRIMITIVEIFC_H
#include <string>
class agtGraphicPrimitiveIfc {
  public:
    virtual void draw() = 0;
    virtual std::string getName() = 0;
    virtual void update(std::string) = 0;

  protected:
    std::string name;
};

#endif // AGTGRAPHICPRIMITIVEIFC_H
