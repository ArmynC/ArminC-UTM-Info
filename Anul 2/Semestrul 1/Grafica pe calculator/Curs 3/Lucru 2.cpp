#include <iostream>
#include <gl/freeglut.h>
//puncte.cpp
void init()
{
	glClearColor(0.0, 0.0, 0.0, 0.0);
	//glPointSize(40.0);
}
void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glLineWidth(1);
	glColor3f(1, 0, 0);
	float linii = 50;

	glBegin(GL_LINES);
	for (int i = 0; i <= linii; ++i)
	{
		glVertex3f(0, 0, 0); //x,y,z//
		glVertex3f(1 - (float(i / linii)), (float(i / linii)), 0); //1,0,0
	}

	glColor3f(0, 1, 0);
	for (int i = 0; i <= linii; ++i)
	{
		glVertex3f(0, 0, 0); //x,y,z//
		glVertex3f(-1 + (float(i / linii)), (float(i / linii)), 0); //1,0,0
	}

	glColor3f(0, 0, 1);
	for (int i = 0; i <= linii; ++i)
	{
		glVertex3f(0, 0, 0); //x,y,z//
		glVertex3f(-1 + (float(i / linii)), -(float(i / linii)), 0); //1,0,0
	}

	glColor3f(1, 0, 1);
	for (int i = 0; i <= linii; ++i)
	{
		glVertex3f(0, 0, 0); //x,y,z//
		glVertex3f(1 - (float(i / linii)), -(float(i / linii)), 0); //1,0,0
	}

	glEnd();
	glFlush();

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
	glutInitWindowPosition(150, 150);
	glutCreateWindow("puncte");
	init();
	glutDisplayFunc(display);
	//glutReshapeFunc(reshape);
	glutMainLoop();
}