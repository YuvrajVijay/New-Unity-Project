#include<GL/glut.h>
#include<windows.h>
#include<stdio.h>
float counter = 0.0;
float x;
float y;
float z;
bool button_1=1;
bool button_2=1;
bool button_3=1;
bool button_4=1;
bool button_5=1;
bool button_6=1;
bool button_7=1;
bool button_0=1;
void drawCircle( GLfloat cx , GLfloat cy ,GLfloat cz ,  GLfloat radius ,int COLOR)
{
    int i;
    int triangleAmount = 2000;
    GLfloat twicePI = 2.0f*3.14f;
    glBegin(GL_LINES);
    switch(COLOR)
    {
    case 1://white
        glColor3f(1.0,1.0,1.0);
        break;
    case 0://black
        glColor3f(0,0,0);
        break;
    case 2:
        glColor3f(0.5,1.0,0.2);
        break;
    }
    for(i=0; i<=triangleAmount;i++)
    {
        glVertex3d(cx,cy,cz);
        glVertex3d(cx-+(radius*cos(i*twicePI/triangleAmount)) , cy+ +(radius*sin(i*twicePI/triangleAmount)), cz);
    }
    glEnd();
}

void line(GLfloat x1, GLfloat y1,GLfloat x2, GLfloat y2)
{   glEnable(GL_LINE_SMOOTH);
    glBegin(GL_LINES);
    glLineWidth(50.0);
    glColor3f(1,0.0,0.0);
    glVertex3f(x1,y1, 0.0);
    glVertex3f(x2,y2, 0.0);
    glVertex3f(x1,y1+0.003, 0.0);
    glVertex3f(x2,y2+0.003, 0.0);
    glEnd();
}
void calculate()
{  z = 4-button_1-button_3-button_5-button_7;
   y = 4-button_2-button_3-button_6-button_7;
   x = 4-button_4-button_5-button_6-button_7;
}
void check_and_draw()
{ if(x==1)
   drawCircle(+0.5,0.2,0,0.05,2);
  if(y==1)
   drawCircle(+0.5,0.0,0,0.05,2);
  if(z==1)
   drawCircle(+0.5,-0.2,0,0.05,2);
}
void display()
{
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
  drawCircle(-0.7,-0.8,0,0.05,button_0);
  drawCircle(-0.7,-0.6,0,0.05,button_1);
  drawCircle(-0.7,-0.4,0,0.05,button_2);
  drawCircle(-0.7,-0.2,0,0.05,button_3);
  drawCircle(-0.7,-0.0,0,0.05,button_4);
  drawCircle(-0.7,0.2,0,0.05,button_5);
  drawCircle(-0.7,0.4,0,0.05,button_6);
  drawCircle(-0.7,0.6,0,0.05,button_7);
  line(-0.75,-0.8,-1,-0.8);
  line(-0.75,-0.6,-1,-0.6);
  line(-0.75,-0.4,-1,-0.4);
  line(-0.75,-0.2,-1,-0.2);
  line(-0.75,-0.0,-1,-0.0);
  line(-0.75,0.2,-1,0.2);
  line(-0.75,0.4,-1,0.4);
  line(-0.75,0.6,-1,0.6);
  // code for box of encoder
  line(-0.8,-0.9,-0.8,0.75);
  line(-0.8,0.75,0.1,0.75);
  line(0.1,0.75,0.1,-0.9);
  line(0.1,-0.9,-0.8,-0.9);
   // output lines of encoder
  line(0.0,-0.2,0.5,-0.2);
  line(0.0,0.0,0.5,0.0);
  line(0.0,0.2,0.5,0.2);
  calculate();
  check_and_draw();
  line(0.4,0.21,0.43,0.25);
  line(0.4,0.25,0.43,0.21);
  line(0.45,0.22,0.47,0.22);
  line(0.45,0.235,0.47,0.235);

  glutSwapBuffers();
}



void mouse( GLint button_Number , GLint button_action , GLint xMouse , GLint yMouse )
{
	if(button_Number == GLUT_LEFT_BUTTON && button_action == GLUT_DOWN )
        {
            if( xMouse >=110 && xMouse <=158 )
            {if(yMouse >=625 && yMouse <= 650 )
               if(button_0==true)
			button_0=false;
		else if(button_0==false)
			button_0=true;

            }



	    if( xMouse >=110 && xMouse <=158 )
            {if(yMouse >=550 && yMouse <= 600 )
               if(button_1==true)
			button_1=false;
		else if(button_1==false)
			button_1=true;

            }


	    if( xMouse >=110 && xMouse <=158 )
            {if(yMouse >=475 && yMouse <= 525 )
               if(button_2==true)
			button_2=false;
		else if(button_2==false)
			button_2=true;

            }


	    if( xMouse >=110 && xMouse <=158 )
            {if(yMouse >=400 && yMouse <= 450 )
               if(button_3==true)
			button_3=false;
		else if(button_3==false)
			button_3=true;

            }


	    if( xMouse >=110 && xMouse <=158 )
            {if(yMouse >=325 && yMouse <= 375 )
               if(button_4==true)
			button_4=false;
		else if(button_4==false)
			button_4=true;

            }


	    if( xMouse >=110 && xMouse <=158 )
            {if(yMouse >=250 && yMouse <=300 )
               if(button_5==true)
			button_5=false;
		else if(button_5==false)
			button_5=true;

            }


	    if( xMouse >=110 && xMouse <=158 )
            {if(yMouse >=175 && yMouse <=225 )
               if(button_6==true)
			button_6=false;
		else if(button_6==false)
			button_6=true;

            }


	    if( xMouse >=110 && xMouse <=158 )
            {if(yMouse >=100 && yMouse <= 150 )
               if(button_7==true)
			button_7=false;
		else if(button_7==false)
			button_7=true;

            }
	}
}


void reshape(int w, int h)
{
  glViewport(0,0,w,h); // width and height
}


void initOpenGL()
{ glClearColor(0.5,1,1,0.0);
  glDepthFunc( GL_LEQUAL );
}


int main(int argc,char **argv)
{
glutInit(&argc,argv);
  glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA | GLUT_DEPTH);
  glutInitWindowSize(900,1500);
  glutInitWindowPosition(100,100);
  glutCreateWindow("VIRTUAL 8- BIT ENCODER TRAINER SET");


  initOpenGL();

  glutDisplayFunc(display);
  glutIdleFunc(display);
  glutReshapeFunc(reshape);
  glutMouseFunc(mouse);
  glutMainLoop();
  return 0;
}
