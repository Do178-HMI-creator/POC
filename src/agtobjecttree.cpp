#include "agtobjecttree.h"
#include "agtgpdot.h"
#include "agtgraphicprimitiveifc.h"
#include "tree.h"
#include <iostream>

agtObjectTree::agtObjectTree() {
    agtGpDot *first_dot = new agtGpDot("root", agtTypPoint(0, 0), agtTypColor(1, 0, 0));
    obj_tree.insert(obj_tree.begin(), first_dot);
}
tree<agtGraphicPrimitiveIfc *>::iterator agtObjectTree::find2(std::string obj_name) {
    tree<agtGraphicPrimitiveIfc *>::iterator start = obj_tree.begin();
    tree<agtGraphicPrimitiveIfc *>::iterator end = obj_tree.end();
    while (start != end) {
        std::cout << (start.node->data)->to_text() << std::endl;
        if (!(start.node->data)->to_text().compare(obj_name))
            return (start);
        ++start;
    }
    return nullptr;
}

agtGraphicPrimitiveIfc *agtObjectTree::find(std::string obj_name) { return object_map[obj_name]; }
void agtObjectTree::insert(std::string parent_name, agtGraphicPrimitiveIfc *obj) {

    obj_tree.append_child(find2(parent_name), obj);
    object_map[(*obj).to_text()] = obj;
}