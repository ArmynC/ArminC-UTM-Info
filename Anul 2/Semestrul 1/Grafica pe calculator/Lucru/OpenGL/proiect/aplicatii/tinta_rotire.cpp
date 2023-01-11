#include <GL/freeglut.h>
#include <iostream>

/*
 * rotirea tintei in functie de tastele apasate
 *
 * key - tasta apasata (W, A, S, D)
 * x - coordonata x a mouse-ului
 * y - coordonata y a mouse-ului
 */
void rotire(unsigned char key, int x, int y)
{
    switch (key)
    {
        // rotire in sensul acelor de ceasornic
    case 'w':
        glRotatef(5.0, 1.0, 0.0, 0.0);
        break;
    case 'a':
        glRotatef(5.0, 0.0, 1.0, 0.0);
        break;
    case 's':
        glRotatef(5.0, -1.0, 0.0, 0.0);
        break;
    case 'd':
        glRotatef(5.0, 0.0, -1.0, 0.0);
        break;
    }

    // reincarcarea imaginii
    glutPostRedisplay();
}


// functie pentru desenarea tintei
void drawTinta()
{
    // desenarea cercurilor
    glColor3f(1.0, 0.0, 0.0);
    glutSolidTorus(0.2, 0.6, 20, 20);
    glColor3f(1.0, 1.0, 0.0);
    glutSolidTorus(0.2, 0.4, 20, 20);
}

// functia care deseneaza caseta
void display()
{
    // golirea buffer-ului de culoare
    glClear(GL_COLOR_BUFFER_BIT);

    // salvarea matricii de stiva
    glPushMatrix();

    // desenarea tintei
    drawTinta();

    // revenirea la matricea de stiva salvata
    glPopMatrix();

    // afisarea imaginii
    glutSwapBuffers();
}

int main(int argc, char** argv)
{
    // initializarea glut
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);

    // crearea ferestrei
    glutInitWindowSize(500, 500);
    glutCreateWindow("Tinta - cu rotire");

    // setarea functiei care face afisarea
    glutDisplayFunc(display);

    // setarea functiei care asculta tastele apasate
    glutKeyboardFunc(rotire);

    // setarea culorii background
    glClearColor(1.0, 1.0, 1.0, 1.0);

    // intrarea in bucla principala
    glutMainLoop();

    return 0;
}
