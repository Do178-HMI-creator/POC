#ifndef AGTOBJECTTREE_H
#define AGTOBJECTTREE_H
#include "agtgraphicprimitiveifc.h"
#include "tree.h"
#include <map>

class agtObjectTree
{
  public:
    agtObjectTree();

    agtGraphicPrimitiveIfc *find(std::string);
    tree<agtGraphicPrimitiveIfc *>::iterator find2(std::string);
    void insert(std::string, agtGraphicPrimitiveIfc *);
    // todo: remove
    tree<agtGraphicPrimitiveIfc *> obj_tree;

  private:
    tree<agtGraphicPrimitiveIfc *>::iterator top, loc;
    std::map<std::string, agtGraphicPrimitiveIfc *> object_map;
};

#endif // AGTOBJECTTREE_H
