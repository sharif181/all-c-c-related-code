#include <GL/gl.h>
#include <GL/glut.h>
#include<math.h>
void display(void)
{

glClear(GL_COLOR_BUFFER_BIT);

//green ground
glBegin(GL_QUADS);
glColor3ub(215, 246, 247);
glVertex3i(0,0,0);
glVertex3i(600,0,0);
glVertex3i(600,600,0);
glVertex3i(0,600,0);
//sky color
glColor3ub(23, 64, 3);
glVertex3i(0,0,0);
glVertex3i(600,0,0);
glVertex3i(600,100,0);
glVertex3i(0,100,0);

//1st floor
glColor3ub(214, 134, 105);
glVertex3i(200,30,0);
glVertex3i(400,30,0);
glVertex3i(400,140,0);
glVertex3i(200,140,0);
glEnd();


glBegin(GL_QUADS);
glColor3ub(145, 96, 78);
glVertex3i(175,50,0);
glVertex3i(200,30,0);
glVertex3i(200,140,0);
glVertex3i(175,140,0);
glEnd();

glBegin(GL_QUADS);
glColor3ub(145, 96, 78);
glVertex3i(200,140,0);
glVertex3i(400,140,0);
glVertex3i(400,160,0);
glVertex3i(200,160,0);

glColor3ub(145, 96, 78);
glVertex3i(200,70,0);
glVertex3i(175,120,0);
glVertex3i(175,160,0);
glVertex3i(200,160,0);

glVertex3i(200,85,0);
glVertex3i(400,85,0);
glVertex3i(400,95,0);
glVertex3i(200,95,0);

glVertex3i(290,30,0);
glVertex3i(310,30,0);
glVertex3i(310,60,0);
glVertex3i(290,60,0);

glVertex3i(230,45,0);
glVertex3i(250,45,0);
glVertex3i(250,70,0);
glVertex3i(230,70,0);

glVertex3i(230,105,0);
glVertex3i(250,105,0);
glVertex3i(250,130,0);
glVertex3i(230,130,0);


glVertex3i(350,45,0);
glVertex3i(370,45,0);
glVertex3i(370,70,0);
glVertex3i(350,70,0);

glVertex3i(350,105,0);
glVertex3i(370,105,0);
glVertex3i(370,130,0);
glVertex3i(350,130,0);



glVertex3i(230,145,0);
glVertex3i(250,145,0);
glVertex3i(250,170,0);
glVertex3i(230,170,0);

glEnd();







glFlush ();
}
void init (void)
{
/* select clearing (background) color */
glClearColor (0.0, 0.0, 0.0, 0.0);
/* initialize viewing values */
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(0, 600, 0, 400, -10.0, 10.0);
}
/*
* Declare initial window size, position, and display mode
* (single buffer and RGBA). Open window with "hello"
* in its title bar. Call initialization routines.
* Register callback function to display graphics.
* Enter main loop and process events.
*/
int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (600, 400);
glutInitWindowPosition (100, 75);
glutCreateWindow ("hello");
init ();
glutDisplayFunc(display);
glutMainLoop();
return 0; /* ISO C requires main to return int. */
}
