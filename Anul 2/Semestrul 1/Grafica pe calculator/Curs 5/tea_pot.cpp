#include <gl/freeglut.h>
void Display()
{
    static float grade = -10;
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.1, 0.9, 1.0);
    glLoadIdentity();
    glPushMatrix();
    glRotatef(grade, 1, 0, 0);
    glutWireTorus(0.5, 0.4, 20, 10);
    glTranslated(0.5, 0, 0);
    glutWireTeapot(0.3);
    glPopMatrix();
    glFlush();
    grade = grade + 0.1;
    glutPostRedisplay();
}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
	//glutInitWindowSize(640, 480);
    glutInitWindowPosition(10, 10);
    glutCreateWindow("Teapot");
    glutDisplayFunc(Display);
    glutMainLoop();
    return 0;
}
