#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>

void init(void)
{
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, 150, 0, 150);

}
void plot(int x, int y) {
    glColor3f(1.0, 0.25, 1.0);
    glBegin(GL_POINTS);
    glVertex2i(x, y);
    glEnd();
}

void circle(int x_center, int y_center, int r)
{

    int p, x, y;
    x = 0;
    y = r;
    p = 1 - r;
    while (x <= y)
    {
        if (p < 0)
        {
            x += 1;
            y = y;
            p = p + (2 * x) + 1;
        }
        else {
            x += 1;
            y -= 1;
            p = p + (2 * x) + 1 - (2 * y);
        }

        plot(x + x_center, y + y_center);
        plot(-x + x_center, y + y_center);
        plot(-x + x_center, -y + y_center);
        plot(x + x_center, -y + y_center);
        plot(y + x_center, x + y_center);
        plot(-y + x_center, x + y_center);
        plot(-y + x_center, -x + y_center);
        plot(y + x_center, -x + y_center);

    }

}
void Draw()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glPointSize(3.0);
    circle(30, 40, 20);
    circle(30, 40, 17);
    circle(70, 40, 10);
    circle(110, 40, 20);
    circle(110, 40, 17);
    //circle(50, 90, 5);
    circle(30, 40, 5);

    //Lines
    glBegin(GL_LINES);
    glColor3f(0, 1, 1);
    glVertex2f(30, 40);
    glVertex2f(50, 80);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 1, 1);
    glVertex2f(70, 40);
    glVertex2f(50, 80);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 1, 1);
    glVertex2f(30, 40);
    glVertex2f(70, 40);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 1, 1);
    glVertex2f(70, 40);
    glVertex2f(90, 80);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 1, 1);
    glVertex2f(50, 80);
    glVertex2f(90, 80);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 1, 1);
    glVertex2f(110, 40);
    glVertex2f(75, 110);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 1, 1);
    glVertex2f(50, 80);
    glVertex2f(50, 90);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 1, 1);
    glVertex2f(90, 105);
    glVertex2f(60, 115);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 1, 1);
    glVertex2f(90, 105);
    glVertex2f(82, 104);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 1, 1);
    glVertex2f(60, 115);
    glVertex2f(52, 114);
    glEnd();
    ///
    glBegin(GL_LINES);
    glColor3f(0, 1, 1);
    glVertex2f(90, 40);
    glVertex2f(130, 40);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 1, 1);
    glVertex2f(95, 54);
    glVertex2f(125, 26);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 1, 1);
    glVertex2f(95, 26);
    glVertex2f(125, 54);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 1, 1);
    glVertex2f(15, 26);
    glVertex2f(45, 54);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 1, 1);
    glVertex2f(45, 26);
    glVertex2f(15, 54);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 1, 1);
    glVertex2f(110, 60);
    glVertex2f(110, 20);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 1, 1);
    glVertex2f(30, 20);
    glVertex2f(30, 60);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 1, 1);
    glVertex2f(10, 40);
    glVertex2f(50, 40);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0, 0.25, 1.0);
    glVertex2f(30, 45);
    glVertex2f(70, 50);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0, 0.25, 1.0);
    glVertex2f(30, 35);
    glVertex2f(70, 30);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0, 0.25, 1.0);
    glVertex2f(45, 95);
    glVertex2f(45, 90);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0, 0.25, 1.0);
    glVertex2f(45, 95);
    glVertex2f(60, 92);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0, 0.25, 1.0);
    glVertex2f(60, 90);
    glVertex2f(45, 90);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0, 0.25, 1.0);
    glVertex2f(60, 90);
    glVertex2f(60, 92);
    glEnd();

    glFlush();
    glutSwapBuffers();
}
int main(int argc, char** argv) {

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
    glutInitWindowPosition(0, 0);
    glutInitWindowSize(500, 500);
    glutCreateWindow("193-15-13510");
    init();
    glutDisplayFunc(Draw);
    glutMainLoop();
    return 0;
}