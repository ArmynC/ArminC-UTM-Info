#include <gl/freeglut.h>
#include <math.h>
int sectiuni_i = 10;
GLfloat Pi = 2 * 3.14;
GLfloat R = 0.9;
void init()
{
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glPointSize(50.0);
    glShadeModel(GL_FLAT);
}
void display()
{
	//float rad3=0.8;
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(1, 0, 0);
    R = 0.7;
    glVertex2f(0.0, 0.0);
    for (int i = 0; i <= sectiuni_i; ++i)
    {
        glVertex2f(R * cos(i * Pi / sectiuni_i), R * sin(i * Pi / sectiuni_i));
    }
    glEnd();
    R = 0.4;
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(1, 1, 0);
    glVertex2f(0.0, 0.0);
    for (int i = 0; i <= sectiuni_i; ++i)
    {
        glVertex2f(R * cos(i * Pi / sectiuni_i), R * sin(i * Pi / sectiuni_i));
    }
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(1, 0, 1);
    R = 0.1;
    glVertex2f(0.0, 0.0);
    for (int i = 0; i <= sectiuni_i; ++i)
    {
        glVertex2f(R * cos(i * Pi / sectiuni_i), R * sin(i * Pi / sectiuni_i));
    }
    glEnd();
    glFlush();
}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(400, 400);
    glutInitWindowPosition(400, 100);
    glutCreateWindow("GL_TRIANGLE_FAN");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
