#include <gl/freeglut.h>
#include <math.h>
void init()
{
    glClearColor(0.0, 0.0, 0.0, 0.0); //seteaza culoarea de stergere
    glShadeModel(GL_FLAT); // seteaza tipul umbrei
}
void Display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1, 0, 1);
    glutWireTeapot(0.5); //deseneaza ceainic
    glFlush();//executare functie
}
void rotate(int x_grade, int y_grade, int z_grade)
{
    if (x_grade)
        glRotatef(x_grade, 1, 0, 0); //rotire pe axa x
    if (y_grade)
        glRotatef(y_grade, 0, 1, 0); //rotire pe axa y
    if (z_grade)
        glRotatef(z_grade, 0, 0, 1); //rotire pe axa z
    if (x_grade || y_grade || z_grade)
        glutPostRedisplay(); // redesenare
}
void OnKey(unsigned char key, int x, int y)
{
    if (key == 27)
        exit(0);
    int x_grade = 0, y_grade = 0, z_grade = 0;
    switch (key)
    {
    case 'q':
    case 'Q':
        z_grade++;
        rotate(x_grade, y_grade, z_grade);
        break;
    case 'e':
    case 'E':
        z_grade--;
        rotate(x_grade, y_grade, z_grade);
        break;
    case 'w':
    case 'W':
        x_grade++;
        rotate(x_grade, y_grade, z_grade);
        break;
    case 's':
    case 'S':
        x_grade--;
        rotate(x_grade, y_grade, z_grade);
        break;
    case 'a':
    case 'A':
        y_grade++;
        rotate(x_grade, y_grade, z_grade);
        break;
    case 'd':
    case 'D':
        y_grade--;
        rotate(x_grade, y_grade, z_grade);
        break;
    }
}
void reshape(int w, int h)//functia redesenare
{
    glViewport(0, 0, (GLsizei)w, (GLsizei)h);//stabilirea viewportului la dimensiunea ferestrei
    glMatrixMode(GL_PROJECTION);//specificare matrice modificabila la valoare argumentului de modificare
    glLoadIdentity();//initializarea sistemului de coordonate
	////gluOrtho2D(0.0, (GLdouble)w, 0.0, (GLdouble)h);//stabileste volumul de vedere folosind o proiectie ortografica
}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	//glutInitWindowSize(600, 600);
    glutInitWindowPosition(150, 150);
    glutCreateWindow("Rotire..din tastatura");
    init();
    glutDisplayFunc(Display);
    glutReshapeFunc(reshape);
    glutKeyboardFunc(OnKey);
    glutMainLoop();
    return 0;
}
