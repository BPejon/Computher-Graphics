/*
#include <stdio.h>
#include <glut.h>
#include <iostream>

int						m_Mouse_Coord[2];	// previous mouse coordinates
unsigned char			m_Mouse_Event[3];	// mouse event handler
float					m_Rotate[2];		// x,y
float					m_Zoom;				// view zoom

void Initialize(void)
{
	m_Zoom = 120;
	//depth test
	glEnable(GL_DEPTH_TEST);
	//Background Color Setting
	glClearColor(0.9f, 0.9, 0.9, 1.0f);
}

void display()
{
	//scene buffer clear
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity(); //Transformation matrix initialize

	//according to "translation" and "rotation" adjust the  position and angle
	glTranslatef(0.0, 0.0, -m_Zoom);
	//value m_Rotate changing by mouse (ref: mouse() and motion() function)
	glRotatef(m_Rotate[0], 1.0, 0.0, 0.0);
	glRotatef(m_Rotate[1], 0.0, 1.0, 0.0);

	//Example: Draw Wire cube 
	glColor3f(1.0, 0.0, 0.0);   //color (red color in there) 
	glScalef(1.0, 1.0, 1.0);	//scaling 
	glutWireCube(10);			//draw wire cube with size ten  


	// do something here!!
	// Drawing your characters

	glutSwapBuffers();
}



void Reshape(int w, int h)
{
	glViewport(0, 0, w, h);    //w: is width, h: is height
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(45, (float)w / h, 0.1, 500); // define view frustum
}


void Mouse(int mouse_event, int state, int x, int y)
{
	//mouse x,y coordinate
	m_Mouse_Coord[0] = x;
	m_Mouse_Coord[1] = y;

	switch (mouse_event)
	{
	case GLUT_LEFT_BUTTON:   //check if pressing mouse left button
		m_Mouse_Event[0] = ((GLUT_DOWN == state) ? 1 : 0);
		break;
	default:
		break;
	}
	glutPostRedisplay();
}


void MouseMotion(int x, int y)
{
	//difference of mouse' previous coordinate and current coordinate
	int diffx = x - m_Mouse_Coord[0];
	int diffy = y - m_Mouse_Coord[1];

	m_Mouse_Coord[0] = x;
	m_Mouse_Coord[1] = y;

	//press mouse left button and drag mouse for changing the rotation value
	if (m_Mouse_Event[0])
	{
		m_Rotate[0] += (float)0.1 * diffy;
		m_Rotate[1] += (float)0.1 * diffx;
	}

	glutPostRedisplay();
}


void Keyboard(unsigned char key, int x, int y)
{
	//press"q" for exit program
	switch (key)
	{
	case 'q':
		exit(0);
		break;
		// do something here!!
		// According to the keyboard to control the characters

	}
}




int main(int argc, char* argv[]) {

	//Window generation
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGBA | GLUT_DEPTH | GLUT_DOUBLE);
	glutInitWindowPosition(400, 100); //Window position
	glutInitWindowSize(1024, 576); //Window size
	glutCreateWindow("SkeleetonCode"); //Window name

	//Initialize function
	Initialize();
	//callback function 
	glutDisplayFunc(display);
	glutReshapeFunc(Reshape);
	glutMouseFunc(Mouse);
	glutMotionFunc(MouseMotion);
	glutKeyboardFunc(Keyboard);

	glutMainLoop();

	return 0;
}*/