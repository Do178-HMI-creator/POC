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
#include <algorithm>
#include <string>

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

agtGpDot my_agtGpDot(" ", point1, color2);
agtGpLine my_agtGpLine("", point1, point2, color5);
agtGpRectangle my_agtGpRectangle("", point2, point3, point4, point5, color7);
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
}



void MessageBroker() { agtMessageBroker myBroker; }

void notmain() {
    tree<agtGraphicPrimitiveIfc *> trr;
    tree<agtGraphicPrimitiveIfc *>::iterator topp, onee, twoo, locc, bananaa;
    topp = trr.begin();
    onee = trr.insert(topp, &my_agtGpDot1);
    twoo = trr.append_child(onee, &my_agtGpDot2);
    trr.append_child(twoo, &my_agtGpDot3);
    bananaa = trr.append_child(twoo, &my_agtGpDot4);
    trr.append_child(bananaa, &my_agtGpDot5);
    trr.append_child(twoo, &my_agtGpDot6);
    trr.append_child(onee, &my_agtGpDot7);

    locc = std::find(trr.begin(), trr.end(), &my_agtGpDot2);

    if (locc != trr.end()) {
        tree<agtGraphicPrimitiveIfc *>::sibling_iterator sibb = trr.begin(locc);
        while (sibb != trr.end(locc)) {
            std::cout << ((*sibb)->to_text()) << std::endl;
            ++sibb;
        }
        std::cout << std::endl;
        tree<agtGraphicPrimitiveIfc *>::iterator sibb2 = trr.begin();
        tree<agtGraphicPrimitiveIfc *>::iterator endd2 = trr.end();
        while (sibb2 != endd2) {
            for (int i = 0; i < trr.depth(sibb2) - 2; ++i)
                std::cout << " ";
            std::cout << ((*sibb2)->to_text()) << std::endl;
            (*sibb2)->draw();
            ++sibb2;
        }
    }
}
void display() {

    glClear(GL_COLOR_BUFFER_BIT);
    my_agtGpDot.draw();
    my_agtGpLine.draw();
    my_agtGpRectangle.draw();
    my_agtGpCircle.draw();
    notmain();
}
int main(int argc, char **argv) {

    std::thread Broker(MessageBroker);
    Broker.detach();

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(400 * 3, 300 * 3);
    glutCreateWindow("Proof of Concept Program");
    myinit();
    notmain();
    glutDisplayFunc(display);
    glutMainLoop();
}
