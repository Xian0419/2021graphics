#include <GL/glut.h> ///�ϥ�GLUT�~��
int N=0,vx[3000], vy[3000]; ///x,y�y�ЦU������3000���I�Ŷ�
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glBegin(GL_LINE_LOOP);
    for(int i=0; i<N; i++){
            glVertex2f( (vx[i]-150)/150.0, -(vy[i]-150)/150.0 );
    }               ///  ��@�b,�A���@�b  ��@�b,�A���@�b,�[�t��
                    ///  ��ӵ۵������y��
    glEnd();

    glutSwapBuffers();


}
void motion( int x , int y)
{ ///TODO2: mouse motion �b��ʥ�
     vx[N]=x; vy[N]=y; ///��x,y���Ȧs�_��
     N++;
     display();///���mouse motion, ��edisplay()
}


int main(int argc, char*argv[])
{
    glutInit( &argc, argv );
    glutInitDisplayMode( GLUT_DOUBLE | GLUT_DEPTH );
    ///�ּg�@�ӡA�]���w�]�N�ORGB
    glutCreateWindow("07361092 work02!!!");

    glutDisplayFunc(display);

    glutMotionFunc(motion);///TODO2: mouse motion �b�ʮ@!!!!

    glutMainLoop();
}
