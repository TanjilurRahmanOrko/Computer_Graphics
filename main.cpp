#include<cstdio>
#include <GL/gl.h>
#include <GL/glut.h>


GLfloat position = 0.0f;
GLfloat speed = 0.005f;

void update(int value) {

    if(position >1.0)
        position = -1.0f;

    position += speed;

	glutPostRedisplay();


	glutTimerFunc(100, update, 0);
}

void init() {
   glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}

void SpecialInput(int key, int x, int y)
{
switch(key)
{

case GLUT_KEY_F1:

   glLoadIdentity();


gluOrtho2D(-1.0f,0.0f,0.0f,1.0f);//left,right,bottom.top
break;

case GLUT_KEY_F3:

   glLoadIdentity();


gluOrtho2D(-1.0f,0.0f,-1.0f,0.0f);//left,right,bottom.top
break;

case GLUT_KEY_F2:

   glLoadIdentity();


gluOrtho2D(0.0f,1.0f,0.0f,1.0f);//left,right,bottom.top
break;

case GLUT_KEY_F4:

   glLoadIdentity();


gluOrtho2D(0.0f,1.0f,-1.0f,0.0f);//left,right,bottom.top
break;

case GLUT_KEY_UP:
    glLoadIdentity();
gluOrtho2D(-0.30f,0.30f,-0.20f,0.40f);//


//gluOrtho2D(-1.0f,0.0f,-1.0f,1.0f);//left,right,bottom.top

//glutTimerFunc(100, update2, 0);
break;
case GLUT_KEY_DOWN:

   glLoadIdentity();


gluOrtho2D(-0.20f,0.20f,-0.06f,0.34f);//left,right,bottom.top
break;


case GLUT_KEY_LEFT:
glLoadIdentity();
gluOrtho2D(-1.0f,0.0f,-0.20f,0.80f);//left,right,top,bottom
break;

case GLUT_KEY_RIGHT:
glLoadIdentity();
gluOrtho2D(0.0f,1.0f,-0.20f,0.80f);//left,right,top,bottom
break;

}
glutPostRedisplay();
}
void display() {
	glClearColor(0.5f, 0.7f, 1.25f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
	glLineWidth(1.5);
	//glLoadIdentity();
    glPushMatrix();

    glTranslatef(position,0.10f, 1.0f);

    //cloud
    glBegin(GL_POLYGON);
    glColor3f(0.79f, 1.18f, 1.28f);
    glVertex2f(0.50f, 0.45f);   //x, y
    glVertex2f(0.51f, 0.44f);   // x, y
    glVertex2f(0.52f, 0.43f);   // x, y
	glVertex2f(0.53f, 0.42f);   // x, y
	glVertex2f(0.54f, 0.41f);   // x, y
	glVertex2f(0.54f, 0.54f);   // x, y
    glVertex2f(0.73f, 0.82f);   // x, y
	glVertex2f(0.62f, 0.70f);   // x, y
	glVertex2f(0.51f, 0.60f);   // x, y
    glEnd();

    //Cloud
    glBegin(GL_POLYGON);
    glColor3f(0.90f, 1.50f, 1.50f);
    glVertex2f(-0.75f, 1.0f);   //x, y
    glVertex2f(-0.76f, 0.75f);   // x, y
    glVertex2f(-0.77f, 0.61f);   // x, y
	glVertex2f(-0.90f, 0.72f);   // x, y
	glVertex2f(-0.89f, 0.82f);   // x, y
	glVertex2f(-0.88f, 0.55f);   // x, y
    glVertex2f(-0.87f, 0.62f);   // x, y
	glVertex2f(-0.86f, 0.70f);   // x, y
	glVertex2f(-0.82f, 0.60f);   // x, y
    glVertex2f(-0.75f, 0.65f);   //x, y
    glVertex2f(-0.76f, 0.70f);   // x, y
    glVertex2f(-0.77f, 0.71f);   // x, y
	glVertex2f(-0.58f, 0.72f);   // x, y
	glVertex2f(-0.89f, 0.63f);   // x, y
	glVertex2f(-0.88f, 0.65f);   // x, y
    glVertex2f(-0.87f, 0.62f);   // x, y

    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.85f, 0.90f, 0.90f);
    glVertex2f(0.30f, 0.75f);   //x, y
    glVertex2f(0.10f, 0.72f);   // x, y
    glVertex2f(0.11f, 0.83f);   // x, y
	glVertex2f(0.12f, 0.94f);   // x, y
	glVertex2f(0.15f, 0.90f);   // x, y
	glVertex2f(0.13f, 0.83f);   // x, y
    glVertex2f(0.11f, 0.92f);   // x, y
	glVertex2f(0.10f, 0.851f);   // x, y
	glVertex2f(0.05f, 0.80f);   // x, y
    glEnd();

    glPopMatrix();





    //Outside_View

    //Green_Field
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 1.0f, 0.2f);
    glVertex2f(-0.0f,0.0f);    // x, y
    glVertex2f(-1.0f,0.0f);    // x, y
    glVertex2f(-1.0f,-0.80f);    // x, y
    glVertex2f(-0.06f,-0.06f);    // x, y
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 1.0f, 0.2f);
    glVertex2f(0.0f,0.0f);    // x, y
    glVertex2f(1.0f,0.0f);    // x, y
    glVertex2f(1.0f,-0.80f);    // x, y
    glVertex2f(0.06f,-0.06f);    // x, y
    glEnd();

    //Light_Right


    glBegin(GL_LINE_STRIP);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.32f,-0.35f);    // x, y
    glVertex2f(0.32f,-0.15f);    // x, y
    glVertex2f(0.30f,-0.15f);    // x, y
    glVertex2f(0.30f,-0.10f);    // x, y
    glVertex2f(0.34f,-0.10f);    // x, y
    glVertex2f(0.34f,-0.15f);    // x, y
    glVertex2f(0.32f,-0.15f);    // x, y
    glEnd();

    glBegin(GL_LINE_STRIP);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.52f,-0.45f);    // x, y
    glVertex2f(0.52f,-0.25f);    // x, y
    glVertex2f(0.50f,-0.25f);    // x, y
    glVertex2f(0.50f,-0.19f);    // x, y
    glVertex2f(0.54f,-0.19f);    // x, y
    glVertex2f(0.54f,-0.25f);    // x, y
    glVertex2f(0.52f,-0.25f);    // x, y
    glEnd();


    glBegin(GL_LINE_STRIP);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.72f,-0.55f);    // x, y
    glVertex2f(0.72f,-0.35f);    // x, y
    glVertex2f(0.70f,-0.35f);    // x, y
    glVertex2f(0.70f,-0.28f);    // x, y
    glVertex2f(0.74f,-0.28f);    // x, y
    glVertex2f(0.74f,-0.35f);    // x, y
    glVertex2f(0.72f,-0.35f);    // x, y
    glEnd();

    glBegin(GL_LINE_STRIP);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.92f,-0.65f);    // x, y
    glVertex2f(0.92f,-0.45f);    // x, y
    glVertex2f(0.90f,-0.45f);    // x, y
    glVertex2f(0.90f,-0.37f);    // x, y
    glVertex2f(0.94f,-0.37f);    // x, y
    glVertex2f(0.94f,-0.45f);    // x, y
    glVertex2f(0.92f,-0.45f);    // x, y
    glEnd();

    //Light_Left

    glBegin(GL_LINE_STRIP);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.32f,-0.35f);    // x, y
    glVertex2f(-0.32f,-0.15f);    // x, y
    glVertex2f(-0.30f,-0.15f);    // x, y
    glVertex2f(-0.30f,-0.10f);    // x, y
    glVertex2f(-0.34f,-0.10f);    // x, y
    glVertex2f(-0.34f,-0.15f);    // x, y
    glVertex2f(-0.32f,-0.15f);    // x, y
    glEnd();

    glBegin(GL_LINE_STRIP);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.52f,-0.45f);    // x, y
    glVertex2f(-0.52f,-0.25f);    // x, y
    glVertex2f(-0.50f,-0.25f);    // x, y
    glVertex2f(-0.50f,-0.19f);    // x, y
    glVertex2f(-0.54f,-0.19f);    // x, y
    glVertex2f(-0.54f,-0.25f);    // x, y
    glVertex2f(-0.52f,-0.25f);    // x, y
    glEnd();


    glBegin(GL_LINE_STRIP);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.72f,-0.55f);    // x, y
    glVertex2f(-0.72f,-0.35f);    // x, y
    glVertex2f(-0.70f,-0.35f);    // x, y
    glVertex2f(-0.70f,-0.28f);    // x, y
    glVertex2f(-0.74f,-0.28f);    // x, y
    glVertex2f(-0.74f,-0.35f);    // x, y
    glVertex2f(-0.72f,-0.35f);    // x, y
    glEnd();

    glBegin(GL_LINE_STRIP);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.92f,-0.65f);    // x, y
    glVertex2f(-0.92f,-0.45f);    // x, y
    glVertex2f(-0.90f,-0.45f);    // x, y
    glVertex2f(-0.90f,-0.37f);    // x, y
    glVertex2f(-0.94f,-0.37f);    // x, y
    glVertex2f(-0.94f,-0.45f);    // x, y
    glVertex2f(-0.92f,-0.45f);    // x, y
    glEnd();


    //Water
    glBegin(GL_QUADS);
    glColor3f(0.0f, 122.0f, 190.0f);
    glVertex2f(-1.0f,-1.0f);   // x, y
	glVertex2f( 1.0f,-1.0f);   // x, y
    glVertex2f( 0.06f,-0.06f);   // x, y
	glVertex2f(-0.06f,-0.06f);   // x, y
    glEnd();
    //LSide_Water_Wall
    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.65f, 0.84f);
    glVertex2f(-1.0f,-0.70f);   // x, y
	glVertex2f(-1.0f,-1.0f);   // x, y
    glVertex2f(-0.06f,-0.06f);   // x, y
	glVertex2f(-0.06f,-0.07f);   // x, y
    glEnd();

    //Right
    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.65f, 0.84f);
    glVertex2f(1.0f,-0.70f);   // x, y
	glVertex2f(1.0f,-1.0f);   // x, y
    glVertex2f(0.06f,-0.06f);   // x, y
	glVertex2f(0.06f,-0.07f);   // x, y
    glEnd();

    //Upper_LSide_Water_Wall
    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(-1.0f,-0.80f);   // x, y
	glVertex2f(-1.0f,-1.0f);   // x, y
    glVertex2f(-0.06f,-0.07f);   // x, y
	glVertex2f(-0.06f,-0.08f);   // x, y
    glEnd();

    //Right
    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(1.0f,-0.80f);   // x, y
	glVertex2f(1.0f,-1.0f);   // x, y
    glVertex2f(0.06f,-0.07f);   // x, y
	glVertex2f(0.06f,-0.08f);   // x, y
    glEnd();

    //Left
    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.65f, 0.84f);
    glVertex2f(-0.06f,-0.06f);   // x, y
	glVertex2f(-0.06f,-0.07f);   // x, y
    glVertex2f(0.06f,-0.07f);   // x, y
	glVertex2f(0.06f,-0.06f);   // x, y
    glEnd();

    //Right
    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(-0.07f,-0.07f);   // x, y
	glVertex2f(-0.07f,-0.08f);   // x, y
    glVertex2f(0.07f,-0.08f);   // x, y
	glVertex2f(0.07f,-0.07f);   // x, y
    glEnd();


    // Main_Building_Offwhite
	glBegin(GL_QUADS);
	glColor3f(233.0f, 222.0f, 205.0f);
	glVertex2f(-0.20f, 0.0f);    // x, y
	glVertex2f( 0.20f, 0.0f);    // x, y
    glVertex2f( 0.20f, 0.38f);    // x, y
	glVertex2f(-0.20f, 0.38f);    // x, y
    glEnd();


	glBegin(GL_QUADS);              // 1st_Black_Shade
	glColor3f(0.0f, 0.0f, 0.0f); // Black
	glVertex2f(-0.20f, 0.31f);    // x, y
	glVertex2f( 0.20f, 0.31f);    // x, y
    glVertex2f( 0.20f, 0.32f);    // x, y
	glVertex2f(-0.20f, 0.32f);    // x, y
    glEnd();

    glBegin(GL_QUADS);              // 2nd_Black_Shade
	glColor3f(0.0f, 0.0f, 0.0f); // Black
	glVertex2f(-0.20f, 0.28f);    // x, y
	glVertex2f( 0.20f, 0.28f);    // x, y
    glVertex2f( 0.20f, 0.29f);    // x, y
	glVertex2f(-0.20f, 0.29f);    // x, y
    glEnd();

    glBegin(GL_QUADS);              // 3rd_Black_Shade
	glColor3f(0.0f, 0.0f, 0.0f); // Black
	glVertex2f(-0.20f, 0.25f);    // x, y
	glVertex2f( 0.20f, 0.25f);    // x, y
    glVertex2f( 0.20f, 0.26f);    // x, y
	glVertex2f(-0.20f, 0.26f);    // x, y
    glEnd();

    // Entry_Point_Left
    glBegin(GL_LINE_STRIP);
	glColor3f(.0f, .0f, .0f); // Black
	glVertex2f(-0.10f, 0.17f);   // x, y
	glVertex2f(-0.11f, 0.0f);    // x, y
	glVertex2f(-0.08f, 0.0f);    // x, y
	glVertex2f(-0.08f, 0.06f);   // x, y
    glVertex2f(-0.07f, 0.08f);   // x, y
	glVertex2f(-0.06f, 0.09f);   // x, y
	glVertex2f(-0.05f, 0.08f);   // x, y
    glVertex2f(-0.04f, 0.06f);   // x, y
	glVertex2f(-0.03f, 0.06f);   // x, y
	glVertex2f(-0.03f, 0.10f);   // x, y
    glVertex2f(-0.02f, 0.12f);   // x, y
	glVertex2f(-0.01f, 0.13f);   // x, y
	glVertex2f( 0.00f, 0.14f);   // x, y
	// Entry_Point_Right
	glVertex2f(0.01f, 0.13f);   // x, y
    glVertex2f(0.02f, 0.12f);   // x, y
	glVertex2f(0.03f, 0.10f);   // x, y
	glVertex2f(0.03f, 0.06f);   // x, y
    glVertex2f(0.04f, 0.06f);   // x, y
	glVertex2f(0.05f, 0.08f);    // x, y
	glVertex2f(0.06f, 0.09f);    // x, y
	glVertex2f(0.07f, 0.08f);   // x, y
    glVertex2f(0.08f, 0.06f);   // x, y
	glVertex2f(0.08f, 0.0f);   // x, y
	glVertex2f(0.11f, 0.0f);   // x, y
    glVertex2f(0.10f, 0.17f);   // x, y
    glVertex2f(-0.10f, 0.17f);   // x, y
    glEnd();

        //Allahu_Akbar
    glBegin(GL_LINE_STRIP);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.08f , 0.18f);
    glVertex2f(0.08f , 0.21f);
    glVertex2f(0.09f , 0.20f);
    glEnd();

    glBegin(GL_LINE_STRIP);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.09f , 0.23f);
    glVertex2f(0.08f , 0.22f);
    glEnd();

    glBegin(GL_LINE_STRIP);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.03f , 0.18f);
    glVertex2f(0.03f , 0.21f);
    glVertex2f(0.01f , 0.18f);
    glVertex2f(0.04f , 0.18f);
    glVertex2f(0.05f , 0.19f);
    glVertex2f(0.05f , 0.20f);
    glVertex2f(0.05f , 0.19f);
    glVertex2f(0.06f , 0.18f);
    glVertex2f(0.07f , 0.18f);
    glVertex2f(0.07f , 0.21f);
    glEnd();

    glBegin(GL_LINE_STRIP);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.04f , 0.22f);
    glVertex2f(0.04f , 0.21f);
    glVertex2f(0.05f , 0.21f);
    glVertex2f(0.05f , 0.22f);
    glVertex2f(0.05f , 0.21f);
    glVertex2f(0.06f , 0.21f);
    glVertex2f(0.06f , 0.22f);
    glEnd();


    glBegin(GL_LINE_STRIP);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.05f , 0.23f);
    glVertex2f(0.05f , 0.24f);
    glEnd();

    glBegin(GL_LINE_STRIP);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.01f , 0.21f);
    glVertex2f(0.03f , 0.23f);
    glVertex2f(0.02f , 0.24f);
    glVertex2f(0.01f , 0.23f);
    glVertex2f(0.02f , 0.22f);
    glEnd();

    glBegin(GL_LINE_STRIP);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(-0.01f , 0.18f);
    glVertex2f(-0.01f , 0.21f);
    glVertex2f(-0.00f , 0.20f);
    glEnd();

    glBegin(GL_LINE_STRIP);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(-0.00f , 0.23f);
    glVertex2f(-0.01f , 0.22f);
    glEnd();

    glBegin(GL_LINE_STRIP);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(-0.02f , 0.20f);
    glVertex2f(-0.02f , 0.21f);
    glVertex2f(-0.04f , 0.20f);
    glVertex2f(-0.03f , 0.18f);
    glVertex2f(-0.05f , 0.18f);
    glVertex2f(-0.05f , 0.20f);
    glVertex2f(-0.05f , 0.19f);
    glVertex2f(-0.08f , 0.19f);
    glVertex2f(-0.09f , 0.20f);
    glVertex2f(-0.08f , 0.19f);
    glVertex2f(-0.10f , 0.17f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(-0.07f , 0.18f);
    glVertex2f(-0.06f , 0.18f);
    glVertex2f(-0.06f , 0.19f);
    glVertex2f(-0.07f , 0.19f);
    glEnd();

    glBegin(GL_LINE_STRIP);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(-0.04f , 0.22f);
    glVertex2f(-0.04f , 0.23f);
    glVertex2f(-0.03f , 0.23f);
    glVertex2f(-0.03f , 0.22f);
    glVertex2f(-0.04f , 0.20f);
    glEnd();

    glBegin(GL_LINE_STRIP);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(-0.05f , 0.21f);
    glVertex2f(-0.06f , 0.20f);
    glEnd();

    glBegin(GL_LINE_STRIP);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(-0.09f , 0.21f);
    glVertex2f(-0.07f , 0.23f);
    glVertex2f(-0.08f , 0.24f);
    glVertex2f(-0.09f , 0.23f);
    glVertex2f(-0.08f , 0.22f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(225.0f, 227.0f, 205.0f); // Left_Front_Wall_Offwhite
    glVertex2f(-1.0f,0.09f);   // x, y
    glVertex2f(-1.0f, 0.0f);   // x, y
    glVertex2f(-0.20f,0.0f);   // x, y
    glVertex2f(-0.20f,0.10f);   // x, y
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(225.0f,227.0f, 205.0f); // Right_Front_Wall_Offwhite
    glVertex2f(1.0f,0.09f);   // x, y
    glVertex2f(1.0f, 0.0f);   // x, y
    glVertex2f(0.20f,0.0f);   // x, y
    glVertex2f(0.20f,0.10f);   // x, y
    glEnd();

    //Front_Door_Left
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.08f, 0.0f);    // x, y
	glVertex2f(-0.08f, 0.06f);   // x, y
    glVertex2f(-0.07f, 0.08f);   // x, y
	glVertex2f(-0.06f, 0.09f);   // x, y
	glVertex2f(-0.05f, 0.08f);   // x, y
    glVertex2f(-0.04f, 0.06f);   // x, y
	glVertex2f(-0.03f, 0.06f);   // x, y
    glVertex2f(-0.03f, 0.00f);   // x, y
    glEnd();

    //Front_Door_Mid
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.03f, 0.00f);   //x, y
    glVertex2f(-0.03f, 0.10f);   // x, y
    glVertex2f(-0.02f, 0.12f);   // x, y
	glVertex2f(-0.01f, 0.13f);   // x, y
	glVertex2f(0.00f, 0.14f);   // x, y
	glVertex2f(0.01f, 0.13f);   // x, y
    glVertex2f(0.02f, 0.12f);   // x, y
	glVertex2f(0.03f, 0.10f);   // x, y
	glVertex2f(0.03f, 0.00f);   // x, y
    glEnd();

    //Front_Door_Right
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.08f, 0.0f);    // x, y
	glVertex2f(0.08f, 0.06f);   // x, y
    glVertex2f(0.07f, 0.08f);   // x, y
	glVertex2f(0.06f, 0.09f);   // x, y
	glVertex2f(0.05f, 0.08f);   // x, y
    glVertex2f(0.04f, 0.06f);   // x, y
	glVertex2f(0.03f, 0.06f);   // x, y
    glVertex2f(0.03f, 0.00f);   // x, y
    glEnd();

    //Window_Left
    //1_Window
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.90f, 0.01f);    // x, y
	glVertex2f(-0.88f, 0.01f);   // x, y
    glVertex2f(-0.88f, 0.07f);   // x, y
	glVertex2f(-0.89f, 0.08f);   // x, y
	glVertex2f(-0.90f, 0.07f);   // x, y
    glEnd();

    //2_Window
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.80f, 0.01f);    // x, y
	glVertex2f(-0.78f, 0.01f);   // x, y
    glVertex2f(-0.78f, 0.07f);   // x, y
	glVertex2f(-0.79f, 0.08f);   // x, y
	glVertex2f(-0.80f, 0.07f);   // x, y
    glEnd();

      //3_Window
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.70f, 0.01f);    // x, y
	glVertex2f(-0.68f, 0.01f);   // x, y
    glVertex2f(-0.68f, 0.07f);   // x, y
	glVertex2f(-0.69f, 0.08f);   // x, y
	glVertex2f(-0.70f, 0.07f);   // x, y
    glEnd();

    //4_Window
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.60f, 0.01f);    // x, y
	glVertex2f(-0.58f, 0.01f);   // x, y
    glVertex2f(-0.58f, 0.07f);   // x, y
	glVertex2f(-0.59f, 0.08f);   // x, y
	glVertex2f(-0.60f, 0.07f);   // x, y
    glEnd();

    //5_Window
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.50f, 0.01f);    // x, y
	glVertex2f(-0.48f, 0.01f);   // x, y
    glVertex2f(-0.48f, 0.07f);   // x, y
	glVertex2f(-0.49f, 0.08f);   // x, y
	glVertex2f(-0.50f, 0.07f);   // x, y
    glEnd();

    //6_Window
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.40f, 0.01f);    // x, y
	glVertex2f(-0.38f, 0.01f);   // x, y
    glVertex2f(-0.38f, 0.07f);   // x, y
	glVertex2f(-0.39f, 0.08f);   // x, y
	glVertex2f(-0.40f, 0.07f);   // x, y
    glEnd();

      //7_Window
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.30f, 0.01f);    // x, y
	glVertex2f(-0.28f, 0.01f);   // x, y
    glVertex2f(-0.28f, 0.07f);   // x, y
	glVertex2f(-0.29f, 0.08f);   // x, y
	glVertex2f(-0.30f, 0.07f);   // x, y
    glEnd();

    //8_Special_Window
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.20f, 0.01f);    // x, y
	glVertex2f(-0.16f, 0.01f);   // x, y
    glVertex2f(-0.16f, 0.07f);   // x, y
	glVertex2f(-0.17f, 0.08f);   // x, y
	glVertex2f(-0.18f, 0.09f);   // x, y
    glVertex2f(-0.19f, 0.08f);   // x, y
    glVertex2f(-0.20f, 0.07f);   // x, y
    glEnd();

    //Window_Right

    //1_Window
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.90f, 0.01f);    // x, y
	glVertex2f(0.88f, 0.01f);   // x, y
    glVertex2f(0.88f, 0.07f);   // x, y
	glVertex2f(0.89f, 0.08f);   // x, y
	glVertex2f(0.90f, 0.07f);   // x, y
    glEnd();

    //2_Window
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.80f, 0.01f);    // x, y
	glVertex2f(0.78f, 0.01f);   // x, y
    glVertex2f(0.78f, 0.07f);   // x, y
	glVertex2f(0.79f, 0.08f);   // x, y
	glVertex2f(0.80f, 0.07f);   // x, y
    glEnd();

      //3_Window
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.70f, 0.01f);    // x, y
	glVertex2f(0.68f, 0.01f);   // x, y
    glVertex2f(0.68f, 0.07f);   // x, y
	glVertex2f(0.69f, 0.08f);   // x, y
	glVertex2f(0.70f, 0.07f);   // x, y
    glEnd();

    //4_Window
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.60f, 0.01f);    // x, y
	glVertex2f(0.58f, 0.01f);   // x, y
    glVertex2f(0.58f, 0.07f);   // x, y
	glVertex2f(0.59f, 0.08f);   // x, y
	glVertex2f(0.60f, 0.07f);   // x, y
    glEnd();

    //5_Window
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.50f, 0.01f);    // x, y
	glVertex2f(0.48f, 0.01f);   // x, y
    glVertex2f(0.48f, 0.07f);   // x, y
	glVertex2f(0.49f, 0.08f);   // x, y
	glVertex2f(0.50f, 0.07f);   // x, y
    glEnd();

    //6_Window
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.40f, 0.01f);    // x, y
	glVertex2f(0.38f, 0.01f);   // x, y
    glVertex2f(.38f, 0.07f);   // x, y
	glVertex2f(0.39f, 0.08f);   // x, y
	glVertex2f(0.40f, 0.07f);   // x, y
    glEnd();

      //7_Window
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.30f, 0.01f);    // x, y
	glVertex2f(0.28f, 0.01f);   // x, y
    glVertex2f(0.28f, 0.07f);   // x, y
	glVertex2f(0.29f, 0.08f);   // x, y
	glVertex2f(0.30f, 0.07f);   // x, y
    glEnd();

    //8_Special_Window
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.20f, 0.01f);    // x, y
	glVertex2f(0.16f, 0.01f);   // x, y
    glVertex2f(0.16f, 0.07f);   // x, y
	glVertex2f(0.17f, 0.08f);   // x, y
	glVertex2f(0.18f, 0.09f);   // x, y
    glVertex2f(0.19f, 0.08f);   // x, y
    glVertex2f(0.20f, 0.07f);   // x, y
    glEnd();

    //Front_Stairs
    glBegin(GL_POLYGON);
    glColor3f(233.0f, 214.0f, 208.0f); // Left_Front_Wall_Offwhite

    glVertex2f(0.25f,-0.06f);   // x, y
    glVertex2f(0.20f,-0.03f);   // x, y
    glVertex2f(0.17f,-0.03f);   // x, y
    glVertex2f(0.11f,0.0f);   // x, y

    glVertex2f(-0.11f,0.0f);   // x, y
    glVertex2f(-0.17f,-0.03f);   // x, y
    glVertex2f(-0.20f,-0.03f);   // x, y
    glVertex2f(-0.25f,-0.06f);   // x, y
    glEnd();

   glFlush();
}



int main(int argc, char** argv) {
   glutInit(&argc, argv);
   glutInitWindowSize(320, 320);
   glutInitWindowPosition(50, 50);
   glutCreateWindow("Basic Animation");
   glutDisplayFunc(display);
   init();
   glutSpecialFunc(SpecialInput);
   glutTimerFunc(100, update, 0);
   glutMainLoop();
   return 0;
}

