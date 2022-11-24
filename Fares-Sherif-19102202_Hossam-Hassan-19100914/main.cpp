#include<GL/gl.h>
#include <GL/glu.h>
#include<GL/glut.h>

#include<stdlib.h>
#include<windows.h>
#include<math.h>
void display();
void reshape(int v, int h);
void timer(int);
void init(){
glClearColor(0.0,0.0,0.0,1.0);
}

int main(int argc,char**argv)

{

    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_RGB);

    glutInitWindowPosition(200,0);
    glutInitWindowSize(1200,800);

    glutCreateWindow("Fares Sherif 19102202/ Hossam Hassan 19100914");

    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutTimerFunc(0,timer,0);
    init();

    glutMainLoop();
}
float step=2;

void display()
{

    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

     glColor3f(1,1,1);

            glLineWidth(5);
            glBegin(GL_LINES);

            glVertex2f(-20,-19.5);
            glVertex2f(20,-19.5);


            glVertex2f(-20,-16);
            glVertex2f(20,-16);

            glVertex2f(-20,-17.75);
            glVertex2f(-18,-17.75);

            glVertex2f(-16,-17.75);
            glVertex2f(-14,-17.75);


            glVertex2f(-12,-17.75);
            glVertex2f(-10,-17.75);        //From Line 45 to Line 81 is the Road

            glVertex2f(-8,-17.75);
            glVertex2f(-6,-17.75);

            glVertex2f(-4,-17.75);
            glVertex2f(-2,-17.75);

            glVertex2f(-0,-17.75);
            glVertex2f(2,-17.75);

            glVertex2f(4,-17.75);
            glVertex2f(6,-17.75);

            glVertex2f(8,-17.75);
            glVertex2f(10,-17.75);

            glVertex2f(12,-17.75);
            glVertex2f(14,-17.75);

            glVertex2f(16,-17.75);
            glVertex2f(18,-17.75);

            glEnd();


            glColor3f(0.2,0.2,0.2);
            glBegin(GL_POLYGON);

            glVertex2f(-19,-15);
            glVertex2f(-13,-15);   //House Base Shape (rectangle/Square)
            glVertex2f(-13,-6);
            glVertex2f(-19,-6);
            glEnd();


            glBegin(GL_TRIANGLES);

            glColor3f(1.0f, 1.0f, 1.0f);
            glVertex2f(-19.5f, -6.0f);
            glVertex2f(-12.5f, -6.0f);    //Roof of House
            glVertex2f(-16.0f, 0.0f);

            glEnd();

            glColor3f(0.5f, 0.35f, 0.05f);
            glBegin(GL_POLYGON);
            glVertex2f(-17,-14.5);
            glVertex2f(-15,-14.5);
            glVertex2f(-15,-9.5);         //Door
            glVertex2f(-17,-9.5);

            glEnd();




            glLineWidth(2);
            glBegin(GL_POLYGON);
            glColor3f(1,1,0);            //Doorknob
            double x = 0.3;
            double y = 0.5;
            for(int i=0;i<360;i++)
            {
                double angle = i*3.14/180;
                glVertex2f(x*cos(angle)-16.5, y*sin(angle)-12);
            }
            glEnd();

            glLineWidth(2);
            glBegin(GL_POLYGON);
            glColor3f(0.1,0.8,1);
            double xWindow1 = 1;       //Window 1
            double yWindow1 = 1.2;
            for(int i=0;i<360;i++)
            {
                double angle = i*3.14/180;
                glVertex2f(xWindow1*cos(angle)-16, yWindow1*sin(angle)-4);
            }
            glEnd();


            glLineWidth(2);
            glBegin(GL_LINES);
            glColor3f(1,1,1);

            glVertex2f(-18,-4);
            glVertex2f(-15,-4);

            glVertex2f(-16,-2);         //Window 1 splits
            glVertex2f(-16,-6);

            glEnd();

        ///////////////////////////////////////////////////////////////
        //second house
            int h2TransformX = 8;


            glColor3f(0.2,0.6,1);
            glBegin(GL_POLYGON);

            glVertex2f(-19+h2TransformX,-15);
            glVertex2f(-13+h2TransformX,-15);   //House Base Shape (rectangle/Square)
            glVertex2f(-13+h2TransformX,-6);
            glVertex2f(-19+h2TransformX,-6);
            glEnd();


            glBegin(GL_TRIANGLES);

            glColor3f(1.0f, 1.0f, 1.0f);
            glVertex2f(-19.5+h2TransformX, -6.0);
            glVertex2f(-12.5+h2TransformX, -6.0);    //Roof of House
            glVertex2f(-16.0+h2TransformX, 0.0);

            glEnd();

            glColor3f(0.5f, 0.35f, 0.05f);
            glBegin(GL_POLYGON);
            glVertex2f(-17+h2TransformX,-14.5);
            glVertex2f(-15+h2TransformX,-14.5);
            glVertex2f(-15+h2TransformX,-9.5);         //Door
            glVertex2f(-17+h2TransformX,-9.5);

            glEnd();




            glLineWidth(2);
            glBegin(GL_POLYGON);
            glColor3f(1,1,0);            //Doorknob
            double x2 = 0.3;
            double y2 = 0.5;
            for(int i=0;i<360;i++)
            {
                double angle = i*3.14/180;
                glVertex2f(x2*cos(angle)-16.5+h2TransformX, y2*sin(angle)-12);
            }
            glEnd();

            glLineWidth(2);
            glBegin(GL_POLYGON);
            glColor3f(0.1,0.8,1);
            double xWindow2 = 1;       //Window 2
            double yWindow2 = 1.2;
            for(int i=0;i<360;i++)
            {
                double angle = i*3.14/180;
                glVertex2f(xWindow2*cos(angle)-16+h2TransformX, yWindow2*sin(angle)-4);
            }
            glEnd();


            glLineWidth(2);
            glBegin(GL_LINES);
            glColor3f(1,1,1);

            glVertex2f(-18+h2TransformX,-4);
            glVertex2f(-15+h2TransformX,-4);

            glVertex2f(-16+h2TransformX,-2);         //Window 2 splits
            glVertex2f(-16+h2TransformX,-6);

            glEnd();

              glLineWidth(2);
            glBegin(GL_LINE_STRIP);
            glColor3f(1,1,0);            //Half Birb
            double x3 = 1;
            double y3 = 1;
            for(int i=0;i<170;i++)
            {
                double angle = i*3.14/180;
                glVertex2f(x3*cos(angle)-17+step, y3*sin(angle)+17);
            }

            glEnd();

            glLineWidth(2);
            glBegin(GL_LINE_STRIP);
            glColor3f(1,1,0);            //Half Birb 2
            double x4 = 1;
            double y4 = 1;
            for(int i=0;i<160;i++)
            {
                double angle = i*3.14/180;
                glVertex2f(x4*cos(angle)-19+step, y4*sin(angle)+17);
            }
            glEnd();

             glLineWidth(2);
            glBegin(GL_LINE_STRIP);
            glColor3f(1,1,0);            //Half Birb
            double x5 = 1;
            double y5 = 1;
            for(int i=0;i<170;i++)
            {
                double angle = i*3.14/180;
                glVertex2f(x5*cos(angle)-10+step, y5*sin(angle)+17);
            }

            glEnd();

            glLineWidth(2);
            glBegin(GL_LINE_STRIP);
            glColor3f(1,1,0);            //Half Birb 2
            double x6 = 1;
            double y6 = 1;
            for(int i=0;i<160;i++)
            {
                double angle = i*3.14/180;
                glVertex2f(x6*cos(angle)-12+step, y6*sin(angle)+17);
            }
            glEnd();

            glLineWidth(4);
            glBegin(GL_POLYGON);
            glColor3f(1,1,1);
            double x7 = 1.5;
            double y7 = 1;
            for(int i=180;i<360;i++)
            {
                double angle = i*3.14/180;
                glVertex2f(x7*cos(angle)-12, y7*sin(angle)+20);
            }
            glEnd();

            glLineWidth(4);
            glBegin(GL_POLYGON);
            glColor3f(1,1,1);
            for(int i=180;i<360;i++)
            {
                double angle = i*3.14/180;
                glVertex2f(x7*cos(angle)-10, y7*sin(angle)+20);
            }
            glEnd();
            //From line 279 to line 319 first cloud on the left
            glLineWidth(4);
            glBegin(GL_POLYGON);
            glColor3f(1,1,1);
            for(int i=180;i<360;i++)
            {
                double angle = i*3.14/180;
                glVertex2f(x7*cos(angle)-8, y7*sin(angle)+20);
            }
            glEnd();

            glLineWidth(4);
            glBegin(GL_POLYGON);
            glColor3f(1,1,1);
            for(int i=180;i<360;i++)
            {
                double angle = i*3.14/180;
                glVertex2f(x7*cos(angle)-6, y7*sin(angle)+20);
            }
            glEnd();
            //end of cloud 1
            glLineWidth(4);
            glBegin(GL_POLYGON);
            glColor3f(1,1,1);
            for(int i=180;i<360;i++)
            {
                double angle = i*3.14/180;
                glVertex2f(x7*cos(angle)+12, y7*sin(angle)+20);
            }
            glEnd();

            glLineWidth(4);
            glBegin(GL_POLYGON);
            glColor3f(1,1,1);
            for(int i=180;i<360;i++)
            {
                double angle = i*3.14/180;
                glVertex2f(x7*cos(angle)+10, y7*sin(angle)+20);
            }
            glEnd();

            glLineWidth(4);
            glBegin(GL_POLYGON);
            glColor3f(1,1,1);
            for(int i=180;i<360;i++)
            {
                double angle = i*3.14/180;
                glVertex2f(x7*cos(angle)+8, y7*sin(angle)+20);
            }
            glEnd();

            glLineWidth(4);
            glBegin(GL_POLYGON);
            glColor3f(1,1,1);
            for(int i=180;i<360;i++)
            {
                double angle = i*3.14/180;
                glVertex2f(x7*cos(angle)+6, y7*sin(angle)+20);
            }
            glEnd();



  /*  glLineWidth(10.0);

    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);




     glColor3f(1, 0, 1);
     glTranslated(step,1,2);
     glBegin(GL_POLYGON);
     glVertex2f(2+step,2+step);
     glVertex2f(2+step,3+step);
     glVertex2f(-2+step,2+step);
     glVertex2f(3+step,-2+step);
     */


    glEnd();

    glFlush();



}

void display_house1()
{

    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

     glColor3f(1,1,1);

            glLineWidth(5);





  /*  glLineWidth(10.0);

    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);




     glColor3f(1, 0, 1);
     glTranslated(step,1,2);
     glBegin(GL_POLYGON);
     glVertex2f(2+step,2+step);
     glVertex2f(2+step,3+step);
     glVertex2f(-2+step,2+step);
     glVertex2f(3+step,-2+step);
     */


    glEnd();

    glFlush();

}

void reshape(int w, int h)
{

glViewport(0,0,(GLsizei)w,(GLsizei)h);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(-20,20,-20,20);
glMatrixMode(GL_MODELVIEW);

}
void timer(int)
{

    glutPostRedisplay();
    glutTimerFunc(1000/60,timer,0);
    step+=0.1;
}


