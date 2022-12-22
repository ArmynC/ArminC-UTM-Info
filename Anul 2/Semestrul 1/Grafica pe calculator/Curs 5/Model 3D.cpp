#include <gl/freeglut.h>
#include<math.h>
#include<stdio.h>
#include <stdlib.h>
static int window;
static int menu_id;
static int submenu_wire;
static int submenu_solid;
static int value = 0;
void menu(int num) {
	if (num == 0) {
		glutDestroyWindow(window);
		exit(0);
	}
	else {
		value = num;
	}
	glutPostRedisplay();
}
void createMenu(void) {
	submenu_solid = glutCreateMenu(menu);
	glutAddMenuEntry("Sphere", 2);
	glutAddMenuEntry("Torus", 3);
	glutAddMenuEntry("Teapot", 4);
	glutAddMenuEntry("Cube", 5);
	glutAddMenuEntry("Cone", 6);
	glutAddMenuEntry("Tetrahedron", 7);
	glutAddMenuEntry("Icosahedron", 8);
	glutAddMenuEntry("Octahedron", 9);
	glutAddMenuEntry("Dodecahedron", 10);
	submenu_wire = glutCreateMenu(menu);
	glutAddMenuEntry("Sphere", 11);
	glutAddMenuEntry("Torus", 12);
	glutAddMenuEntry("Teapot", 13);
	glutAddMenuEntry("Cube", 14);
	glutAddMenuEntry("Cone", 15);
	glutAddMenuEntry("Tetrahedron", 16);
	glutAddMenuEntry("Icosahedron", 17);
	glutAddMenuEntry("Octahedron", 18);
	glutAddMenuEntry("Dodecahedron", 19);
	menu_id = glutCreateMenu(menu);
	glutAddSubMenu("Wire", submenu_wire);
	glutAddSubMenu("Solid", submenu_solid);
	glutAddMenuEntry("Clear", 1);
	glutAddMenuEntry("Exit", 0); glutAttachMenu(GLUT_RIGHT_BUTTON);
}
int GAngle = 0;
void display(void) {
	glClear(GL_COLOR_BUFFER_BIT); if (value == 1) {
		return; //glutPostRedisplay();
	}
	else if (value == 2) {
		static float alpha = 20;
		glPushMatrix();
		glColor3d(1.0, 1.0, 0.0);
		glRotated(alpha, -1.0, 0.0, 0.0);
		glutSolidSphere(0.5, 50, 50);
		glPopMatrix();
		alpha = alpha + 0.5;
	}
	else if (value == 3) {
		static float alpha = 20;
		glPushMatrix();
		glColor3d(0.0, 1.0, 1.0);
		glRotatef(alpha, 1.9, 0.6, 0);
		glutSolidTorus(0.3, 0.6, 100, 100);
		glPopMatrix();
		alpha = alpha + 0.5;
	}
	else if (value == 4) {
		static float alpha = 20;
		glPushMatrix();
		glColor3d(0.5, 1.0, 0.5);
		glRotatef(alpha, 1.9, 0.6, 0);
		glutSolidTeapot(0.5);
		glPopMatrix();
		alpha = alpha + 0.5;
	}
	else if (value == 5) {
		glColor3f(0.0, 0.5, 0.0);
		glLoadIdentity();
		glRotated(GAngle, 1, 1, 0);
		glutSolidCube(0.5);
		GAngle = GAngle + 1;
	}
	else if (value == 6) {
		static float alpha = 20;
		glPushMatrix();
		glColor3d(1.0, 1.0, 1.0);
		glRotated(alpha, -1.0, 0.0, 0.0);
		glutSolidCone(0.5, 1.0, 50, 50);
		glPopMatrix();
		alpha = alpha + 0.5;
	}
	else if (value == 7) {
		static float alpha = 20;
		glPushMatrix();
		glColor3d(0.0, 1.0, 0.0);
		glRotated(alpha, 0.0, 1.0, 0.0);
		glutSolidTetrahedron();
		glPopMatrix();
		alpha = alpha + 0.5;
	}
	else if (value == 8) {
		static float alpha = 20;
		glPushMatrix();
		glColor3d(0.5, 0.0, 0.5);
		glRotated(alpha, 0.0, 1.0, 0.0);
		glutSolidIcosahedron();
		glPopMatrix();
		alpha = alpha + 0.5;
	}
	else if (value == 9) {
		static float alpha = 20;
		glPushMatrix();
		glColor3d(0.5, 0.5, 1.0);
		glRotated(alpha, 0.0, 1.0, 0.0);
		glutSolidOctahedron();
		glPopMatrix();
		alpha = alpha + 0.5;
	}
	else if (value == 10) {
		static float alpha = 20;
		glPushMatrix();
		glColor3d(1.0, 0.5, 0.5);
		glRotated(alpha, 0.0, 1.0, 0.0);
		glScalef(0.5, 0.5, 0.5);
		glutSolidDodecahedron();
		glPopMatrix();
		alpha = alpha + 0.5;
	}
	else if (value == 11) {
		static float alpha = 20;
		glPushMatrix();
		glColor3d(1.0, 1.0, 0.0);
		glRotated(alpha, 0.0, 1.0, 0.0);
		glutWireSphere(0.5, 50, 50);
		glPopMatrix();
		alpha = alpha + 0.5;
	}
	else if (value == 12) {
		static float alpha = 20;
		glPushMatrix();
		glColor3d(0.0, 1.0, 1.0);
		glRotated(alpha, 0.0, 1.0, 0.0);
		glutWireTorus(0.3, 0.6, 100, 100);
		glPopMatrix();
		alpha = alpha + 0.5;
	}
	else if (value == 13) {
		static float alpha = 20;
		glPushMatrix();
		glColor3d(0.5, 1.0, 0.5);
		glRotated(alpha, 0.0, 1.0, 0.0);
		glutWireTeapot(0.5);
		glPopMatrix();
		alpha = alpha + 0.5;
	}
	else if (value == 14) {
		static float alpha = 20;
		glPushMatrix();
		glColor3d(0.0, 0.5, 0.0);
		glRotated(alpha, 0.0, 1.0, 0.0);
		glutWireCube(0.5);
		glPopMatrix();
		alpha = alpha + 0.5;
	}
	else if (value == 15) {
		static float alpha = 20;
		glPushMatrix();
		glColor3d(1.0, 1.0, 1.0);
		glRotated(alpha, 0.0, 1.0, 0.0);
		glutWireCone(0.5, 1.0, 50, 50);
		glPopMatrix();
		alpha = alpha + 0.5;
	}
	else if (value == 16) {
		static float alpha = 20;
		glPushMatrix();
		glColor3d(0.0, 1.0, 0.0);
		glRotated(alpha, 0.0, 1.0, 0.0);
		glutWireTetrahedron();
		glPopMatrix();
		alpha = alpha + 0.5;
	}
	else if (value == 17) {
		static float alpha = 20;
		glPushMatrix();
		glColor3d(0.5, 0.0, 0.5);
		glRotated(alpha, 0.0, 1.0, 0.0);
		glutWireIcosahedron();
		glPopMatrix();
		alpha = alpha + 0.5;
	}
	else if (value == 18) {
		static float alpha = 20;
		glPushMatrix();
		glColor3d(0.5, 0.5, 1.0);
		glRotated(alpha, 0.0, 1.0, 0.0);
		glutWireOctahedron();
		glPopMatrix();
		alpha = alpha + 0.5;
	}
	else if (value == 19) {
		static float alpha = 20;
		glPushMatrix();
		glColor3d(1.0, 0.5, 0.5);
		glRotated(alpha, 0.0, 1.0, 0.0);
		glScalef(0.5, 0.5, 0.5);
		glutWireDodecahedron();
		glPopMatrix();
		alpha = alpha + 0.5;
	}
	glFlush();
}
void Timer(int extra) {
	glutPostRedisplay();
	glutTimerFunc(40, Timer, 0);
}
int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGBA | GLUT_SINGLE);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(100, 100);
	window = glutCreateWindow("Aplicatie 2022");
	createMenu();
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glutDisplayFunc(display);
	glutTimerFunc(0, Timer, 0); glutMainLoop();
	return 0;
}