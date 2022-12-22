#include <gl/freeglut.h>
int GAngle = 30;
void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    glRotated(GAngle, 1, 1, 0);//face o rotatie a unghiului in jurul vectorilor x,y,z
    glColor3f(1, 0, 0);
    glutWireCube(1);//cub schelet
    GAngle = GAngle + 1;
    glFlush();
    glPushMatrix();
    glTranslated(-0.45, 0.0, 0.0);
    glRotated(15, 0.0, 1.0, 0.0);
    glColor3d(1.0, 1., 0.8);
	//glScaled(x, y, z);
    glutWireSphere(0.5, 10, 25);
    glPopMatrix(); // Pop matricea veche fără transformări.
    glPushMatrix(); // Setați matricea curentă pe stivă
	// glPushMatrix () este salvează ecranul curent pentru o stiva și glPopMatrix () este de a încărca datele din stivă
    glTranslated(0.45, 0.0, 0.0);
    glRotated(75, 1.0, 1, 0.0);
    glColor3d(1.0, 1.0, 0.0);
    glScaled(0.5, 0.5, 0.5);
    glutWireSphere(0.5, 25, 25);
    glPopMatrix();
    glFlush();
}
void Timer(int extra)
{
    glutPostRedisplay();//fereastra curenta este reafisata
    glutTimerFunc(10, Timer, 0);//seteaza timer-ul pentru fereastra curenta
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
	//glutInitWindowSize(640, 480);
    glutCreateWindow("cub rotativ");
    glutDisplayFunc(display);
    glutTimerFunc(0, Timer, 0);
    glutMainLoop();
    return 0;
}
