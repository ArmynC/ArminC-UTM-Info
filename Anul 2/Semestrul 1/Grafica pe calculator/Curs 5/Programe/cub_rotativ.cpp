#include <gl/freeglut.h>
int GAngle = 30;
void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    glRotated(GAngle, 1, 1, 0);//face o rotatie a unghiului in jurul vectorilor x,y,z
    glColor3f(1, 0, 0);
    glutWireCube(1);
	//glutWireTeapot(0.3);
    GAngle = GAngle + 1;
    glFlush();
}
void Timer(int extra)
{
    glutPostRedisplay();//fereastra curenta este reafisata
    glutTimerFunc(30, Timer, 0);//seteaza timer-ul pentru fereastra curenta
}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutCreateWindow("cub rotativ");
    glutDisplayFunc(display);
    glutTimerFunc(0, Timer, 0);//????
    glutMainLoop();
    return 0;
}
