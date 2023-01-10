#include <GL/freeglut.h>

// dimensiunea ferestrei
int latime = 500;
int inaltime = 500;

// variabila care retine nivelul de transparenta al patratului
float transparenta = 0.5; // valoare de mijloc

void display()
{
    // sterge buffer-ul de culoare si de adancime
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glEnable(GL_BLEND); //  blend the computed fragment color values with the values in the color buffers
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA); // specify pixel arithmetic - parametri: buf, sfactor, dfactor ( GL_ZERO, GL_ONE, GL_SRC_COLOR etc.)

    // seteaza culoarea
    glColor4f(1.0, 0.0, 0.0, transparenta);

    // deseneaza un patrat
    glBegin(GL_POLYGON);
    glVertex2f(-0.5, -0.5);
    glVertex2f(-0.5, 0.5);
    glVertex2f(0.5, 0.5);
    glVertex2f(0.5, -0.5);
    glEnd();

    // forteaza redesenarea ferestrei
    glutSwapBuffers();
}

void reshape(int w, int h)
{
    // actualizeaza dimensiunile ferestrei
    width = w;
    height = h;

    // reseteaza viewport-ul
    glViewport(0, 0, w, h);

    // reseteaza matricea de proiectie
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);

    // reseteaza matricea de modelare-vizualizare
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

void meniu_transparenta(int val)
{
    // modifica transparenta in functie de optiunea selectata (valoare de referinta - la jumatate)
    if (val == 1)
        transparenta -= 0.1f;
    else if (val == 2)
        transparenta += 0.1f;

    // limiteaza valorile transparentei in intervalul [0, 1]
    if (transparenta < 0)
        transparenta = 0;
    if (transparenta > 1)
        transparenta = 1;

    // forteaza redesenarea ferestrei
    glutPostRedisplay();
}

// functie callback pentru afisarea meniului contextual
void meniu(int button, int state, int x, int y)
{
    // afiseaza meniul cu click dreapta
    if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
    {
        // creeaza un nou meniu contextual
        int menu = glutCreateMenu(meniu_transparenta);

        // adauga o optiune de modificare a transparentei
        glutAddMenuEntry("Micsoreaza transparenta", 1);
        glutAddMenuEntry("Marire transparenta", 2);

        // ataseaza meniul comenzii tip click dreapta
        glutAttachMenu(GLUT_RIGHT_BUTTON);
    }
}

int main(int argc, char** argv)
{
    // initalizeaza GLUT
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);

    // creeaza fereastra
    glutInitWindowSize(latime, inaltime);
    glutCreateWindow("Patrat - meniu transparenta");

    // inregistreaza functiile de callback
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);

    // afiseaza meniul contextual la click-dreapta
    glutMouseFunc(meniu);

    // intra in bucla principala
    glutMainLoop();

    return 0;
}
