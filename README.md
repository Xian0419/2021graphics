# 2021graphics

-基本程式碼-


#include <GL/glut.h> ///使用GLUT外掛
int N=0,vx[3000], vy[3000]; ///x,y座標各給它們3000個點空間
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glBegin(GL_LINE_LOOP);

    glEnd();

    glutSwapBuffers();

int main(int argc, char*argv[])
{
    glutInit( &argc, argv );
    glutInitDisplayMode( GLUT_DOUBLE | GLUT_DEPTH );
    ///少寫一個，因為預設就是RGB
    glutCreateWindow("07361092!!!");

    glutDisplayFunc(display);

    glutMainLoop();
}
