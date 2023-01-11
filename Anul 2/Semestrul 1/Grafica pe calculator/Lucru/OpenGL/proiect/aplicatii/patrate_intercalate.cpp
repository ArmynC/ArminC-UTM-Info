#include <GL/freeglut.h>

// dimensiunile fiecarui patrat (in pixeli)
const int MARIME_PATRAT1 = 150;
const int MARIME_PATRAT2 = 100;
const int MARIME_PATRAT3 = 50;

// unghiurile de rotatie pentru fiecare patrat
float unghi1 = 0.0f;
float unghi2 = 0.0f;
float unghi3 = 0.0f;

// functia de afisare
void display() {

    // modifica culoarea de fundal a casetei in negru
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);

    // elibereaza buffer-ul de culoare
    glClear(GL_COLOR_BUFFER_BIT);

    // seteaza latimea liniei si culoarea primului patrat
    glLineWidth(3.0f);
    glColor3f(1.0f, 0.0f, 0.0f); // rosu

    // salveaza matricea curenta de transformare
    glPushMatrix();

    // rotirea primului patrat in jurul axei sale
    glRotatef(unghi1, 0.0f, 0.0f, 1.0f);

    // desenarea primului patrat
    glBegin(GL_QUADS);
    glVertex2f(-MARIME_PATRAT1 / 2, -MARIME_PATRAT1 / 2);
    glVertex2f(MARIME_PATRAT1 / 2, -MARIME_PATRAT1 / 2);
    glVertex2f(MARIME_PATRAT1 / 2, MARIME_PATRAT1 / 2);
    glVertex2f(-MARIME_PATRAT1 / 2, MARIME_PATRAT1 / 2);
    glEnd();

    // restaurarea matricei anterioare de transformare
    glPopMatrix();

    // seteaza latimea liniei si culoarea celui de al doilea patrat
    glLineWidth(3.0f);
    glColor3f(0.0f, 1.0f, 0.0f); // verde

    // salveaza matricea curenta de transformare
    glPushMatrix();

    // rotirea celui de al doilea patrat in jurul axei sale
    glRotatef(unghi2, 0.0f, 0.0f, 1.0f);

    // desenarea celui de al doilea patrat
    glBegin(GL_QUADS);
    glVertex2f(-MARIME_PATRAT2 / 2, -MARIME_PATRAT2 / 2);
    glVertex2f(MARIME_PATRAT2 / 2, -MARIME_PATRAT2 / 2);
    glVertex2f(MARIME_PATRAT2 / 2, MARIME_PATRAT2 / 2);
    glVertex2f(-MARIME_PATRAT2 / 2, MARIME_PATRAT2 / 2);
    glEnd();

    // seteaza latimea liniei si culoarea celui de al treilea patrat
    glLineWidth(3.0f);
    glColor3f(0.0f, 0.0f, 1.0f); // albastru

    // restaurarea matricei anterioare de transformare
    glPopMatrix();

    // salveaza matricea curenta de transformare
    glPushMatrix();

    // rotirea celui de al treilea patrat in jurul axei sale
    glRotatef(unghi3, 0.0f, 0.0f, 1.0f);
     
    // desenarea celui de al treilea patrat
    glBegin(GL_QUADS);
    glVertex2f(-MARIME_PATRAT3 / 2, -MARIME_PATRAT3 / 2);
    glVertex2f(MARIME_PATRAT3 / 2, -MARIME_PATRAT3 / 2);
    glVertex2f(MARIME_PATRAT3 / 2, MARIME_PATRAT3 / 2);
    glVertex2f(-MARIME_PATRAT3 / 2, MARIME_PATRAT3 / 2);
    glEnd();

    // restaurarea matricei anterioare de transformare
    glPopMatrix();

    // fortarea reincarcarii
    glutSwapBuffers();
}

// functia care este apelata atunci cand se redimensioneaza fereastra
void reshape(int latime, int inaltime) {

    // setarea dimensiunilor viewport-ului
    glViewport(0, 0, latime, inaltime);

    // setarea sistemului de coordonate
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-200, 200, -200, 200, -1, 1);
    glMatrixMode(GL_MODELVIEW);
}

// functia care este apelata atunci cand se apasa o tasta
void tastatura(unsigned char key, int x, int y) {
    switch (key) {
    case 'q': // rotirea patratului mare in sensul acelor de ceasornic
        unghi1 -= 5.0f;
        break;
    case 'e': // rotirea patratului mare in sens invers acelor de ceasornic
        unghi1 += 5.0f;
        break;
    case 'a': // rotirea patratului mijlociu in sensul acelor de ceasornic
        unghi2 -= 5.0f;
        break;
    case 'd': // rotirea patratului mijlociu in sens invers acelor de ceasornic
        unghi2 += 5.0f;
        break;
    case 'z': // rotirea patratului mic in sensul acelor de ceasornic
        unghi3 -= 5.0f;
        break;
    case 'c': // rotirea patratului mic in sens invers acelor de ceasornic
        unghi3 += 5.0f;
        break;
    }

    // redesenarea scenei
    glutPostRedisplay();
}

int main(int argc, char** argv) {
    // initializarea glut
    glutInit(&argc, argv);

    // setarea modului de afisare (doua buffer-uri si RGB)
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);

    // setarea dimensiunilor ferestrei
    glutInitWindowSize(800, 600);

    // setarea pozitiei ferestrei
    glutInitWindowPosition(100, 100);

    // crearea ferestrei
    glutCreateWindow("Patrate intercalate - rotire");

    // setarea functiei de afisare
    glutDisplayFunc(display);

    // setarea functiei de redimensionare
    glutReshapeFunc(reshape);

    // setarea functiei de tastatura
    glutKeyboardFunc(tastatura);

    // intrarea in bucla principala de procesare
    glutMainLoop();

    return 0;
}