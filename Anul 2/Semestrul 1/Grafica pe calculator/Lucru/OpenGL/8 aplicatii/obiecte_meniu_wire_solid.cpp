#include <GL/freeglut.h>

// initializare variable
int meniu_afisare;
int obiect = 1;
int meniu_obiecte;


// stilul de randare (wireframe sau solid)
int stil_afisare = GL_FILL;

// functie care afiseaza un cub
void afisare_cub() {
	glBegin(GL_QUADS);

	// latura din fata
	glColor3f(1.0, 0.0, 0.0);
	glVertex3f(-1.0, -1.0, 1.0);
	glVertex3f(1.0, -1.0, 1.0);
	glVertex3f(1.0, 1.0, 1.0);
	glVertex3f(-1.0, 1.0, 1.0);

	// latura din dreapta
	glColor3f(0.0, 1.0, 0.0);
	glVertex3f(1.0, -1.0, 1.0);
	glVertex3f(1.0, -1.0, -1.0);
	glVertex3f(1.0, 1.0, -1.0);
	glVertex3f(1.0, 1.0, 1.0);

	// latura din spate
	glColor3f(0.0, 0.0, 1.0);
	glVertex3f(1.0, -1.0, -1.0);
	glVertex3f(-1.0, -1.0, -1.0);
	glVertex3f(-1.0, 1.0, -1.0);
	glVertex3f(1.0, 1.0, -1.0);

	// latura din stanga
	glColor3f(1.0, 1.0, 0.0);
	glVertex3f(-1.0, -1.0, -1.0);
	glVertex3f(-1.0, -1.0, 1.0);
	glVertex3f(-1.0, 1.0, 1.0);
	glVertex3f(-1.0, 1.0, -1.0);

	// latura superioara
	glColor3f(0.0, 1.0, 1.0);
	glVertex3f(-1.0, 1.0, 1.0);
	glVertex3f(1.0, 1.0, 1.0);
	glVertex3f(1.0, 1.0, -1.0);
	glVertex3f(-1.0, 1.0, -1.0);

	// latura inferioara
	glColor3f(1.0, 0.0, 1.0);
	glVertex3f(-1.0, -1.0, 1.0);
	glVertex3f(1.0, -1.0, 1.0);
	glVertex3f(1.0, -1.0, -1.0);
	glVertex3f(-1.0, -1.0, -1.0);
	glEnd();
}

// functie care afiseaza o sfera
void afisare_sfera() {
	glutSolidSphere(1.0, 20, 20);
}

// functie care afiseaza un cilindru
void afisare_cilindru() {
	GLUquadric* quadric = gluNewQuadric();
	gluQuadricDrawStyle(quadric, stil_afisare);
	gluCylinder(quadric, 1.0, 1.0, 2.0, 20, 20);
}

// functie care deseneaza un tor
void afisare_tor() {
	glutSolidTorus(0.5, 1.0, 20, 20);
}

// functie callback pentru afisarea imaginii
void display() {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glMatrixMode(GL_MODELVIEW);

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);

	glLoadIdentity();

	glTranslatef(0.0, 0.0, -5.0);

	if (stil_afisare == GL_LINE) {
		glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	}
	else {
		glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	}

	switch (obiect) {
	case 1:
		afisare_cub();
		break;
	case 2:
		afisare_sfera();
		break;
	case 3:
		afisare_cilindru();
		break;
	case 4:
		afisare_tor();
		break;
	}

	glutSwapBuffers();
}

// functie callback pentru redimensionarea ferestrei
void reshape(int width, int height) {
	glViewport(0, 0, width, height);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(60.0, (float)width / height, 1.0, 50.0);
}

// functie callback pentru gestionarea evenimentelor de meniu
void procesare_meniu_afisare(int valoare) {
	switch (valoare) {
	case 1:
		stil_afisare = GL_FILL;
		break;
	case 2:
		stil_afisare = GL_LINE;
		break;
	}
	glutPostRedisplay();
}

// functie callback pentru meniul contextual
void procesare_meniu_obiecte(int valoare) {
	obiect = valoare;
	glutPostRedisplay();
}

// functie callback pentru pentru meniul contextual
void click_dreapta(int button, int state, int x, int y) {
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN) {
		meniu_obiecte = glutCreateMenu(procesare_meniu_obiecte);
		glutAddMenuEntry("Cub", 1);
		glutAddMenuEntry("Sfera", 2);
		glutAddMenuEntry("Cilindru", 3);
		glutAddMenuEntry("Tor", 4);

		meniu_afisare = glutCreateMenu(procesare_meniu_afisare);
		glutAddMenuEntry("Solid", 1);
		glutAddMenuEntry("Wireframe", 2);

		glutCreateMenu(procesare_meniu_afisare);
		glutAddSubMenu("Obiect", meniu_obiecte);
		glutAddSubMenu("Stil de randare", meniu_afisare);
		glutAttachMenu(GLUT_RIGHT_BUTTON);
	}
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);

	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);

	glutInitWindowSize(600, 600);
	glutCreateWindow("Obiecte - meniu wireframe/solid");

	glutDisplayFunc(display);
	glutReshapeFunc(reshape);

	glutMouseFunc(click_dreapta);

	glEnable(GL_DEPTH_TEST);

	glutMainLoop();

	return 0;
}
