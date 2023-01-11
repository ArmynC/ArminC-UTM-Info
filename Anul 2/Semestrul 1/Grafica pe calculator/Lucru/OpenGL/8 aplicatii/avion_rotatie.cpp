#include <GL/freeglut.h>
#include <cmath> // biblioteca ce contine functiile matematice, sin, cos etc.

#define pi 3.14f // definire valoare constanta pi

float avion_x = 0.0f; // pozitie avion - axa x 
float avion_y = 0.0f; // pozitie avion - axa 
float rotatie = 0.0f; // unghi rotatie avion
float viteza = 0.1f; // viteza de miscare stabilita avion

// fFunctie de afisare
void display() {

    // seteaza culoarea de fundal
    glClearColor(0.0, 0.0, 0.0, 1.0); // negru

    // sterge buffer-ul de culoare
    glClear(GL_COLOR_BUFFER_BIT);

    // culoarea avionului
    glColor3f(1.0, 0.0, 0.0); // rosu

    // salveaza matricea curenta
    glPushMatrix();

    // condu avionul in pozitia stabilita
    glTranslatef(avion_x, avion_y, 0);

    // roteste avionul cu unghiul de rotatie curent in jurul axei z
    glRotatef(rotatie, 0, 0, 1); // x, y, z

    // obiect avion - triunghi isoscel
    glBegin(GL_TRIANGLES);
    glVertex2f(0.0f, 0.1f);
    glVertex2f(-0.05f, -0.05f);
    glVertex2f(0.05f, -0.05f);
    glEnd();

    // restaureaza matricea anterioara
    glPopMatrix();

    // schimba buffer-ul curent cu cel care va fi afisat
    glutSwapBuffers();
}

// tastatura
void keyboard(unsigned char key, int x, int y) {
    switch (key) {
    case 'w':
        // deplasare avion - fata -> viteza stabilita si unghiul de rotatie curent
        avion_x += viteza * cos((rotatie + 90) * pi / 180);
        avion_y += viteza * sin((rotatie + 90) * pi / 180);
        break;
    case 'a':
        // deplasare avion - staga
        avion_x -= viteza;
        break;
    case 's':
        // deplasare avion - spate -> viteza stabilita si unghiul de rotatie curent
        avion_x -= viteza * cos((rotatie + 90) * pi / 180);
        avion_y -= viteza * sin((rotatie + 90) * pi / 180);
        break;
    case 'd':
        // deplasare avion - staga
        avion_x += viteza;
        break;
    case 'q':
        // rotirea avionului - stanga
        rotatie += 5.0;
        break;
    case 'e':
        // rotirea avionului - dreapta
        rotatie -= 5.0;
        break;
    }

    // daca avionul iese din zona vizibil afisata, acesta va aparea in partea opusa ecranului, ca intr-un efect continuu
    if (avion_x > 1) avion_x = -1;
    if (avion_x < -1) avion_x = 1;
    if (avion_y > 1) avion_y = -1;
    if (avion_y < -1) avion_y = 1;

    // forteaza afisarea
    glutPostRedisplay();
}

int main(int argc, char** argv) {

    // initializare glut
    glutInit(&argc, argv);

    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(500, 500);

    glutCreateWindow("Avion - rotatie");

    // inregistreaza functiile de afisare si a tastaturii
    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);

    // bucla principala
    glutMainLoop();

    return 0;

}