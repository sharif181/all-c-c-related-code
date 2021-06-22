//#include <GL/gl.h>
//#include <GL/glut.h>
//#include<stdio.h>
//float x1,y1,x2,y2,m,dx,dy;
//
//void display(void)
//{
///* clear all pixels */
//glClear(GL_COLOR_BUFFER_BIT);
///* draw white polygon (rectangle) with corners at
//* (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
//*/
//
//glBegin(GL_POINTS);
//glColor3ub(0,255,0);
//    if(m>0 && m<=1){
//        while(x1<=x2 && y1<=y2){
//            x1 = x1 + 1;
//            y1 = y1 + m;
//            glVertex3f(x1,y1,0);
//            printf("%d %d\n",x1,y1);
//        }
//    }
//    else if(m>1){
//        while(x1<=x2 && y1<=y2){
//            x1=x1+(1/m);
//            y1=y1+1;
//            glVertex3f(x1,y1,0);
//            printf("%d %d\n",x1,y1);
//        }
//    }
//    else if(m>=-1 && m<=0){
//        while(x1>=x2 && y1>=y2){
//            x1=x1-1;
//            y1=y1-m;
//            glVertex3f(x1,y1,0);
//            printf("%d %d\n",x1,y1);
//        }
//    }
//    else if(m<-1){
//        while(x1>=x2 && y1>=y2){
//            x1=x1-(1/m);
//            y1=y1-1;
//            glVertex3f(x1,y1,0);
//            printf("%d %d\n",x1,y1);
//        }
//    }
//
//glEnd();
//
//
//
//glFlush ();
//}
//void init (void)
//{
///* select clearing (background) color */
//glClearColor (0.0, 0.0, 0.0, 0.0);
///* initialize viewing values */
//glMatrixMode(GL_PROJECTION);
//glLoadIdentity();
//glOrtho(-100, 100, -100, 100, -10.0, 10.0);
//}
///*
//* Declare initial window size, position, and display mode
//* (single buffer and RGBA). Open window with "hello"
//* in its title bar. Call initialization routines.
//* Register callback function to display graphics.
//* Enter main loop and process events.
//*/
//int main(int argc, char** argv)
//{
//    printf("Enter starting point (x1 y1): ");
//    scanf("%f %f",&x1,&y1);
//    printf("Enter End point (x2 y2): ");
//    scanf("%f %f",&x2,&y2);
//    dy = y2-y1;
//    dx = x2-x1;
//    m = dy/dx;
//
//    glutInit(&argc, argv);
//    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
//    glutInitWindowSize (600, 600);
//    glutInitWindowPosition (100, 100);
//    glutCreateWindow ("DDA implementation : ");
//    init ();
//    glutDisplayFunc(display);
//    glutMainLoop();
//return 0; /* ISO C requires main to return int. */
//}

//rubina
#include <GL/gl.h>
#include <GL/glut.h>
#include <stdio.h>
float x1,x2,y1,y2;
float m;
float dy,dx;
void display(void)
{
    /* clear all pixels */
    glClear(GL_COLOR_BUFFER_BIT);
    /* draw white polygon (rectangle) with corners at
    * (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
    */
    glBegin(GL_POINTS);
    glColor3ub(0,255,0);
    if (m>0 && m<=1)
    {
        while (x1<=x2 && y1<=y2)
        {
            x1=x1+1;
            y1=y1+m;
            glVertex3f(x1,y1,0);
            printf("%f %f",x1,y1);
        }
    }
    else if (m>1)
    {
        while(x1<=x2 && y1<=y2)
        {
            x1=x1+(1/m);
            y1=y1+1;
            glVertex3f(x1,y1,0);
            printf("%f %f",x1,y1);
        }
    }
    else if (m>=-1 && m<=0)
    {
        while(x1>=x2 && y1>=y2)
        {
            x1=x1-1;
            y1=y1-m;
            glVertex3f(x1,y1,0);
            printf("%f %f",x1,y1);
        }
    }

    else if (m<-1)
    {
        while(x1>=x2 && y1>=y2)
        {
            x1=x1-(1/m);
            y1=y1-1;
            glVertex3f(x1,y1,0);
            printf("%f %f",x1,y1);
        }
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
    glOrtho(-100, 100, -100, 100, -10.0, 10.0);
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
    printf("Enter the Value of x1: ");
    scanf("%f", &x1);
    printf("Enter the Value of y1: ");
    scanf("%f", &y1);
    printf("Enter the Value of x2: ");
    scanf("%f", &x2);
    printf("Enter the Value of y2: ");
    scanf("%f", &y2);
    dy=y2-y1;
    dx=x2-x1;
    m=dy/dx; //Calculating Slop
    printf ("%f",m);
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (600, 600);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("hello");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0; /* ISO C requires main to return int. */
}
