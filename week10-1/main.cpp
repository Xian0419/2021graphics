#include <windows.h>
#include <GL/glut.h>
#include "CMP3_MCI.h"   ///TODO5: .h�ɮ׭n��b�M�ץؿ� week10_sound
CMP3_MCI mp3; ///TODO5: �ŧi�@���ܼ� (MP3���ܼ�)
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glutSolidTeapot(0.3);
    glutSwapBuffers();
}
void keyboard( unsigned char key, int x, int y)
{
    if( key== '1' ) PlaySound("do.wav", NULL , SND_ASYNC );
    if( key== '2' ) PlaySound("re.wav", NULL , SND_ASYNC );
    if( key== '3' ) PlaySound("mi.wav", NULL , SND_ASYNC );
    if( key== '4' ) PlaySound("fa.wav", NULL , SND_ASYNC );
    if( key== '5' ) PlaySound("so.wav", NULL , SND_ASYNC );

}
void mouse( int button, int state, int x, int y)///TODO6
{///TODO6
    if( state==GLUT_DOWN ) PlaySound("shot.wav", NULL , SND_ASYNC );///TODO6
}
int main(int argc, char** argv)
{
    mp3.Load("music.mp3"); ///TODO5: �ɮש����ؿ�...\freeglut\bin
    mp3.Play(); ///TODO5 :����

    glutInit( &argc, argv );
    glutInitDisplayMode( GLUT_DOUBLE | GLUT_DEPTH );
    glutCreateWindow("Week10 Sound 07361092");

    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    glutMouseFunc(mouse);///TODO6
    glutMainLoop();
}
