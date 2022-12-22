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
	int nr1 = 40;
	int nr2 = 560;
	int pas = 0;
	int i;

	for ( i = 1; i <= 4; i++)
	{

		glLineWidth(10);
		glBegin(GL_LINE_LOOP);
		glColor3f(0, 0, 0.5);
		glVertex2i(nr1 + pas, nr1 + pas);
		glVertex2i(nr1 + pas, nr2 - pas);
		glVertex2i(nr2 - pas, nr2 - pas);
		glVertex2i(nr2 - pas, nr1 + pas);
		pas =pas+ 40.0;
		glEnd(); glFlush();
	}


}

void reshape(int w, int h)//functia redesenare 
{
	glViewport(0, 0, (GLsizei)w, (GLsizei)h);//stabilirea viewportului la dimensiunea  	ferestrei
	glMatrixMode(GL_PROJECTION);//specificare matrice modificabila la valoare  	argumentului de modificare
	glLoadIdentity();//initializarea sistemului de coordonate
	gluOrtho2D(0.0, (GLdouble)w, 0.0, (GLdouble)h);//stabileste volumul de vedere  folosind o proiectie ortografica
}
void main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(600, 600);
	glutInitWindowPosition(150, 150);
	glutCreateWindow("puncte");
	init();
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutMainLoop();
}