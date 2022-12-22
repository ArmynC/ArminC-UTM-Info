#include <iostream>
#include <gl/freeglut.h>
int dist, i;
//puncte.cpp
void init()
{
	glClearColor(0.0, 0.0, 0.0, 0.0);
	//glPointSize(40.0);
}
void display()
{
	glColor3f(1.0, 1.0, 0.0);
	glPointSize(40.0);
	glBegin(GL_POINTS);
	glVertex2i(20, 20);
	glColor3f(1, 1, 1);
	glVertex2i(380, 20);
	glVertex2i(20, 380);
	glColor3f(1, 0, 1);
	glVertex2i(200, 200);
	glColor3f(0, 0, 1);
	glVertex2i(380, 380);
	glEnd(); glFlush();

	glLineWidth(10);
	glBegin(GL_LINES);
	glColor3f(1, 0, 1);

	glVertex2i(0, 0);
	glVertex2i(400, 400);
	glEnd(); glFlush();

	glLineWidth(20);
	glBegin(GL_LINES);
	glColor3f(0, 1, 0);

	glVertex2i(0, 400);
	glVertex2i(400, 0);
	glEnd(); glFlush();
	/*for (dist = 0, i = 1; i <= 3; i++)
	{
		glVertex2i(20 * i + dist, 20);
		dist += 40;//y
	}*/
	glEnd(); glFlush();
}
void reshape(int w, int h)//functia redesenare
{
	glViewport(0, 0, (GLsizei)w, (GLsizei)h);//stabilirea viewportului la dimensiunea ferestrei
	glMatrixMode(GL_PROJECTION);//specificare matrice modificabila la valoare argumentului de modificare
	glLoadIdentity();//initializarea sistemului de coordonate
	gluOrtho2D(0.0, (GLdouble)w, 0.0, (GLdouble)h);//stabileste volumul de vedere folosind o proiectie ortografica
}
void main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(400, 400);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("puncte");
	init();
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutMainLoop();
}
