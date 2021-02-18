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
#include "agtobjecttree.h"
#include "tree.h"

agtObjectTree myTree = agtObjectTree();
agtTypPoint point1(150, 230);
agtTypPoint point2(350, 230);
agtTypPoint point3(250, 250);
agtTypPoint point4(200, 200);
agtTypPoint point5(200, 300);
agtTypPoint point6(300, 200);
agtTypPoint point7(300, 300);

agtTypColor color1(1.0, 1.0, 0.0); // yellow
agtTypColor color2(1.0, 1.0, 1.0); // white
agtTypColor color3(1.0, 0.0, 0.0); // red
agtTypColor color4(1.0, 0.0, 1.0); // pink
agtTypColor color5(0.0, 1.0, 0.0); // green
agtTypColor color6(0.0, 1.0, 1.0); // cyan
agtTypColor color7(0.0, 0.0, 0.0); // black
agtTypColor color8(0.0, 0.0, 1.0); // blue

agtGpLine my_agtGpLine("my_agtGpLine", point1, point2, color5);
agtGpCircle my_agtGpCircle("my_agtGpCircle", point3, color4, 75);
agtGpRectangle my_agtGpRectangle("my_agtGpRectangle", point4, point5, point7, point6, color8);

agtGpDot my_agtGpDot("my_agtGpDot", point1, color2);
agtGpDot my_agtGpDot1("my_agtGpDot1", point1, color1);
agtGpDot my_agtGpDot2("my_agtGpDot2", point2, color2);
agtGpDot my_agtGpDot3("my_agtGpDot3", point3, color3);
agtGpDot my_agtGpDot4("my_agtGpDot4", point4, color4);
agtGpDot my_agtGpDot5("my_agtGpDot5", point5, color5);
agtGpDot my_agtGpDot6("my_agtGpDot6", point6, color6);
agtGpDot my_agtGpDot7("my_agtGpDot7", point7, color8);

void myinit() {
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 499.0, 0.0, 499.0);
    myTree.insert("root", &my_agtGpLine);
    myTree.insert("root", &my_agtGpCircle);
    myTree.insert("root", &my_agtGpRectangle);
    myTree.insert("root", &my_agtGpDot);
    myTree.insert("root", &my_agtGpDot1);
    myTree.insert("root", &my_agtGpDot2);
    myTree.insert("root", &my_agtGpDot3);
    myTree.insert("root", &my_agtGpDot4);
    myTree.insert("root", &my_agtGpDot5);
    myTree.insert("root", &my_agtGpDot6);
    myTree.insert("root", &my_agtGpDot7);
}

void MessageBroker() { agtMessageBroker myBroker; }

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    tree<agtGraphicPrimitiveIfc *>::iterator begin = myTree.obj_tree.begin();
    tree<agtGraphicPrimitiveIfc *>::iterator end = myTree.obj_tree.end();
    while (begin != end) {
        std::cout << (*begin)->to_text() << std::endl;
        (*begin)->draw();
        ++begin;
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
