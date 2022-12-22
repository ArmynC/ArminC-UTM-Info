#include <iostream>
#include <gl/freeglut.h>
#include<math.h>
void display()
{
	//glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_TRIANGLES);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2i(1, 0);
	glVertex2i(0, 0);
	glVertex2i(0, 1);
	glEnd();
	glPointSize(10.0);
	glColor3f(1, 1, 1);
	glBegin(GL_POINTS);
	for (int i = 0; i < 10; i++) {
		glVertex3f(cos(2 * 3.141 * i / 10.0), sin(2 * 3.14 * i / 10.0), 0);
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
	glutCreateWindow("aplicatii");
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}