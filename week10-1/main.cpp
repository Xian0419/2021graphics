#include <windows.h>
#include <GL/glut.h>
#include "CMP3_MCI.h"   ///TODO5: .h檔案要放在專案目錄 week10_sound
CMP3_MCI mp3; ///TODO5: 宣告一個變數 (MP3的變數)
CMP3_MCI shot1,shot2,shot3; ///TODO7

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
    if( state==GLUT_DOWN && button==GLUT_LEFT_BUTTON ) shot1.Play();///TODO7
    if( state==GLUT_DOWN && button==GLUT_MIDDLE_BUTTON ) shot2.Play();///TODO7
    if( state==GLUT_DOWN && button==GLUT_RIGHT_BUTTON ) shot3.Play();///TODO7
}
int main(int argc, char** argv)
{
    shot1.Load("1.wav"); shot2.Load("2.wav"); shot3.Load("3.wav"); ///TODO7

    mp3.Load("music.mp3"); ///TODO5: 檔案放執行目錄...\freeglut\bin
    mp3.Play(); ///TODO5 :播放

    glutInit( &argc, argv );
    glutInitDisplayMode( GLUT_DOUBLE | GLUT_DEPTH );
    glutCreateWindow("Week10 Sound 07361092");

    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    glutMouseFunc(mouse);///TODO6
    glutMainLoop();
}
