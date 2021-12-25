#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>

void init(void)
{
  glClearColor(0.2,0.3,0.36,0.0); //GLfloat red,green,blue,alpha initial value 0 alpha values used by glclear to clear the color buffers
  glMatrixMode(GL_PROJECTION);  // To specify which matrix is the current matrix & projection applies subsequent matrix to projecton matrix stack
  glLoadIdentity();
  glOrtho(0.0, 500.0, 0.0, 500.0, -1.0, 500.0);
}
 void Display(){
    glClear(GL_COLOR_BUFFER_BIT);

    //circle for sunrise
    glColor3f( 1 ,0, 0);
   double x0=-10, y0=300+10, r=10;
   glBegin(GL_POLYGON);
   glVertex2d(x0,y0);

   double dp0=1-r;
   double dp_new;

   while(1){
    if(dp0<0){
        x0++;
        dp_new=dp0+2*x0+1;
    }
    else if(dp0>=0){
        x0++;
        y0--;
        dp_new=dp0+2*x0-2*y0+1;
    }
    dp0=dp_new;
    glVertex2d(x0,y0);
    glVertex2d(-x0,y0);
    glVertex2d(x0,-y0);
    glVertex2d(-x0,-y0);
    glVertex2d(y0,x0);
    glVertex2d(-y0,x0);
    glVertex2d(y0,-x0);
    glVertex2d(-y0,-x0);

    if(x0>=y0){
        break;
    }
   }
    glEnd();

    //river
    glColor3f(0.23,0.7,0.8);
    glBegin(GL_POLYGON);
    glVertex2d(0,220);
    glVertex2d(0,200);
    glVertex2d(1000,200);
    glVertex2d(1000,220);
    glEnd();

    //river
    glColor3f(0.23,0.7,0.8);
    glBegin(GL_POLYGON);
    glVertex2d(400,200);
    glVertex2d(300,100);
    glVertex2d(1000,100);
    glVertex2d(1000,200);
    glEnd();

    //river
    glColor3f(0.23,0.7,0.8);
    glBegin(GL_POLYGON);
    glVertex2d(350,100);
    glVertex2d(250,0);
    glVertex2d(1000,0);
    glVertex2d(1000,100);
    glEnd();

    //field 1
    glColor3f(0.2,0.4,0);
    glBegin(GL_POLYGON);
    glVertex2d(0,200);
    glVertex2d(0,100);
    glVertex2d(300,100);
    glVertex2d(400,200);
    glEnd();

    //field 2
    glColor3f(0.2,0.4,0);
    glBegin(GL_POLYGON);
    glVertex2d(0,100);
    glVertex2d(0,0);
    glVertex2d(250,0);
    glVertex2d(350,100);
    glEnd();

    //field top
    glColor3f(0.1,0.5,0);
    glBegin(GL_POLYGON);
    glVertex2d(0,230);
    glVertex2d(0,220);
    glVertex2d(1000,220);
    glVertex2d(1000,230);
    glEnd();


    //first tree top
    glColor3f(0.1,0.5,0);
    glBegin(GL_TRIANGLES);
    glVertex2d(0,230);
    glVertex2d(100,230);
    glVertex2d(40,270);
    glEnd();
    //First tree bottom
    glColor3f(0.1,0.5,0);
    glBegin(GL_TRIANGLES);
    glVertex2d(70,230);
    glVertex2d(160,230);
    glVertex2d(115,270);
    glEnd();
    //tree root
    glColor3f(0,0.2,0);
    glBegin(GL_POLYGON);
    glVertex2d(30,230);
    glVertex2d(30,150);
    glVertex2d(40,150);
    glVertex2d(40,230);
    glEnd();

    //tree top
    glColor3f(0.1,0.5,0);
    glBegin(GL_TRIANGLES);
    glVertex2d(160,230);
    glVertex2d(250,230);
    glVertex2d(200,270);
    glEnd();
    glColor3f(0.1,0.5,0);
    glBegin(GL_TRIANGLES);
    glVertex2d(250,230);
    glVertex2d(400,230);
    glVertex2d(300,300);
    glEnd();
    glColor3f(0.1,0.5,0);
    glBegin(GL_TRIANGLES);
    glVertex2d(400,230);
    glVertex2d(500,230);
    glVertex2d(450,270);
    glEnd();
    glColor3f(0,0.4,0);
    glBegin(GL_TRIANGLES);
    glVertex2d(0,230);
    glVertex2d(80,230);
    glVertex2d(40,270);
    glEnd();
    glColor3f(0,0.4,0);
    glBegin(GL_TRIANGLES);
    glVertex2d(4,250);
    glVertex2d(70,250);
    glVertex2d(40,300);
    glEnd();

    //2nd tree root
    glColor3f(0.75,0.75,0.75);
    glBegin(GL_TRIANGLES);
    glVertex2d(50,200);
    glVertex2d(150,200);
    glVertex2d(100,250);
    glEnd();
    glColor3f(0.2,0.1,0);
    glBegin(GL_POLYGON);
    glVertex2d(60,150);
    glVertex2d(150,150);
    glVertex2d(150,200);
    glVertex2d(60,200);
    glEnd();

    //top
    glColor3f(0.75,0.75,0.75);
    glBegin(GL_POLYGON);
    glVertex2d(100,250);
    glVertex2d(150,200);
    glVertex2d(250,200);
    glVertex2d(200,250);
    glEnd();

    //bottom
    glColor3f(0.2,0.1,0);
    glBegin(GL_POLYGON);
    glVertex2d(150,150);
    glVertex2d(240,150);
    glVertex2d(240,200);
    glVertex2d(150,200);
    glEnd();

    glColor3f(0.1,0.2,0.3);
    glBegin(GL_POLYGON);
    glVertex2d(150,150);
    glVertex2d(151,150);
    glVertex2d(151,201);
    glVertex2d(150,200);
    glEnd();


    glColor3f(0.1,0.2,0.3);
    glBegin(GL_POLYGON);
    glVertex2d(100,250);
    glVertex2d(150,200);
    glVertex2d(151,201);
    glVertex2d(101,251);
    glEnd();

    //door
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_POLYGON);
    glVertex2d(90,150);
    glVertex2d(120,150);
    glVertex2d(120,180);
    glVertex2d(90,180);
    glEnd();

    //door
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_POLYGON);
    glVertex2d(180,150.5);
    glVertex2d(210,150.8);
    glVertex2d(210,180);
    glVertex2d(180,180);
    glEnd();

    //upper tree
    glColor3f(0,0.2,0);
    glBegin(GL_POLYGON);
    glVertex2d(350,300);
    glVertex2d(350,230);
    glVertex2d(354,230);
    glVertex2d(354,300);
    glEnd();
    glColor3f(0.1,0.5,0);
    glBegin(GL_TRIANGLES);
    glVertex2d(320,300);
    glVertex2d(388,300);
    glVertex2d(350,330);
    glEnd();
    glColor3f(0.1,0.5,0);
    glBegin(GL_TRIANGLES);
    glVertex2d(330,315);
    glVertex2d(373,315);
    glVertex2d(350,345);
    glEnd();

     //upper tree
    glColor3f(0,0.2,0);
    glBegin(GL_POLYGON);
    glVertex2d(360,310);
    glVertex2d(360,230);
    glVertex2d(364,230);
    glVertex2d(364,310);
    glEnd();
    glColor3f(0.0,0.39,0);
    glBegin(GL_TRIANGLES);
    glVertex2d(340,310);
    glVertex2d(400,310);
    glVertex2d(370,340);
    glEnd();
    glColor3f(0.0,0.39,0);
    glBegin(GL_TRIANGLES);
    glVertex2d(350,320);
    glVertex2d(390,320);
    glVertex2d(370,350);
    glEnd();







    glFlush();
    glutSwapBuffers();
 }

int main(int argc,char **argv){


    glutInit(&argc,argv);
    glutInitDisplayMode ( GLUT_RGB | GLUT_DOUBLE );
    glutInitWindowPosition(150,150);
    glutInitWindowSize(1000,1000);
    glutCreateWindow("Lab project ID: 182-15-2132 and ID: 182-15-2111");
    init();
    glutDisplayFunc(Display);
    glutMainLoop();
    return 0;
}
