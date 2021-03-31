#include<GL/glut.h>
float angle=0; ///TODO:
void hand()
{
    glPushMatrix();///每個地方都要加，怕出錯
        glScalef(0.5, 0.1, 0.1); ///細長的
        glColor3f(0,0,1); ///藍色的
        glutSolidCube(1); ///方塊
    glPopMatrix();
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glColor3f(1,1,1); glutSolidCube(0.5);///畫個方塊當對照
    glPushMatrix();///右半邊
        glTranslatef(0.25, 0.25, 0); ///(3)整個移到右上角掛著
        glRotatef(angle, 0,0,1); ///(2)對中心轉動
        glTranslatef(0.25 ,0 ,0); ///(1)把關節移到中心
        hand();///呼叫那個細長的藍色的小手手當上手臂
        glPushMatrix();
            glTranslatef(0.25, 0, 0); ///(3)往右移
            glRotatef(angle, 0,0,1); ///(2)
            glTranslatef(0.25 ,0 ,0); ///(1)
            hand();///呼叫那個細長的藍色的小手手當下手臂
        glPopMatrix();
    glPopMatrix();

    glPushMatrix();///左半邊
        glTranslatef(-0.25, 0.25, 0); ///(3)整個移到左上角掛著
        glRotatef(-angle, 0,0,1); ///(2)對中心轉動
        glTranslatef(-0.25 ,0 ,0); ///(1)把關節移到中心
        hand();///呼叫那個細長的藍色的小手手當上手臂
        glPushMatrix();
            glTranslatef(-0.25, 0, 0); ///(3)往左移
            glRotatef(-angle, 0,0,1); ///(2)
            glTranslatef(-0.25 ,0 ,0); ///(1)
            hand();///呼叫那個細長的藍色的小手手當下手臂
        glPopMatrix();
    glPopMatrix();
    glutSwapBuffers();
    angle++; ///TODO:

}
int main(int argc, char ** argv)
{
    glutInit( &argc, argv );
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("07361092");

    glutDisplayFunc(display);
    glutIdleFunc(display); ///TODO: 閒閒有空時,就重畫畫面!!
    glutMainLoop();

}
