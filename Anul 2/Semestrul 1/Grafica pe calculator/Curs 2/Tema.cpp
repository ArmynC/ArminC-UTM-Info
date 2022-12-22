#include <iostream>
#include <gl/freeglut.h>
#include<math.h>
int width = 400;
int height = 400;
int psize = 40;
int distx = 0;
int disty = 0;
void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glPointSize(psize);
	glBegin(GL_POINTS);
	disty = 20;
	for (int k = 0; k < 3; k++)
	{
		distx = 20;
		for (int j = 0; j < 3; j++)
		{
			double r = ((double)rand() / (RAND_MAX));
			double g = ((double)rand() / (RAND_MAX));
			double b = ((double)rand() / (RAND_MAX));
			glColor3d(r, g, b);
			glVertex2i(40 * j + distx, 40 * k + disty);
		}
		disty += 0;
	}
	glEnd();
	glFlush();

	glBegin(GL_POINTS);
	disty = 200;
	for (int k = 0; k < 3; k++)
	{
		distx = 20;
		for (int j = 0; j < 3; j++)
		{
			double r = ((double)rand() / (RAND_MAX));
			double g = ((double)rand() / (RAND_MAX));
			double b = ((double)rand() / (RAND_MAX));
			glColor3d(r, g, b);
			glVertex2i(40 * j + distx, 40 * k + disty);
		}
		disty += 0;
	}

	glEnd();
	glFlush();


	glBegin(GL_POINTS);
	disty = 20;
	for (int k = 0; k < 3; k++)
	{
		distx = 200;
		for (int j = 0; j < 3; j++)
		{
			double r = ((double)rand() / (RAND_MAX));
			double g = ((double)rand() / (RAND_MAX));
			double b = ((double)rand() / (RAND_MAX));
			glColor3d(r, g, b);
			glVertex2i(40 * j + distx, 40 * k + disty);
		}
		disty += 0;
	}
	glEnd();
	glFlush();

	glBegin(GL_POINTS);
	disty = 200;
	for (int k = 0; k < 3; k++)
	{
		distx = 200;
		for (int j = 0; j < 3; j++)
		{
			double r = ((double)rand() / (RAND_MAX));
			double g = ((double)rand() / (RAND_MAX));
			double b = ((double)rand() / (RAND_MAX));
			glColor3d(r, g, b);
			glVertex2i(40 * j + distx, 40 * k + disty);
		}
		disty += 0;
	}
	glEnd();
	glFlush();
}
void reshape(int w, int h)
{
	glViewport(0, 0, (GLsizei)w, (GLsizei)h); //stabilirea viewportului la dimensiunea  ferestrei
	glMatrixMode(GL_PROJECTION); //specificare matrice modificabila la valoare argumentului de modificare
	glLoadIdentity(); //initializarea sistemului de coordonate
	gluOrtho2D(0.0, (GLdouble)w, 0.0, (GLdouble)h); //stabileste volumul de vedere folosind o proiectie ortografica
}//end reshape()
int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(400, 300);
	glutCreateWindow("Puncte");
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutMainLoop();
	return 0;
}
