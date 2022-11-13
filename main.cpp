
#include <GL/gl.h>
#include <iostream>
#include <GL/glut.h>
#include <math.h>
int posx = 0, posy = 0, sun_posx = 0;


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
void river() {
  glColor3f(0.0352941176470588, 0.5098039215686275, 0.9568627450980392);
  glBegin(GL_POLYGON);

  glVertex2f(0, 0);
  glVertex2f(1200, 0);
  glVertex2f(1200, 300);
  glVertex2f(0, 300);

  glEnd();
}
void land() {
 glColor3ub(142, 213, 171);
  glBegin(GL_POLYGON);

  glVertex2f(0, 300);
  glVertex2f(1200, 300);
  glVertex2f(1200, 600);
  glVertex2f(0, 600);

  glEnd();
}
void hill() {
  glColor3ub(56, 160, 146);
  glBegin(GL_POLYGON);

  glVertex2f(600, 600);
  glVertex2f(800, 900);
  glVertex2f(900, 650);

  glColor3ub(56, 160, 146);
  glBegin(GL_POLYGON);

  glVertex2f(900, 650);
  glVertex2f(1000, 800);
  glVertex2f(1100, 620);

  glColor3ub(56, 160, 146);
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

int rad, x, y, a, b, h;
bool SE, E;

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

void draw_object() {
    land();
    hill();
    tree();
    river();
    house();


    glPushMatrix();
    glTranslatef(sun_posx, 0, 0);
    sun();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(posx, 0, 0);
    boat();
    glPopMatrix();


}

void display(void) {
  glClear(GL_COLOR_BUFFER_BIT);

  draw_object();

  glFlush();
}

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

void init(void) {
  glClearColor(0.61, 0.93, 0.99, 1.0);

  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  gluOrtho2D(0.0, 1200.0, 0, 1200.0);
}

int main(int argc, char** argv) {
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
  glutInitWindowSize(1000, 600);
  glutInitWindowPosition(0, 0);
  glutCreateWindow("Treesna Sultana");

  glutDisplayFunc(display);

  init();
  glutTimerFunc(25, update, 0);
  glutMainLoop();
  return 0;
}
