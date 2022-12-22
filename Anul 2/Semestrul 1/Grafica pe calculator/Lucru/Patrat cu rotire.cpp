// Echipa Wallach Luke & Chanchian Armin Andrei - grupa 101

#include <GL/glut.h>
#include <iostream>
using namespace std;

GLfloat rx = 0, ry = 0;

// forma patrat
void patrat(void)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glEnable(GL_DEPTH_TEST);

    glBegin(GL_POLYGON);
    glColor3f(0.0, 1.0, 0.0);
    glVertex3f(1.0, 1.0, 1.0);
    glVertex3f(-1.0, 1.0, 1.0);
    glVertex3f(-1.0, 1.0, -1.0);
    glVertex3f(1.0, 1.0, -1.0);

    glEnd();
    glutSwapBuffers();

}
void rotire(unsigned char key, int x, int y)
{
    glLoadIdentity();
    gluLookAt(0, 0, 3, 0, 0, 0, 0, 2, 0);
    
    // taste - rotire 10*
    switch (key) {
    case 'a':  ry += 10;
        glRotatef(rx, 1, 0, 0);  
        glRotatef(ry, 0, 1, 0);
        break;
    case 'd':  ry -= 10;
        glRotatef(rx, 1, 0, 0);  
        glRotatef(ry, 0, 1, 0);
        break;
    case 'w':  rx += 10;
        glRotatef(rx, 1, 0, 0); 
        glRotatef(ry, 0, 1, 0); 
        break;
    case 's':  rx -= 10;
        glRotatef(rx, 1, 0, 0); 
        glRotatef(ry, 0, 1, 0); 
        break;
    }
    
    patrat();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(400, 400);
    glutInitWindowPosition(300, 150);
    glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE);

    glutCreateWindow("Tema - Wallach Luke & Chanchian Armin Andrei");
    glutKeyboardFunc(rotire);

    glClearColor(1.0, 1.0, 1.0, 1.0);

    glMatrixMode(GL_PROJECTION);
    gluPerspective(100, 1.5, 1, 10);
    glMatrixMode(GL_MODELVIEW);

    glPushMatrix();
    glutMainLoop();
    return 0;
}