#include <GL/glut.h>
///display()函式, 其實 display 是函式指標
float angle=0;
void drawArm1()
{
    glPushMatrix();
        glScalef(1, 0.5, 0.5);///變細長的手臂
        glColor3f(0, 1, 0);///綠色的
        glutSolidCube( 0.2 );///手臂
    glPopMatrix();
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glColor3f(1, 1, 1); glutSolidCube( 0.4 );///白色的身體
    glPushMatrix();
        glTranslatef( -0.2, 0.2, 0);///(3)掛上肩膀
        glRotatef( angle, 0, 0, 1 );///(2)轉動
        glTranslatef( -0.1, 0, 0);///(1)把旋轉中心(關節) 移到畫面最中心
        drawArm1();///綠色的手臂
    glPopMatrix();
    glutSwapBuffers();
}
int diff=2;
void timer(int t)
///timer響起時, 做你要做的事 (鬧鐘)
{
    glutTimerFunc( 20, timer, t+1 ); ///起床第一件事, 先設定新鬧鐘
    ///glClearColor( 1, 0, 0, 0 );///清背景色:紅色
    if( angle>90 ) diff=diff-2;
    if( angle<0  ) diff=diff+2;
    angle = angle+diff ;
    display();///重製畫面
}
int main(int argc, char**argv)
{
    glutInit( &argc, argv );
    glutInitDisplayMode( GLUT_DOUBLE | GLUT_DEPTH );
    glutCreateWindow(" Week14 timer ");


    glutDisplayFunc(display);
    glutTimerFunc( 3000 , timer , 0 );
    ///           等多久, 函式 , int t
        glutMainLoop();
}
