#include <stdio.h>
#include <GL/glut.h>
float angle[20]={}, diff=2;         ///step02 ���ӥu��1�Ө���,�{�b���ܦh��,��l��0
int angleID=0;                      ///step02 �{�b�n��ĴX�Ө���!!!!!!
void timer(int t) ///��Timer����angle
{
    glutTimerFunc( 30, timer , t+1);
    angle[angleID] += diff;                         ///step02
    if(angle[angleID]>90) diff = diff-2 ;           ///step02
    if(angle[angleID]<0 ) diff = diff+2 ;           ///step02

    glutPostRedisplay();///�H�e�|�� display()���e, �{�b�o�ӷ|����n
}
void keyboard( unsigned char key, int x, int y)     ///step02
{
    if(key=='1') angleID=1;                         ///step02
    if(key=='2') angleID=2;                         ///step02
    if(key=='3') angleID=3;
    if(key=='4') angleID=4;
    if(key=='0') angleID=0; ///��������
}
void display()
{
    glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );
    glPushMatrix();
        glutSolidTeapot(0.3);///����
        glPushMatrix();///����
            glTranslatef(-0.3, 0, 0 );///(3)���b���T���a��
            glRotatef(angle[1], 0, 0, 1);///(2)����   ///step02
            glTranslatef(-0.4, 0, 0 );///(1)�����`���त�ߩ��e������
            glutSolidTeapot(0.3);///�����u
            glPushMatrix();
                glTranslatef(-0.3, 0, 0 );///(3)���b���T���a��
                glRotatef(angle[2], 0, 0, 1);///(2)����   ///step02
                glTranslatef(-0.4, 0, 0 );///(1)�����`���त�ߩ��e������
                glutSolidTeapot(0.3);///����y
            glPopMatrix();
        glPopMatrix();
    glPopMatrix();
        glPushMatrix();///�k��
            glTranslatef(0.3, 0, 0 );///(3)���b���T���a��
            glRotatef(-angle[3], 0, 0, 1);///(2)����   ///step02
            glTranslatef(0.4, 0, 0 );///(1)�����`���त�ߩ��e������
            glutSolidTeapot(0.3);///�����u
            glPushMatrix();
                glTranslatef(0.3, 0, 0 );///(3)���b���T���a��
                glRotatef(-angle[4], 0, 0, 1);///(2)����   ///step02
                glTranslatef(0.4, 0, 0 );///(1)�����`���त�ߩ��e������
                glutSolidTeapot(0.3);///����y
            glPopMatrix();
        glPopMatrix();
    glutSwapBuffers();
}
int main( int argc, char ** argv )
{
    glutInit( &argc, argv );
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("week15 test");

    glutKeyboardFunc(keyboard);///��X�ܦh���` �|�h��angleID
    glutTimerFunc(0, timer, 0);///�]�Ĥ@��Timer�]�w�ʵe
    glutDisplayFunc(display);
    glutMainLoop();
}
