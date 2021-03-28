/*#include <gl/glut.h>
#include <gl/GLU.h>
#include <gl/GL.h>
#include <iostream>
#include <Windows.h>


// Desenha o quadrado
void display() {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();

	//Draw triangle
	//Draw triangle
	glLineWidth(10.0f);
	glBegin(GL_TRIANGLES);
		glColor3f(1.0f, 0.0f, 0.0f);
		glVertex3f(0.0f, 0.5f, 0.0f);

		glColor3f(1.0f, 0.0f, 0.0f);
		glVertex3f(-0.5f, -0.5f, 0.0f);

		glColor3f(0.0f, 1.0f, 0.0f);
		glVertex3f(0.5f, -0.5f, 0.0f);
	glEnd();

	glFlush();
}


int main(int argc, char ** argv) {


	//Init Glew
	glutInit(&argc, argv);

	//Open Window
	const int width = 400;
	const int height = 400;
	glutInitDisplayMode(GLUT_RGBA | GLUT_DEPTH | GLUT_SINGLE);
	glutInitWindowSize(width, height);
	glutCreateWindow("Janela");

	glutDisplayFunc(display);

	//Main  Loop
	glutMainLoop();
	//End of Program


	return 0;
}*/