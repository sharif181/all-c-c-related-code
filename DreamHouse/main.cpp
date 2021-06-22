#include <GL/gl.h>
#include <GL/glut.h>
#include<math.h>
void display(void)
{

glClear(GL_COLOR_BUFFER_BIT);

//green ground
glBegin(GL_QUADS);
glColor3ub(23, 64, 3);
glVertex3i(0,0,0);
glVertex3i(1200,0,0);
glVertex3i(1200,260,0);
glVertex3i(0,260,0);
glEnd();

//house drawing start:


//top roof
glBegin(GL_TRIANGLES);
glColor3ub(41, 31, 12);
glVertex3i(100,400,0);
glVertex3i(1100,400,0);
glVertex3i(600,550,0);


//1st tree bottom
glColor3ub(41, 31, 12);
glVertex3i(110,204,0);
glVertex3i(150,204,0);
glVertex3i(130,240,0);

//2nd tree bottom
glColor3ub(41, 31, 12);
glVertex3i(1130,160,0);
glVertex3i(1170,160,0);
glVertex3i(1150,200,0);

//1st tree leaves
glColor3ub(8, 64, 3);
glVertex3i(80,280,0);
glVertex3i(180,280,0);
glVertex3i(130,380,0);

//2nd tree leaves
glColor3ub(8, 64, 3);
glVertex3i(1090,280,0);
glVertex3i(1210,280,0);
glVertex3i(1150,380,0);


glEnd();


glBegin(GL_QUADS);
// Base shape:
glColor3ub(42, 78, 135);
glVertex3i(200,100,0);
glVertex3i(1000,100,0);
glVertex3i(1000,400,0);
glVertex3i(200,400,0);

//low base
glColor3ub(28, 28, 26);
glVertex3i(190,80,0);
glVertex3i(1010,80,0);
glVertex3i(1010,100,0);
glVertex3i(190,100,0);

//door
glColor3ub(216, 221, 230);
glVertex3i(270,100,0);
glVertex3i(390,100,0);
glVertex3i(390,300,0);
glVertex3i(270,300,0);


//window
glColor3ub(216, 221, 230);
glVertex3i(700,200,0);
glVertex3i(850,200,0);
glVertex3i(850,300,0);
glVertex3i(700,300,0);

//extra design
glColor3ub(41, 31, 12);
glVertex3i(100,370,0);
glVertex3i(1100,370,0);
glVertex3i(1100,400,0);
glVertex3i(100,400,0);


//flag stand
glColor3ub(41, 31, 12);
glVertex3i(55,80,0);
glVertex3i(67,80,0);
glVertex3i(67,550,0);
glVertex3i(55,550,0);

//flag base
glColor3ub(41, 31, 12);
glVertex3i(35,70,0);
glVertex3i(87,70,0);
glVertex3i(87,85,0);
glVertex3i(35,85,0);

//flag main base
glColor3ub(8, 64, 3);
glVertex3i(57,480,0);
glVertex3i(207,480,0);
glVertex3i(207,575,0);
glVertex3i(57,575,0);


//1st tree base
glColor3ub(41, 31, 12);
glVertex3i(120,204,0);
glVertex3i(140,204,0);
glVertex3i(140,280,0);
glVertex3i(120,280,0);

//2nd tree base
glColor3ub(41, 31, 12);
glVertex3i(1140,160,0);
glVertex3i(1160,160,0);
glVertex3i(1160,280,0);
glVertex3i(1140,280,0);
glEnd();



//moon
glBegin(GL_POLYGON);
glColor3ub(171, 167, 159);
float ang;
for(int i=0;i<360;i++){
    ang = i*3.142/180;
    glVertex2f(1150+80*cos(ang),590+80*sin(ang));
}

glEnd();

//flag center shape
glBegin(GL_POLYGON);
float cen;
glColor3ub(220, 0, 0);
for(int i=0;i<360;i++){
    cen = i*3.142/180;
    glVertex2f(150+40*cos(cen),528+40*sin(cen));
}
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
glOrtho(0, 1200, 0, 600, -10.0, 10.0);
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
glutInitWindowSize (1200, 600);
glutInitWindowPosition (100, 75);
glutCreateWindow ("Sharif's Dream House");
init ();
glutDisplayFunc(display);
glutMainLoop();
return 0; /* ISO C requires main to return int. */
}
