#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

#include <iostream>
#include <thread>

#include "agtTypColor.h"
#include "agtTypPoint.h"
#include "agtgpcircle.h"
#include "agtgpdot.h"
#include "agtgpline.h"
#include "agtgprectangle.h"
#include "agtmessagebroker.h"
#include "tree.h"
#include "agtobjecttree.h"
#include <algorithm>
#include <string>
agtObjectTree myTree= agtObjectTree();
agtTypPoint point1(23, 245);
agtTypPoint point2(145, 245);
agtTypPoint point3(195, 245);
agtTypPoint point4(195, 295);
agtTypPoint point5(145, 295);
agtTypPoint point6(146, 306);
agtTypPoint point7(147, 307);

agtTypColor color1(0.0, 0.0, 0.0); // black
agtTypColor color2(1.0, 0.0, 0.0); // red
agtTypColor color3(0.0, 1.0, 0.0); // green
agtTypColor color4(0.0, 0.0, 1.0); // blue
agtTypColor color5(1.0, 1.0, 0.0); // yellow
agtTypColor color6(1.0, 0.0, 1.0); // pink
agtTypColor color7(0.0, 1.0, 1.0); // cyan
agtTypColor color8(1.0, 1.0, 1.0); // white

agtGpDot my_agtGpDot("my_agtGpDot", point1, color2);
agtGpLine my_agtGpLine("my_agtGpLine", point1, point2, color5);
agtGpRectangle my_agtGpRectangle("my_agtGpRectangle", point2, point3, point4, point5, color7);
agtGpCircle my_agtGpCircle("my_agtGpCircle", point3, color4, 75);
agtGpDot my_agtGpDot1("my_agtGpDot1", point1, color1);
agtGpDot my_agtGpDot2("my_agtGpDot2", point2, color2);
agtGpDot my_agtGpDot3("my_agtGpDot3", point3, color3);
agtGpDot my_agtGpDot4("my_agtGpDot4", point4, color4);
agtGpDot my_agtGpDot5("my_agtGpDot5", point5, color5);
agtGpDot my_agtGpDot6("my_agtGpDot6", point6, color6);
agtGpDot my_agtGpDot7("my_agtGpDot7", point7, color7);

void myinit() {
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 499.0, 0.0, 499.0);
    myTree.insert("root", &my_agtGpCircle);
    myTree.insert("root", &my_agtGpDot1);
    myTree.insert("root", &my_agtGpDot2);
    myTree.insert("root", &my_agtGpDot3);
    myTree.insert("my_agtGpDot3", &my_agtGpDot4);
    myTree.insert("root", &my_agtGpDot5);
    myTree.insert("root", &my_agtGpDot6);
    myTree.insert("root", &my_agtGpDot7);
    myTree.insert("root", &my_agtGpRectangle);
    myTree.insert("root", &my_agtGpLine);
    myTree.insert("root", &my_agtGpDot);


}

void MessageBroker() { agtMessageBroker myBroker; }

void display() {

    glClear(GL_COLOR_BUFFER_BIT);
    tree<agtGraphicPrimitiveIfc *>::iterator sibb2 = myTree.obj_tree.begin();
    tree<agtGraphicPrimitiveIfc *>::iterator endd2 = myTree.obj_tree.end();
    while (sibb2 != endd2) {
        (*sibb2)->draw();
        ++sibb2;
    }
}
int main(int argc, char **argv) {

    std::thread Broker(MessageBroker);
    Broker.detach();

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(400 * 3, 300 * 3);
    glutCreateWindow("Proof of Concept Program");
    myinit();
    glutDisplayFunc(display);
    glutMainLoop();
}
