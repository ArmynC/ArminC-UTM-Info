#include <iostream>
#include <gl/freeglut.h>
using namespace std;
void Display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0, 1, 0);
	glBegin(GL_LINES);
	// Cadran 1
	for (int i = 0; i < 20; i++)
	{
		glVertex3f(0, 0, 0);
		glVertex3f(1 - i / 20.0, i / 20.0, 0);
	} // Cadran 2
	glColor3f(1, 0.4, 0);
	for (int i = 0; i < 20; i++)
	{
		glVertex3f(0, 0, 0);
		glVertex3f(-1 + i / 20.0, i / 20.0, 0);
	} // Cadran 3
	glColor3f(1, 0.4, 1);
	for (int i = 0; i < 20; i++)
	{
		glVertex3f(0, 0, 0);
		glVertex3f(-1 + i / 20.0, -i / 20.0, 0);
	}
	// Cadran 4
	glColor3f(0.8, 0.4, 0.2);
	for (int i = 0; i < 20; i++)
	{
		glVertex3f(0, 0, 0);
		glVertex3f(1 - i / 20.0, -i / 20.0, 0);
	}
	glEnd(); glFlush(); glColor3f(0, 0, 1);
}
int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(600, 600);
	//se specifica modelul de culoare al ferestrei: un singur buffer si culoare RGB
	glutCreateWindow("laborator 2");
	glutDisplayFunc(Display);
	glutMainLoop();
	return 0;
}

