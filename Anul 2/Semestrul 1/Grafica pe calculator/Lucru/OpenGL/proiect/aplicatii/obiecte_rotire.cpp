#include <GL/freeglut.h>
#include <GL/gl.h>

bool rotatie_ceainic = true;
bool rotatie_tor = true;
bool rotatie_cub = true;
bool rotatie_sfera = true;

// creare ceainic
void afiseaza_ceainic(float x, float y, float z, bool wireframe) {
    glPushMatrix();
    glTranslatef(x, y, z);
    if (rotatie_ceainic) {
        glRotatef(glutGet(GLUT_ELAPSED_TIME) / 10.0f, 1, 1, 1);
    }
    if (wireframe) {
        glutWireTeapot(0.5);
    }
    else {
        glutSolidTeapot(0.5);
    }
    glPopMatrix();
}

// creare cub
void afiseaza_cub(float x, float y, float z, bool wireframe) {
    glPushMatrix();
    glTranslatef(x, y, z);
    if (rotatie_cub) {
        glRotatef(glutGet(GLUT_ELAPSED_TIME) / 10.0f, 1, 1, 1);
    }
    if (wireframe) {
        glutWireCube(0.5);
    }
    else {
        glutSolidCube(0.5);
    }
    glPopMatrix();
}

// creare sfera
void afiseaza_sfera(float x, float y, float z, bool wireframe) {
    glPushMatrix();
    glTranslatef(x, y, z);
    if (rotatie_sfera) {
        glRotatef(glutGet(GLUT_ELAPSED_TIME) / 10.0f, 1, 1, 1);
    }
    if (wireframe) {
        glutWireSphere(0.5, 20, 20);
    }
    else {
        glutSolidSphere(0.5, 20, 20);
    }
    glPopMatrix();
}

// creare tor
void afiseaza_tor(float x, float y, float z, bool wireframe) {
    glPushMatrix();
    glTranslatef(x, y, z);
    if (rotatie_tor) {
        glRotatef(glutGet(GLUT_ELAPSED_TIME) / 10.0f, 1, 1, 1);
    }
    if (wireframe) {
        glutWireTorus(0.1, 0.5, 20, 20);
    }
    else {
        glutSolidTorus(0.1, 0.5, 20, 20);
    }
    glPopMatrix();
}

// functia de afisare obiecte
void display() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    // cream cele 4 obiecte
    glPushMatrix();
    glColor3f(1.0f, 0.0f, 0.0f); // culoarea rosie
    afiseaza_ceainic(-1.5, 1.5, -5.0, true); // wire selectat
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.0f, 1.0f, 0.0f); // culoarea verde
    afiseaza_tor(1.5, -1.5, -5.0, false);
    glPopMatrix();


    glPushMatrix();
    glColor3f(0.0f, 0.0f, 1.0f); // culoarea albastra
    afiseaza_cub(-1.5, -1.5, -5.0, false);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1.0f, 0.5f, 0.0f); // culoarea portocalie
    afiseaza_sfera(1.5, 1.5, -5.0, true); // wire activat
    glPopMatrix();

    glutSwapBuffers();
}

// functie viewport
void reshape(int latime, int inaltime) {
    glViewport(0, 0, latime, inaltime);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(60, (float)latime / (float)inaltime, 0.1, 100);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

// callback meniu
void meniu_procesare(int valoare) {
    switch (valoare) {
    case 1:
        rotatie_ceainic = !rotatie_ceainic;
        break;
    case 2:
        rotatie_cub = !rotatie_cub;
        break;
    case 3:
        rotatie_sfera = !rotatie_sfera;
        break;
    case 4:
        rotatie_tor = !rotatie_tor;
        break;
    }
}

// crearea meniului
void meniu_rotatie() {
    int meniu;
    meniu = glutCreateMenu(meniu_procesare);

    glutAddMenuEntry("Rotatia ceainicului", 1);
    glutAddMenuEntry("Rotatia cubului", 2);
    glutAddMenuEntry("Rotatia sferei", 3);
    glutAddMenuEntry("Rotatia torului", 4);

    glutAttachMenu(GLUT_RIGHT_BUTTON);
}

int main(int argc, char** argv) {

    glutInit(&argc, argv);

    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);

    glutInitWindowSize(800, 600);
    glutCreateWindow("Obiecte care se rotesc");

    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutIdleFunc(display);

    meniu_rotatie();

    glEnable(GL_DEPTH_TEST);

    glutMainLoop();
     
    return 0;
}