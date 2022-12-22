//aplicatie puncte
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
	glVertex2d(200, 200);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2d(20.0, 20.0);
	glColor3f(1.0, 0.0, 1.0);
	glVertex2d(380.0, 20.0);
	glColor3f(0.5, 0.5, 0.0);
	glVertex2d(380.0, 380.0);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2d(20.0, 380.0);
	glEnd(); glFlush();
	
	glLineWidth(18);
	glColor3d(1.0, 0.7, 0.3);
	glBegin(GL_LINES);
	glVertex2d(0.0, 0.0);
	glVertex2d(400.0, 400.0);
	glEnd(); glFlush();

    glLineWidth(1);
	glColor3d(0.4, 0.4, 0.0);;
	glBegin(GL_LINES);
	glVertex2d(0.0, 400.0);
	glVertex2d(400.0, 0.0);
	glEnd(); glFlush();

}
void reshape(int w, int h)//functia redesenare 
{
	glViewport(0, 0, (GLsizei)w, (GLsizei)h);//stabilirea viewportului la dimensiunea  ferestrei
	glMatrixMode(GL_PROJECTION);//specificare matrice modificabila la valoare  argumentului de modificare
	glLoadIdentity();//initializarea sistemului de coordonate
	gluOrtho2D(0.0, (GLdouble)w, 0.0, (GLdouble)h);//stabileste volumul de vedere  folosind o proiectie ortografica
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