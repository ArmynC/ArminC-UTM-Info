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
    int width = 400;
    int heigth = 400;
    int w = 40, h = 40;
    for (int i = 0; i < width / w; ++i)
    {
        for (int j = 0; j < heigth / h; ++j)
        {
            double red = ((double)rand() / (RAND_MAX));
            double green = ((double)rand() / (RAND_MAX));
            double blue = ((double)rand() / (RAND_MAX));

            //schimba culoarea
            glColor3f(red, green, blue);
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
    }
    glFlush();
}
void reshape(int w, int h)
{
    glViewport(0, 0, (GLsizei)w, (GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, (GLdouble)w, 0.0, (GLdouble)h);
}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(400, 400);
    glutInitWindowPosition(150, 150);
    glutCreateWindow("puncte multiple");
    init();
    glutDisplayFunc(Display);
    glutReshapeFunc(reshape);
    glutMainLoop();
    return 0;
}
