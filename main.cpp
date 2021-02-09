#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
void userdraw(void);
void drawDot(float x, float y)
{
    glBegin(GL_POINTS) ;
    glVertex2f(x,y) ;
    glEnd() ;
}
void display (void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    userdraw();
    glutSwapBuffers();
}


void drawLine(float x1,float y1, float x2, float y2){
    glBegin(GL_LINES);
    glVertex2f(x1,y1);
    glVertex2f(x2,y2);
    glEnd();
}
void setColor(float red, float green, float blue){
    glColor3f(red, green, blue);
}
void userdraw(void){
        glLineWidth(10.0f);
        glBegin(GL_LINES);


        glColor3f(1.0,0.0,0.0); //merah
        drawLine(10.,190.,230.,190);

        glColor3f(1.0,0.5,0.0); //orange
        drawLine(10.,180.,230.,180);

        glColor3f(1.0,1.0,0.0); //kuning
        drawLine(10.,170.,230.,170);

        glColor3f(0.0,1.0,0.0); //hijau
        drawLine(10.,160.,230.,160);

        glColor3f(0.0,0.0,1.0); //biru
        drawLine(10.,150.,230.,150);

        glColor3f(0.73,0.16,0.96); //ungu
        drawLine(10.,140.,230.,140);
}

    int main (int argc, char **argv){
    glutInit( &argc,argv);
    glutInitDisplayMode( GLUT_DOUBLE | GLUT_RGB );
    glutInitWindowSize(640,480);
    glutInitWindowPosition(100,150);
    glutCreateWindow("Rainbow");
    glClearColor(1.0,1.0,1.0,0.0);
    gluOrtho2D(0.,640.,-240.,240.);
    glutIdleFunc(display);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
