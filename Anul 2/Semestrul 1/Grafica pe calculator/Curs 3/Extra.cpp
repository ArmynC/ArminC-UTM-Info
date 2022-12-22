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
	glLineWidth(10);
	glBegin(GL_TRIANGLE_FAN);//initializare linie
	glColor3f(0.5, 0, 0.5);
	glVertex2f(200, 200); //stabilire coordonate triunghi
	glVertex2f(0, 400);
	glVertex2f(200, 400);
	glColor3f(1, 0, 0);
	//glVertex2f(400, 400);
	glVertex2f(0, 0);
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
	glutReshapeFunc(reshape);
	glutMainLoop();
}
