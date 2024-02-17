#include <GL/freeglut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    
    glBegin(GL_TRIANGLES);
        glColor3f(1.0, 0.0, 0.0);  // Vermelho
        glVertex2f(0.0, 1.0);
        glColor3f(0.0, 1.0, 0.0);  // Verde
        glVertex2f(-1.0, -1.0);
        glColor3f(0.0, 0.0, 1.0);  // Azul
        glVertex2f(1.0, -1.0);
    glEnd();
    
    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("OpenGL Teste");
    glClearColor(1.0, 1.0, 1.0, 1.0);  // Cor de fundo branca
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
