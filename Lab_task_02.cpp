#include <GL/glut.h>

void display() {
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // White background
    glClear(GL_COLOR_BUFFER_BIT);

    // Increase point size so they are easier to see
    glPointSize(10.0f);

    glBegin(GL_POINTS);
    // Red Dot (Top Right)
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.5f, 0.5f);

    // Green Dot (Top Left)
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(-0.5f, 0.5f);

    // Blue Dot (Bottom Left)
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex2f(-0.5f, -0.5f);

    // Yellow Dot (Bottom Right)
    glColor3f(1.0f, 1.0f, 0.0f); // Red + Green = Yellow
    glVertex2f(0.5f, -0.5f);
    glEnd();

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutCreateWindow("Four Corners");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}