#include <gl/freeglut.h>
#include <math.h>
void init()
{
//glPointSize(10.0);
}
void Display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1, 1, 1);
    bool negru = true;
    int w = 50, h = 50;
    for (int i = 0; i < 8; ++i)
    {
        for (int j = 0; j < 8; ++j)
        {

            //schimba alternativ culoarea
            if (negru)
                glColor3f(1, 1, 1);
            else
                glColor3f(0, 0, 0);
            negru = !negru;
            float x1 = i * w;
            float y1 = j * h;
            float x2 = (i + 1) * w;
            float y2 = (j + 1) * h;
            glBegin(GL_POLYGON);
            glVertex2f(x1, y1);
            glVertex2f(x1, y2);
            glVertex2f(x2, y2);
            glVertex2f(x2, y1);
            glEnd();
        }
        negru = !negru; //schimba culoarea la sfarsitul randului
    }
    glFlush();
}
void reshape(int w, int h)//functia redesenare
{
    glViewport(0, 0, (GLsizei)w, (GLsizei)h);//stabilirea viewportului la dimensiunea ferestrei
    glMatrixMode(GL_PROJECTION);//specificare matrice modificabila la valoare argumentului de modificare
    glLoadIdentity();//initializarea sistemului de coordonate
    gluOrtho2D(0.0, (GLdouble)w, 0.0, (GLdouble)h);//stabileste volumul de vedere folosind o proiectie ortografica
}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(600, 600);
    glutInitWindowPosition(150, 150);
    glutCreateWindow("sah");
    glutDisplayFunc(Display);
    glutReshapeFunc(reshape);
    glutMainLoop();
    return 0;
}
