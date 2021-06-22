#include <GL/gl.h>
#include <GL/glut.h>
#include<math.h>
void display(void)
{

glClear(GL_COLOR_BUFFER_BIT);

glBegin(GL_QUADS);
glColor3ub(237, 234, 228);
glVertex3i(0,0,0);
glVertex3i(1200,0,0);
glVertex3i(1200,600,0);
glVertex3i(0,600,0);
glEnd();


//green ground
glBegin(GL_QUADS);
glColor3ub(23, 64, 3);
glVertex3i(0,0,0);
glVertex3i(1200,0,0);
glVertex3i(1200,260,0);
glVertex3i(0,260,0);
glEnd();

glBegin(GL_TRIANGLES);
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
//tree end

glBegin(GL_QUADS);
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

//front side
glBegin(GL_QUADS);
glColor3ub(96, 140, 13);
glVertex3i(880,60,0);
glVertex3i(1080,60,0);
glVertex3i(1080,200,0);
glVertex3i(880,200,0);
glEnd();

//left side
glBegin(GL_QUADS);
glColor3ub(145, 96, 78);
glVertex3i(855,80,0);
glVertex3i(880,60,0);
glVertex3i(880,200,0);
glVertex3i(855,200,0);
glEnd();

//top roof
glBegin(GL_QUADS);
glColor3ub(38, 35, 29);
glVertex3i(880,180,0);
glVertex3i(1080,180,0);
glVertex3i(1080,200,0);
glVertex3i(880,200,0);

glColor3ub(38, 35, 29);
glVertex3i(970,60,0);
glVertex3i(1000,60,0);
glVertex3i(1000,90,0);
glVertex3i(970,90,0);

glVertex3i(880,120,0);
glVertex3i(1080,120,0);
glVertex3i(1080,130,0);
glVertex3i(880,130,0);

glColor3ub(38, 35, 29);
glVertex3i(1030,145,0);
glVertex3i(1050,145,0);
glVertex3i(1050,170,0);
glVertex3i(1030,170,0);


glColor3ub(38, 35, 29);
glVertex3i(990,145,0);
glVertex3i(1010,145,0);
glVertex3i(1010,170,0);
glVertex3i(990,170,0);

glColor3ub(38, 35, 29);
glVertex3i(950,145,0);
glVertex3i(970,145,0);
glVertex3i(970,170,0);
glVertex3i(950,170,0);


glColor3ub(38, 35, 29);
glVertex3i(910,145,0);
glVertex3i(930,145,0);
glVertex3i(930,170,0);
glVertex3i(910,170,0);
glEnd();
//2nd house end




glBegin(GL_QUADS);
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

//front side
glBegin(GL_QUADS);
glColor3ub(96, 140, 13);
glVertex3i(200,30,0);
glVertex3i(400,30,0);
glVertex3i(400,140,0);
glVertex3i(200,140,0);
glEnd();

//left side
glBegin(GL_QUADS);
glColor3ub(145, 96, 78);
glVertex3i(175,50,0);
glVertex3i(200,30,0);
glVertex3i(200,140,0);
glVertex3i(175,140,0);
glEnd();

//top roof
glBegin(GL_QUADS);
glColor3ub(38, 35, 29);
glVertex3i(200,140,0);
glVertex3i(400,140,0);
glVertex3i(400,160,0);
glVertex3i(200,160,0);

//
glColor3ub(0, 96, 78);
glVertex3i(200,70,0);
glVertex3i(175,120,0);
glVertex3i(175,160,0);
glVertex3i(200,160,0);

glVertex3i(200,85,0);
glVertex3i(400,85,0);
glVertex3i(400,95,0);
glVertex3i(200,95,0);

glColor3ub(38, 35, 29);
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


glColor3ub(38, 35, 29);
glVertex3i(230,145,0);
glVertex3i(250,145,0);
glVertex3i(250,170,0);
glVertex3i(230,170,0);
glEnd();

//roads
glBegin(GL_QUADS);
glColor3ub(6, 98, 156);
glVertex3i(700,0,0);
glVertex3i(900,0,0);
glVertex3i(700,130,0);
glVertex3i(600,170,0);

glVertex3i(600,170,0);
glVertex3i(700,130,0);
glVertex3i(700,260,0);
glVertex3i(600,260,0);
glEnd();



//sun
glBegin(GL_POLYGON);
glColor3ub(240, 181, 65);
float ang;
for(int i=0;i<360;i++){
    ang = i*3.142/180;
    glVertex2f(1000+80*cos(ang),500+80*sin(ang));
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
