#include <iostream>
#include <math.h>
#include <GL/glut.h>
#include "Display.h"

using namespace std;

Display d;


int main(int argc, char* argv[]) {

    cout << "************ BOAT PROJECT (USING OpenGL) ************" << endl << endl;
    cout << "NAME       : MD. CHANCHAL BISWAS" << endl;
    cout << "ID         : 11210320654" << endl;
    cout << "SEMESTER   : SPRING 2022" << endl;
    cout << "DEPARTMENT : CSE" << endl;
    cout << "SECTION    : 2A" << endl << endl;
    cout << "*****************************************************" << endl << endl;


    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(d.width, d.height);
    glutInitWindowPosition(d.positionX, d.positionY);
    glutCreateWindow(d.displayName);

    glClearColor(d.bgR, d.bgG, d.bgB, d.bgA);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(d.coordinateX, d.coordinateXprime, d.coordinateY, d.coordinateYprime);

    glutDisplayFunc(d.getDisplay);
    glutMainLoop();


    return 0;
}
