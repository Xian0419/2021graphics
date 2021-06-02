#include <stdio.h>
#include <GL/glut.h>
float angle[20]={}, diff=2;         ///step02 本來只有1個角度,現在有很多個,初始為0
int angleID=0;                      ///step02 現在要改第幾個角度!!!!!!
void timer(int t) ///用Timer改變angle
{
    glutTimerFunc( 30, timer , t+1);
    angle[angleID] += diff;                         ///step02
    if(angle[angleID]>90) diff = diff-2 ;           ///step02
    if(angle[angleID]<0 ) diff = diff+2 ;           ///step02

    glutPostRedisplay();///以前會用 display()重畫, 現在這個會比較好
}
void keyboard( unsigned char key, int x, int y)     ///step02
{
    if(key=='1') angleID=1;                         ///step02
    if(key=='2') angleID=2;                         ///step02
    if(key=='3') angleID=3;
    if(key=='4') angleID=4;
    if(key=='0') angleID=0; ///全部停止
}
void display()
{
    glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );
    glPushMatrix();
        glutSolidTeapot(0.3);///身體
        glPushMatrix();///左手
            glTranslatef(-0.3, 0, 0 );///(3)掛在正確的地方
            glRotatef(angle[1], 0, 0, 1);///(2)旋轉   ///step02
            glTranslatef(-0.4, 0, 0 );///(1)把關節旋轉中心放到畫面中心
            glutSolidTeapot(0.3);///左手臂
            glPushMatrix();
                glTranslatef(-0.3, 0, 0 );///(3)掛在正確的地方
                glRotatef(angle[2], 0, 0, 1);///(2)旋轉   ///step02
                glTranslatef(-0.4, 0, 0 );///(1)把關節旋轉中心放到畫面中心
                glutSolidTeapot(0.3);///左手肘
            glPopMatrix();
        glPopMatrix();
    glPopMatrix();
        glPushMatrix();///右手
            glTranslatef(0.3, 0, 0 );///(3)掛在正確的地方
            glRotatef(-angle[3], 0, 0, 1);///(2)旋轉   ///step02
            glTranslatef(0.4, 0, 0 );///(1)把關節旋轉中心放到畫面中心
            glutSolidTeapot(0.3);///左手臂
            glPushMatrix();
                glTranslatef(0.3, 0, 0 );///(3)掛在正確的地方
                glRotatef(-angle[4], 0, 0, 1);///(2)旋轉   ///step02
                glTranslatef(0.4, 0, 0 );///(1)把關節旋轉中心放到畫面中心
                glutSolidTeapot(0.3);///左手肘
            glPopMatrix();
        glPopMatrix();
    glutSwapBuffers();
}
int main( int argc, char ** argv )
{
    glutInit( &argc, argv );
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("week15 test");

    glutKeyboardFunc(keyboard);///整合很多關節 會去改angleID
    glutTimerFunc(0, timer, 0);///設第一個Timer設定動畫
    glutDisplayFunc(display);
    glutMainLoop();
}
