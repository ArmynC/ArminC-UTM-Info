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
	glColor3f(1.0, 1.0, 0.0);
	glBegin(GL_POLYGON);//initializare desen poligon
	glVertex2f(0.0, 0.0); //stabilire coordonate triunghi
	glVertex2f(200.0, 200.0);
	glVertex2f(0.0, 200.0);
	glEnd();
	glFlush();

	glColor3f(1.0, 0, 0.0);
	glBegin(GL_POLYGON);//initializare desen poligon
	glVertex2f(200, 200); //stabilire coordonate triunghi
	glVertex2f(200.0, 0);
	glVertex2f(400, 0);
	glEnd();
	glFlush();

	glColor3f(0, 1, 0.0);
	glBegin(GL_POLYGON);//initializare desen poligon
	glVertex2f(200, 200); //stabilire coordonate triunghi
	glVertex2f(400, 400);
	glVertex2f(200, 400);
	glEnd();
	glFlush();

	glColor3f(0, 0, 1);
	glBegin(GL_POLYGON);//initializare desen poligon
	glVertex2f(0, 400); //stabilire coordonate triunghi
	glVertex2f(200, 200);
	glVertex2f(200, 400);
	glEnd();
	glFlush();

	glLineWidth(10);
	glBegin(GL_LINE_LOOP);//initializare linie
	glColor3f(0, 0, 0.5);
	glVertex2f(200, 200); //stabilire coordonate triunghi
	glVertex2f(200.0, 0);
	glVertex2f(400, 0);
	glEnd();
	glFlush();

	glLineWidth(10);
	glBegin(GL_LINE_LOOP);//initializare linie
	glColor3f(1, 0.5, 0);
	glVertex2f(200, 200); //stabilire coordonate triunghi
	glVertex2f(200, 400);
	glVertex2f(400, 400);
	glEnd();
	glFlush();

	glLineWidth(10);
	glBegin(GL_LINE_LOOP);//initializare linie
	glColor3f(0.5, 0, 0.5);
	glVertex2f(200, 200); //stabilire coordonate triunghi
	glVertex2f(0, 400);
	glVertex2f(200, 400);
	glEnd();
	glFlush();

	/*
	glPointSize(40.0);
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_POINTS);
	glVertex2i(300, 300);
	glVertex2i(20, 20);
	glEnd(); glFlush();
	*/
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
	glutReshapeFunc(reshape);
	glutMainLoop();
}