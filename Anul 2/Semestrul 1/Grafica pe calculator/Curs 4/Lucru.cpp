#include <gl/freeglut.h>
int GAngle = 30;
void display(void) {
	glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity();
	glRotated(GAngle, 1, 1, 0);//face o rotatie a unghiului in jurul vectorilor x, y, z
	glColor3f(1, 1, 0);
	glTranslatef(0.3, -0.3, 0);
	glutWireCube(0.5);

	glScalef(1.5, 1.5, 1.5);
	glutWireCube(0.5);

	glLoadIdentity();
	glRotated(GAngle, 0, 1, 1);
	glTranslatef(0, 0.5, 0.5);
	glColor3f(1, 0, 0);
	glutSolidCube(0.2);

	glLoadIdentity();
	glRotated(GAngle, 0, 1, 0);
	glTranslatef(-0.3, -0.3, 0);
	glColor3f(0, 0.3, 1);
	glutWireTeapot(0.3);
	
	glLoadIdentity();
	glRotated(GAngle, 1, 1, 1);
	glColor3f(0.1, 0.3, 0.2);
	glutWireTorus(0.5, 0.4, 20, 10);

	glLoadIdentity();
	glRotated(GAngle, 1, 1, 1);
	glTranslatef(0.3, -0.3, 0);
	glColor3f(1, 1, 1);
	glutWireSphere(0.3, 10, 25);

	GAngle = GAngle + 1;
	glFlush();
}
void Timer(int extra) {
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

