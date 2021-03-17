#include <GL/glut.h> ///使用GLUT外掛
int N=0,vx[3000], vy[3000]; ///x,y座標各給它們3000個點空間
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glBegin(GL_LINE_LOOP);
    for(int i=0; i<N; i++){
            glVertex2f( (vx[i]-150)/150.0, -(vy[i]-150)/150.0 );
    }               ///  減一半,再除一半  減一半,再除一半,加負號
                    ///  對照著視窗的座標
    glEnd();

    glutSwapBuffers();


}
void motion( int x , int y)
{ ///TODO2: mouse motion 在拖動它
     vx[N]=x; vy[N]=y; ///把x,y的值存起來
     N++;
     display();///邊動mouse motion, 邊畫display()
}


int main(int argc, char*argv[])
{
    glutInit( &argc, argv );
    glutInitDisplayMode( GLUT_DOUBLE | GLUT_DEPTH );
    ///少寫一個，因為預設就是RGB
    glutCreateWindow("07361092 work02!!!");

    glutDisplayFunc(display);

    glutMotionFunc(motion);///TODO2: mouse motion 在動哦!!!!

    glutMainLoop();
}
