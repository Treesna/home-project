#include <GL/gl.h>
#include <iostream>
#include <GL/glut.h>
#include <math.h>
int posx = 0, posy = 0, sun_posx = 0;
int rad, x, y, a, b, h;
bool SE, E;


void tree() {
   glColor3ub(140, 123, 109);

  glBegin(GL_POLYGON);

  glVertex2f(50, 350);
  glVertex2f(70, 350);

  glVertex2f(70, 500);
  glVertex2f(50, 500);

  glEnd();

  glColor3f(0.0, 0.5, 0.0);

  glBegin(GL_POLYGON);

  glVertex2f(10, 500);
  glVertex2f(110, 500);

  glVertex2f(60, 600);

  glEnd();
  glBegin(GL_POLYGON);

  glVertex2f(15, 550);
  glVertex2f(105, 550);

  glVertex2f(60, 650);

  glEnd();

   glColor3ub(140, 123, 109);

  glBegin(GL_POLYGON);

  glVertex2f(50 + 100, 350);
  glVertex2f(70 + 100, 350);

  glVertex2f(70 + 100, 500);
  glVertex2f(50 + 100, 500);

  glEnd();

  glColor3f(0.0, 0.5, 0.0);

  glBegin(GL_POLYGON);

  glVertex2f(10 + 100, 500);
  glVertex2f(110 + 100, 500);

  glVertex2f(60 + 100, 600);

  glEnd();
  glBegin(GL_POLYGON);

  glVertex2f(15 + 100, 550);
  glVertex2f(105 + 100, 550);

  glVertex2f(60 + 100, 650);

  glEnd();
   glColor3ub(140, 123, 109);

  glBegin(GL_POLYGON);

  glVertex2f(50 + 1000, 350 + 100);
  glVertex2f(70 + 1000, 350 + 100);

  glVertex2f(70 + 1000, 500 + 100);
  glVertex2f(50 + 1000, 500 + 100);

  glEnd();

  glColor3f(0.0, 0.5, 0.0);

  glBegin(GL_POLYGON);

  glVertex2f(10 + 1000, 500 + 100);
  glVertex2f(110 + 1000, 500 + 100);

  glVertex2f(60 + 1000, 600 + 100);

  glEnd();
  glBegin(GL_POLYGON);

  glVertex2f(15 + 1000, 550 + 100);
  glVertex2f(105 + 1000, 550 + 100);

  glVertex2f(60 + 1000, 650 + 100);

  glEnd();
   glColor3ub(140, 123, 109);

  glBegin(GL_POLYGON);

  glVertex2f(50 + 1100, 350 + 200);
  glVertex2f(70 + 1100, 350 + 200);

  glVertex2f(70 + 1100, 500 + 200);
  glVertex2f(50 + 1100, 500 + 200);

  glEnd();

  glColor3f(0.0, 0.5, 0.0);

  glBegin(GL_POLYGON);

  glVertex2f(10 + 1100, 500 + 200);
  glVertex2f(110 + 1100, 500 + 200);

  glVertex2f(60 + 1100, 600 + 200);

  glEnd();
  glBegin(GL_POLYGON);

  glVertex2f(15 + 1100, 550 + 200);
  glVertex2f(105 + 1100, 550 + 200);

  glVertex2f(60 + 1100, 650 + 200);

  glEnd();
   glColor3ub(140, 123, 109);

  glBegin(GL_POLYGON);

  glVertex2f(50 + 900, 350 + 200);
  glVertex2f(70 + 900, 350 + 200);

  glVertex2f(70 + 900, 500 + 200);
  glVertex2f(50 + 900, 500 + 200);

  glEnd();

  glColor3f(0.0, 0.5, 0.0);

  glBegin(GL_POLYGON);

  glVertex2f(10 + 900, 500 + 200);
  glVertex2f(110 + 900, 500 + 200);

  glVertex2f(60 + 900, 600 + 200);

  glEnd();
  glBegin(GL_POLYGON);

  glVertex2f(15 + 900, 550 + 200);
  glVertex2f(105 + 900, 550 + 200);

  glVertex2f(60 + 900, 650 + 200);

  glEnd();
}

void tree_night() {
   glColor3ub(140, 123, 109);


  glBegin(GL_POLYGON);

  glVertex2f(50, 350);
  glVertex2f(70, 350);

  glVertex2f(70, 500);
  glVertex2f(50, 500);

  glEnd();

    glColor3f(0.0630, 0.210, 0.107);

  glBegin(GL_POLYGON);

  glVertex2f(10, 500);
  glVertex2f(110, 500);

  glVertex2f(60, 600);

  glEnd();
  glBegin(GL_POLYGON);

  glVertex2f(15, 550);
  glVertex2f(105, 550);

  glVertex2f(60, 650);

  glEnd();

   glColor3ub(140, 123, 109);

  glBegin(GL_POLYGON);

  glVertex2f(50 + 100, 350);
  glVertex2f(70 + 100, 350);

  glVertex2f(70 + 100, 500);
  glVertex2f(50 + 100, 500);

  glEnd();

  glColor3f(0.0630, 0.210, 0.107);



  glBegin(GL_POLYGON);

  glVertex2f(10 + 100, 500);
  glVertex2f(110 + 100, 500);

  glVertex2f(60 + 100, 600);

  glEnd();
  glBegin(GL_POLYGON);

  glVertex2f(15 + 100, 550);
  glVertex2f(105 + 100, 550);

  glVertex2f(60 + 100, 650);

  glEnd();
   glColor3ub(140, 123, 109);

  glBegin(GL_POLYGON);

  glVertex2f(50 + 1000, 350 + 100);
  glVertex2f(70 + 1000, 350 + 100);

  glVertex2f(70 + 1000, 500 + 100);
  glVertex2f(50 + 1000, 500 + 100);

  glEnd();

   glColor3f(0.0630, 0.210, 0.107);


  glBegin(GL_POLYGON);

  glVertex2f(10 + 1000, 500 + 100);
  glVertex2f(110 + 1000, 500 + 100);

  glVertex2f(60 + 1000, 600 + 100);

  glEnd();
  glBegin(GL_POLYGON);

  glVertex2f(15 + 1000, 550 + 100);
  glVertex2f(105 + 1000, 550 + 100);

  glVertex2f(60 + 1000, 650 + 100);

  glEnd();
   glColor3ub(140, 123, 109);

  glBegin(GL_POLYGON);

  glVertex2f(50 + 1100, 350 + 200);
  glVertex2f(70 + 1100, 350 + 200);

  glVertex2f(70 + 1100, 500 + 200);
  glVertex2f(50 + 1100, 500 + 200);

  glEnd();

  glColor3f(0.0630, 0.210, 0.107);


  glBegin(GL_POLYGON);

  glVertex2f(10 + 1100, 500 + 200);
  glVertex2f(110 + 1100, 500 + 200);

  glVertex2f(60 + 1100, 600 + 200);

  glEnd();
  glBegin(GL_POLYGON);

  glVertex2f(15 + 1100, 550 + 200);
  glVertex2f(105 + 1100, 550 + 200);

  glVertex2f(60 + 1100, 650 + 200);

  glEnd();
   glColor3ub(140, 123, 109);

  glBegin(GL_POLYGON);

  glVertex2f(50 + 900, 350 + 200);
  glVertex2f(70 + 900, 350 + 200);

  glVertex2f(70 + 900, 500 + 200);
  glVertex2f(50 + 900, 500 + 200);

  glEnd();

  glColor3f(0.0630, 0.210, 0.107);


  glBegin(GL_POLYGON);

  glVertex2f(10 + 900, 500 + 200);
  glVertex2f(110 + 900, 500 + 200);

  glVertex2f(60 + 900, 600 + 200);

  glEnd();
  glBegin(GL_POLYGON);

  glVertex2f(15 + 900, 550 + 200);
  glVertex2f(105 + 900, 550 + 200);

  glVertex2f(60 + 900, 650 + 200);

  glEnd();
}


void river() {

  glBegin(GL_POLYGON);

  glVertex2f(0, 0);
  glVertex2f(1200, 0);
  glVertex2f(1200, 300);
  glVertex2f(0, 300);

  glEnd();
}

void land() {

  glBegin(GL_POLYGON);

  glVertex2f(0, 300);
  glVertex2f(1200, 300);
  glVertex2f(1200, 600);
  glVertex2f(0, 600);

  glEnd();
}

void hill() {
  glBegin(GL_POLYGON);

  glVertex2f(600, 600);
  glVertex2f(800, 900);
  glVertex2f(900, 650);


  glBegin(GL_POLYGON);

  glVertex2f(900, 650);
  glVertex2f(1000, 800);
  glVertex2f(1100, 620);


  glBegin(GL_POLYGON);

  glVertex2f(1050, 620);
  glVertex2f(1200, 800);
  glVertex2f(1200, 600);

  glEnd();
}


void house() {
  glColor3f(0.5411764705882353, 0.0, 0.5411764705882353);

  glBegin(GL_POLYGON);

  glVertex2f(220, 350);
  glVertex2f(380, 350);
  glVertex2f(380, 450);
  glVertex2f(220, 450);

  glEnd();

  glColor3f(0, 0, 1);
  glBegin(GL_POLYGON);

  glVertex2f(200, 450);
  glVertex2f(400, 450);
  glVertex2f(300, 650);

  glEnd();

  glColor3f(1, 1, 0);
  glBegin(GL_POLYGON);

  glVertex2f(280, 350);
  glVertex2f(320, 350);
  glVertex2f(320, 450);
  glVertex2f(280, 450);
  glEnd();
}

void house_night() {
  glColor3f(0.270, 0.0756, 0.247);

  glBegin(GL_POLYGON);

  glVertex2f(220, 350);
  glVertex2f(380, 350);
  glVertex2f(380, 450);
  glVertex2f(220, 450);

  glEnd();

  glColor3f(0.154, 0.290, 0.480);
  glBegin(GL_POLYGON);

  glVertex2f(200, 450);
  glVertex2f(400, 450);
  glVertex2f(300, 650);

  glEnd();

  glColor3f(0.597, 0.620, 0.273);
  glBegin(GL_POLYGON);

  glVertex2f(280, 350);
  glVertex2f(320, 350);
  glVertex2f(320, 450);
  glVertex2f(280, 450);
  glEnd();
}


void sun() {
  glColor3ub(253, 184, 19);
  int i;
  int triangleAmount = 1000;
  GLfloat twicePi = 2.0f * 3.14f;
  GLfloat x = 1000;
  GLfloat y = 1000;
  GLfloat radius = 100;
  glBegin(GL_TRIANGLE_FAN);
  glVertex2f(x, y);
  for (i = 0; i <= triangleAmount; i++) {
    glVertex2f(x + (radius * cos(i * twicePi / triangleAmount)),
               y + (radius * sin(i * twicePi / triangleAmount)));
  }

  glEnd();
}


void moon() {
  int i;
  int triangleAmount = 1000;
  GLfloat twicePi = 2.0f * 3.14f;
  GLfloat x = 1000;
  GLfloat y = 1000;
  GLfloat radius = 100;
  glBegin(GL_TRIANGLE_FAN);
  glVertex2f(x, y);
  for (i = 0; i <= triangleAmount; i++) {
    glVertex2f(x + (radius * cos(i * twicePi / triangleAmount)),
               y + (radius * sin(i * twicePi / triangleAmount)));
  }

  glEnd();
}


void boat() {
  glColor3f(0, 0, 0);
  glBegin(GL_POLYGON);

  glVertex2f(10, 150);
  glVertex2f(150 + 50, 150);
  glVertex2f(120 + 50, 100);
  glVertex2f(30, 100);
  glEnd();
  glColor3f(1, 0, 0);
  glBegin(GL_POLYGON);

  glVertex2f(50, 150);
  glVertex2f(150, 150);
  glVertex2f(150, 220);
  glVertex2f(50, 220);
  glEnd();

}

void boat_night() {
  glColor3f(0, 0, 0);
  glBegin(GL_POLYGON);

  glVertex2f(10, 150);
  glVertex2f(150 + 50, 150);
  glVertex2f(120 + 50, 100);
  glVertex2f(30, 100);
  glEnd();
  glColor3f(0.270, 0.132, 0.171);
  glBegin(GL_POLYGON);

  glVertex2f(50, 150);
  glVertex2f(150, 150);
  glVertex2f(150, 220);
  glVertex2f(50, 220);
  glEnd();

}


void StartingText()
{
    char text[120];

        sprintf(text, "UNIVERSITY OF INFORMATION TECHNOLOGY & SCIENCE",5.00,8.00);
    glColor3f(0, 1, 0);
    glRasterPos2f( -35 , 55 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -32 , 02 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }

    sprintf(text, "My Village",5.00,8.00);
    //glColor3f(1, 1, 0);
    glColor3f(0.510, 0.296, 0.417);
    glRasterPos2f( -20 , 45 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -32 , 02 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }

        sprintf(text, "NAME- Treesna Sultana",5.00,8.00);
    glColor3f(0.870, 0.565, 0.606);
    glRasterPos2f( -20 , 35 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -32 , 02 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }
        sprintf(text, "ID-1914551084",5.00,8.00);
    glColor3f(0.870, 0.565, 0.606);
    glRasterPos2f( -20 , 30 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -32 , 02 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }
            sprintf(text, "DEPARTMENT OF CSE",5.00,8.00);
    glColor3f(0.870, 0.565, 0.606);
    glRasterPos2f( -20 , 25 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -32 , 02 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }
            sprintf(text, "SUBMITTED TO-",5.00,8.00);
    glColor3f(0.880, 0.233, 0.0176);
    glRasterPos2f( -20 , 17 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -32 , 02 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }
                sprintf(text, "SALIM SHADMAN ANKUR & PROPA PUNAM",5.00,8.00);
    glColor3f(0.880, 0.233, 0.0176);
    glRasterPos2f( -10 , 12 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -32 , 02 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }
                sprintf(text, "PRESS 'd' FOR DAY MODE",5.00,8.00);
    glColor3f(1, 1, 1);
    glRasterPos2f( -20 , 0 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -32 , 02 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }
        sprintf(text, " PRESS 'n' FOR NIGHT MODE",5.00,8.00);
    glColor3f(1, 1, 1);
    glRasterPos2f( -21 , -5 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -32 , 02 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }
    sprintf(text, " PRESS 'f' FOR FRONT WINDOW",5.00,8.00);
    glColor3f(1, 1, 1);
    glRasterPos2f( -21 , -10 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -32 , 02 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }



}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glClearColor(0,0,0,0);
    glMatrixMode( GL_PROJECTION );
    glLoadIdentity();
    gluOrtho2D(-70,70,-50,50);
    glMatrixMode( GL_MODELVIEW );
    glLoadIdentity();

    glPushMatrix();
    StartingText();
    glEnd();
    glPopMatrix();
     glFlush();
    glutSwapBuffers();



}

void night(void) {
     glClearColor(0,0,0,1);
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glColor3f(0,0,0);
    glLoadIdentity(); //Reset the drawing perspective
    gluOrtho2D(0.0, 1200.0, 0, 1200.0);//range
    glMatrixMode(GL_MODELVIEW);


    glPushMatrix();
    glColor3f(0.359, 0.460, 0.423);
    land();
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.139, 0.290, 0.235);
    hill();
    glPopMatrix();

    glPushMatrix();
    tree_night();
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.264, 0.412, 0.550);
    river();
    glPopMatrix();

    glPushMatrix();
    house_night();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(sun_posx, 0, 0);
    glPushMatrix();
    glColor3f(1,1,1);
    moon();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-15, 0, 0);
    glColor3f(0,0,0);
    moon();
    glPopMatrix();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(posx, 0, 0);
    boat_night();
    glPopMatrix();

  glFlush();
}

void day(void) {
     glClearColor(1.0f,1.0f,1.0f,1.0f);
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glColor3d(1,0,0);
    glLoadIdentity(); //Reset the drawing perspective
    gluOrtho2D(0.0, 1200.0, 0, 1200.0);//range
    glMatrixMode(GL_MODELVIEW);


    glPushMatrix();
    glColor3ub(142, 213, 171);
    land();
    glPopMatrix();

    glPushMatrix();
    glColor3ub(56, 160, 146);
    hill();
    glPopMatrix();

    glPushMatrix();
    tree();
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.0352941176470588, 0.5098039215686275, 0.9568627450980392);
    river();
    glPopMatrix();

    glPushMatrix();
    house();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(sun_posx, 0, 0);
    sun();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(posx, 0, 0);
    boat();
    glPopMatrix();

  glFlush();
}

void handleKeypress(unsigned char key, int x, int y) {
	switch (key) {
        case  'd':
            glutDestroyWindow(1);
            glutInitWindowSize(1000, 600);

            glutCreateWindow("Day mode");
            glutKeyboardFunc(handleKeypress);
            glutDisplayFunc(day);
            break;

        case 'n':
            glutDestroyWindow(1);
            glutInitWindowSize(1000, 600);

            glutCreateWindow("Night mode");
            glutKeyboardFunc(handleKeypress);
            glutDisplayFunc(night);


            break;
        case 'f':
            glutDestroyWindow(1);
            glutInitWindowSize(1500, 1000);

            glutCreateWindow("Front Page");
            glutKeyboardFunc(handleKeypress);
            glutDisplayFunc(display);


            break;

glutPostRedisplay();
}}

void update(int value) {
  if (posx >= 1200) {
    posx = 0;
  } else {
    posx++;
  }

  if (sun_posx >= 600) {
    sun_posx = -1000;
  } else {
    sun_posx += 2;
  }

  glutPostRedisplay();
  glutTimerFunc(10, update, 0);
}

void init() {
   glClearColor(0.0f, 0.0f, 0.0f, 1.0f);


}

int main(int argc, char** argv) {
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
  glutInitWindowSize(1000, 600);
  glutInitWindowPosition(0, 0);
  glutCreateWindow("Treesna Sultana");


    glutKeyboardFunc(handleKeypress);

  glutDisplayFunc(display);
  glutDisplayFunc(night);

  glutTimerFunc(25, update, 0);
  glutMainLoop();
  return 0;
}

