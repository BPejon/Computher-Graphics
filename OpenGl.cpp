/*
#include <gl/glut.h>
#include <gl/GLU.h>
#include <gl/GL.h>
#include <iostream>
#include <Windows.h>

int width, height;

float Delta;
int lado;
void reshape(int w, int h) {
	width = w;
	height = h;
	glViewport(0,0,width, height);
}
void display() {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();

	//Draw triangle
	glLineWidth(10.0f);
	glBegin(GL_TRIANGLES);
		glColor3f(1.0f, 0.0f, 0.0f);
		glVertex3f(0.0f + Delta, 0.5f, 0.0f);
		
		glColor3f(1.0f, 0.0f, 0.0f);
		glVertex3f(-0.5f + Delta, -0.5f, 0.0f);

		glColor3f(0.0f, 1.0f, 0.0f);
		glVertex3f(0.5f + Delta, -0.5f, 0.0f);
	glEnd();

	glFlush();
}

void idle() {
	Delta = Delta + 0.1f;
	glutPostRedisplay();	//Redesenha a tela
}

void Timerfunc(int value) {
	printf("%f\n", Delta);
	printf(" Lado eh - %d\n", lado);
	if (Delta < 1 && lado == 0) {
		Delta = Delta + 0.01f;
		glutPostRedisplay();
		glutTimerFunc(1, Timerfunc, 1);
	}
	else {
		Delta = Delta - 0.004f;
		lado = 1;
		if (Delta <= -1) {
			lado = 0;
			printf("pasosu no if\n");
		}
		glutPostRedisplay();
		glutTimerFunc(1, Timerfunc, 1);
		
	}
	
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	Delta = 0.01f;
	width = 600;
	height = 400;
	lado = 0;
	glutInitDisplayMode(GLUT_RGBA | GLUT_DEPTH | GLUT_SINGLE);
	glutInitWindowSize(width, height);
	glutCreateWindow("Janela");
	
	//glutReshapeFunc(reshape);
	glutDisplayFunc(display);
	//glutIdleFunc(idle);
	glutTimerFunc(100, Timerfunc,1);
	glutMainLoop();
	return 0;
}
*/