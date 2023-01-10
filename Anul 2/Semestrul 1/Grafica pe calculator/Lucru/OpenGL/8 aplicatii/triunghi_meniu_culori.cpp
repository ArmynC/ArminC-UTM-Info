#include <GL/freeglut.h>

void display() // functia de afisare
{
    glClear(GL_COLOR_BUFFER_BIT); // sterge buffer-ul de culoare
    glBegin(GL_TRIANGLES); // incepe desenarea unui triunghi
    glVertex2f(-0.5, -0.5); // primul vertex al triunghiului
    glVertex2f(0.5, -0.5); // al doilea vertex al triunghiului
    glVertex2f(0, 0.5); // al treilea vertex al triunghiului
    glEnd(); // termina desenarea triunghiului
    glFlush(); // forteaza afisarea imediata
}

void meniu_culoare(int item) // functia pentru meniul dedicat selectarii culorilor
{
    switch (item)
    {
    case 1: 
        glColor3f(1.0, 0.0, 0.0); // seteaza culoarea rosie
        break;
    case 2:
        glColor3f(0.0, 1.0, 0.0); // seteaza culoarea verde
        break;
    case 3:
        glColor3f(0.0, 0.0, 1.0); // seteaza culoarea albastra
        break;
    }
    glutPostRedisplay(); // redeseneaza entitatea
}

void meniu() // functia de creare a meniului
{
    int menu;
    menu = glutCreateMenu(meniu_culoare); // creeaza meniul
    glutAddMenuEntry("Rosu", 1); // adauga optiunea rosie
    glutAddMenuEntry("Verde", 2); // adauga optiunea verde
    glutAddMenuEntry("Albastru", 3); // adauga optiunea albastra
    glutAttachMenu(GLUT_RIGHT_BUTTON); // ataseaza meniul la click dreapta
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv); // initializeaza freeglut
    glutCreateWindow("Triunghi - meniu culori"); // creeaza fereastra cu titlul specificat
    glutDisplayFunc(display); // seteaza functia de afisare
    meniu(); // creeaza meniul
    glutMainLoop(); // intra in bucla principala de afisare
    return 0;
}
