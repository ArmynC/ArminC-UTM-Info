#include <GL/freeglut.h> // biblioteca OpenGL cu sursa deschisa 

// deseneaza fereastra
void display() {
	// modifica culoarea casetei in alb
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // specify clear values for the color buffers. parametri: red, green, blue, alpha
	glClear(GL_COLOR_BUFFER_BIT); //  clear buffers to preset values. buffer_bit - indicates the buffers currently enabled for color writing 

	// deseneaza linia verticala albastra
	glColor3f(0.0f, 0.0f, 1.0f); // sets the current color - parametri: r, g, b
	glBegin(GL_QUADS); // delimit the vertices of a primitive or a group of like primitives - parametri: GL_POINTS, GL_LINES, GL_LINE_STRIP, GL_TRIANGLE_FAN, etc.
	glVertex2f(-0.33f, 0.5f);
	glVertex2f(-0.33f, -0.5f);
	glVertex2f(-0.17f, -0.5f);
	glVertex2f(-0.17f, 0.5f);
	glEnd(); // delimit the vertices of a primitive or a group of like primitives

	// deseneaza linia verticala galbena
	glColor3f(1.0f, 1.0f, 0.0f);
	glBegin(GL_QUADS);
	glVertex2f(-0.17f, 0.5f);
	glVertex2f(-0.17f, -0.5f);
	glVertex2f(-0.01f, -0.5f);
	glVertex2f(-0.01f, 0.5f);
	glEnd();

	// deseneaza linia verticala rosie
	glColor3f(1.0f, 0.0f, 0.0f);
	glBegin(GL_QUADS);
	glVertex2f(-0.01f, 0.5f);
	glVertex2f(-0.01f, -0.5f);
	glVertex2f(0.15f, -0.5f);
	glVertex2f(0.15f, 0.5f);
	glEnd();

    // schimba bufferele pentru a afisa rezultatul
	glutSwapBuffers();
}

// functia main
int main(int argc, char** argv) {
	// initializeaza libraria glut cu argumente
	glutInit(&argc, argv); // a pointer to the program's unmodified argc variable from main - the program's unmodified argv variable from main

    // construieste o fereastra cu titlul si marimile precizate
	glutCreateWindow("Steagul Romaniei"); // parametru: name
	glutReshapeWindow(600, 600); // parametri: width, height

    // seteaza functia display in asa fel incat sa fie functia definita mai sus
	glutDisplayFunc(display);
    
    // introduce o bucla a librariei gblut, procesand modificarile
    // si redeseneaza fereastra cand este necesar
	glutMainLoop();

	return 0;
}
