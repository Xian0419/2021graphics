#include <GL/glut.h>
///display()�禡, ��� display �O�禡����
float angle=0;
void drawArm1()
{
    glPushMatrix();
        glScalef(1, 0.5, 0.5);///�ܲӪ������u
        glColor3f(0, 1, 0);///��⪺
        glutSolidCube( 0.2 );///���u
    glPopMatrix();
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glColor3f(1, 1, 1); glutSolidCube( 0.4 );///�զ⪺����
    glPushMatrix();
        glTranslatef( -0.2, 0.2, 0);///(3)���W�ӻH
        glRotatef( angle, 0, 0, 1 );///(2)���
        glTranslatef( -0.1, 0, 0);///(1)����त��(���`) ����e���̤���
        drawArm1();///��⪺���u
    glPopMatrix();
    glutSwapBuffers();
}
int diff=2;
void timer(int t)
///timer�T�_��, ���A�n������ (�x��)
{
    glutTimerFunc( 20, timer, t+1 ); ///�_�ɲĤ@���, ���]�w�s�x��
    ///glClearColor( 1, 0, 0, 0 );///�M�I����:����
    if( angle>90 ) diff=diff-2;
    if( angle<0  ) diff=diff+2;
    angle = angle+diff ;
    display();///���s�e��
}
int main(int argc, char**argv)
{
    glutInit( &argc, argv );
    glutInitDisplayMode( GLUT_DOUBLE | GLUT_DEPTH );
    glutCreateWindow(" Week14 timer ");


    glutDisplayFunc(display);
    glutTimerFunc( 3000 , timer , 0 );
    ///           ���h�[, �禡 , int t
        glutMainLoop();
}
