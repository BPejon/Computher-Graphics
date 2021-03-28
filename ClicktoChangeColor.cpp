/*
#include <gl/glut.h>
#include <gl/GLU.h>
#include <gl/GL.h>
#include <iostream>
#include <Windows.h>
 

int width, height;
GLint topLeftx, topLefty, bottomRightx, bottomRighty;

//Desenha o quadrado
void display() {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();

	//Draw triangle
	// /400 é pra limitar em uma tela de 400 por 400
	glColor3f(1.0f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);	
	glVertex3f(topLeftx /400.0f, (400 - topLefty)/400.0f, 0.0f);
	glVertex3f(topLeftx/400.0f, (400-bottomRighty)/400.0f, 0.0f);
	glVertex3f(bottomRightx/400.0f, (400-bottomRighty)/400.0f, 0.0f);
	glVertex3f(bottomRightx/400.0f, (400-topLefty)/400.0f, 0.0f);
	glEnd();

	glFlush();
}

void onKeyPress(unsigned char key, int x, int y) {

	switch (key) {
	case 'Q':
	case 'q':
	case 27:
		exit (0);
		break;
	}
}

void onMouseButton(GLint button, GLint state, GLint x, GLint y) {
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {
		topLeftx = x;
		topLefty = y;
	}
}

void onMouseDrag(GLint x, GLint y) {
	bottomRightx = x;
	bottomRighty = y;
	glutPostRedisplay();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	width = 400;
	height = 400;
	glutInitDisplayMode(GLUT_RGBA | GLUT_DEPTH | GLUT_SINGLE);
	glutInitWindowSize(width, height);
	glutCreateWindow("Janela");

	glutDisplayFunc(display);
	
	//Funçãoo de mouse
	glutMouseFunc(onMouseButton);
	glutMotionFunc(onMouseDrag);

	//Função de teclado
	glutKeyboardFunc(onKeyPress);
	glutMainLoop();
	return 0;
}
*/