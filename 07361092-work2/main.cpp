#include <GL/glut.h> ///�ϥ�GLUT�~��
#include <math.h> ///�ϥμƾǥ~�� cos() sin()
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glBegin(GL_POLYGON); ///�ֽ�
        glColor3f(253/255.0, 228/255.0, 127/255.0);
        glVertex2f( (20-150)/150.0 , -(0-150)/150.0 );
        glVertex2f( (280-150)/150.0 , -(0-150)/150.0 );
        glVertex2f( (285-150)/150.0 , -(1-150)/150.0 );
        glVertex2f( (288-150)/150.0 , -(2-150)/150.0 );
        glVertex2f( (292-150)/150.0 , -(4-150)/150.0 );
        glVertex2f( (295-150)/150.0 , -(7-150)/150.0 );
        glVertex2f( (297-150)/150.0 , -(10.5-150)/150.0 );
        glVertex2f( (298.5-150)/150.0 , -(13-150)/150.0 );
        glVertex2f( (299-150)/150.0 , -(16-150)/150.0 );
        glVertex2f( (300-150)/150.0 , -(20-150)/150.0 );

        glVertex2f( (300-150)/150.0 , -(280-150)/150.0 );
        glVertex2f( (299-150)/150.0 , -(285-150)/150.0 );
        glVertex2f( (298-150)/150.0 , -(288-150)/150.0 );
        glVertex2f( (296-150)/150.0 , -(292-150)/150.0 );
        glVertex2f( (293-150)/150.0 , -(295-150)/150.0 );
        glVertex2f( (289.5-150)/150.0 , -(297-150)/150.0 );
        glVertex2f( (287-150)/150.0 , -(298.5-150)/150.0 );
        glVertex2f( (284-150)/150.0 , -(299-150)/150.0 );
        glVertex2f( (280-150)/150.0 , -(300-150)/150.0 );

        glVertex2f( (20-150)/150.0 , -(300-150)/150.0 );
        glVertex2f( (15-150)/150.0 , -(299-150)/150.0 );
        glVertex2f( (12-150)/150.0 , -(298-150)/150.0 );
        glVertex2f( (8-150)/150.0 , -(296-150)/150.0 );
        glVertex2f( (5-150)/150.0 , -(293-150)/150.0 );
        glVertex2f( (3-150)/150.0 , -(289.5-150)/150.0 );
        glVertex2f( (1.5-150)/150.0 , -(287-150)/150.0 );
        glVertex2f( (1-150)/150.0 , -(284-150)/150.0 );
        glVertex2f( (0-150)/150.0 , -(280-150)/150.0 );

        glVertex2f( (0-150)/150.0 , -(20-150)/150.0 );
        glVertex2f( (1-150)/150.0 , -(15-150)/150.0 );
        glVertex2f( (2-150)/150.0 , -(12-150)/150.0 );
        glVertex2f( (4-150)/150.0 , -(8-150)/150.0 );
        glVertex2f( (7-150)/150.0 , -(5-150)/150.0 );
        glVertex2f( (10.5-150)/150.0 , -(3-150)/150.0 );
        glVertex2f( (13-150)/150.0 , -(1.5-150)/150.0 );
        glVertex2f( (17-150)/150.0 , -(1-150)/150.0 );
        glVertex2f( (20-150)/150.0 , -(0-150)/150.0 );

    glEnd();

    glBegin(GL_POLYGON); ///��������

        glColor3f(211/255.0, 198/255.0, 128/255.0);
        glVertex2f( (44-150)/150.0 , -(67-150)/150.0 );
        glVertex2f( (104-150)/150.0 , -(67-150)/150.0 );
        glVertex2f( (104-150)/150.0 , -(133-150)/150.0 );
        glVertex2f( (44-150)/150.0 , -(133-150)/150.0 );
    glEnd();

    glBegin(GL_POLYGON); ///����

        glColor3f(32/255.0, 27/255.0, 23/255.0);
        glVertex2f( (48-150)/150.0 , -(70-150)/150.0 );
        glVertex2f( (100-150)/150.0 , -(70-150)/150.0 );
        glVertex2f( (100-150)/150.0 , -(130-150)/150.0 );
        glVertex2f( (48-150)/150.0 , -(130-150)/150.0 );
    glEnd();

    glBegin(GL_POLYGON); ///�k������

        glColor3f(211/255.0, 198/255.0, 128/255.0);
        glVertex2f( (197-150)/150.0 , -(67-150)/150.0 );
        glVertex2f( (255-150)/150.0 , -(67-150)/150.0 );
        glVertex2f( (255-150)/150.0 , -(133-150)/150.0 );
        glVertex2f( (197-150)/150.0 , -(133-150)/150.0 );
    glEnd();

    glBegin(GL_POLYGON); ///�k��

        glColor3f(32/255.0, 27/255.0, 23/255.0);
        glVertex2f( (200-150)/150.0 , -(70-150)/150.0 );
        glVertex2f( (252-150)/150.0 , -(70-150)/150.0 );
        glVertex2f( (252-150)/150.0 , -(130-150)/150.0 );
        glVertex2f( (200-150)/150.0 , -(130-150)/150.0 );
    glEnd();

    glBegin(GL_POLYGON); ///�����ս���

        glColor3f(232/255.0, 229/255.0, 222/255.0);
        glVertex2f( (68.5-150)/150.0 , -(73.5-150)/150.0 );
        glVertex2f( (91.5-150)/150.0 , -(73.5-150)/150.0 );
        glVertex2f( (91.5-150)/150.0 , -(96.5-150)/150.0 );
        glVertex2f( (68.5-150)/150.0 , -(96.5-150)/150.0 );
    glEnd();

    glBegin(GL_POLYGON); ///������

        glColor3f(255/255.0, 255/255.0, 253/255.0);
        glVertex2f( (70-150)/150.0 , -(75-150)/150.0 );
        glVertex2f( (90-150)/150.0 , -(75-150)/150.0 );
        glVertex2f( (90-150)/150.0 , -(95-150)/150.0 );
        glVertex2f( (70-150)/150.0 , -(95-150)/150.0 );
    glEnd();

    glBegin(GL_POLYGON); ///�k���ս���

        glColor3f(232/255.0, 229/255.0, 222/255.0);
        glVertex2f( (209.5-150)/150.0 , -(73.5-150)/150.0 );
        glVertex2f( (232.5-150)/150.0 , -(73.5-150)/150.0 );
        glVertex2f( (232.5-150)/150.0 , -(96.5-150)/150.0 );
        glVertex2f( (209.5-150)/150.0 , -(96.5-150)/150.0 );
    glEnd();

    glBegin(GL_POLYGON); ///�k����

        glColor3f(255/255.0, 255/255.0, 253/255.0);
        glVertex2f( (211-150)/150.0 , -(75-150)/150.0 );
        glVertex2f( (231-150)/150.0 , -(75-150)/150.0 );
        glVertex2f( (231-150)/150.0 , -(95-150)/150.0 );
        glVertex2f( (211-150)/150.0 , -(95-150)/150.0 );
    glEnd();

    glBegin(GL_POLYGON); ///��l����
        glColor3f(221/255.0, 203/255.0, 129/255.0);
        glVertex2f( (138.5-150)/150.0 , -(133.5-150)/150.0 );
        glVertex2f( (161.5-150)/150.0 , -(133.5-150)/150.0 );
        glVertex2f( (161.5-150)/150.0 , -(144-150)/150.0 );
        glVertex2f( (138.5-150)/150.0 , -(144-150)/150.0 );
    glEnd();

    glBegin(GL_POLYGON); ///��l
        glColor3f(58/255.0, 33/255.0, 11/255.0);
        glVertex2f( (140-150)/150.0 , -(136-150)/150.0 );
        glVertex2f( (160-150)/150.0 , -(136-150)/150.0 );
        glVertex2f( (160-150)/150.0 , -(143-150)/150.0 );
        glVertex2f( (140-150)/150.0 , -(143-150)/150.0 );
    glEnd();

    glBegin(GL_POLYGON); ///�L��
        glColor3f(149/255.0, 98/255.0, 95/255.0);
        glVertex2f( (163-150)/150.0 , -(175-150)/150.0 );
        glVertex2f( (205-150)/150.0 , -(175-150)/150.0 );
        glVertex2f( (205-150)/150.0 , -(230-150)/150.0 );
        glVertex2f( (95-150)/150.0 , -(230-150)/150.0 );
        glVertex2f( (95-150)/150.0 , -(175-150)/150.0 );
        glVertex2f( (137-150)/150.0 , -(175-150)/150.0 );
        glVertex2f( (150-150)/150.0 , -(160-150)/150.0 );
    glEnd();

    glBegin(GL_POLYGON); ///���Y����(?
        glColor3f(201/255.0, 150/255.0, 155/255.0);
        glVertex2f( (108-150)/150.0 , -(206-150)/150.0 );
        glVertex2f( (190.5-150)/150.0 , -(206-150)/150.0 );
        glVertex2f( (190.5-150)/150.0 , -(230-150)/150.0 );
        glVertex2f( (108-150)/150.0 , -(230-150)/150.0 );
    glEnd();

    glBegin(GL_POLYGON); ///���Y(?
        glColor3f(215/255.0, 157/255.0, 179/255.0);
        glVertex2f( (110-150)/150.0 , -(207-150)/150.0 );
        glVertex2f( (190-150)/150.0 , -(207-150)/150.0 );
        glVertex2f( (190-150)/150.0 , -(230-150)/150.0 );
        glVertex2f( (110-150)/150.0 , -(230-150)/150.0 );
    glEnd();

    glBegin(GL_POLYGON); ///���|���~����
        glColor3f(250/255.0, 204/255.0, 129/255.0);
        glVertex2f( (0-150)/150.0 , -(154-150)/150.0 );
        glVertex2f( (55-150)/150.0 , -(154-150)/150.0 );
        glVertex2f( (55-150)/150.0 , -(222-150)/150.0 );
        glVertex2f( (0-150)/150.0 , -(222-150)/150.0 );
    glEnd();

    glBegin(GL_POLYGON); ///���|��������
        glColor3f(211/255.0, 135/255.0, 75/255.0);
        glVertex2f( (0-150)/150.0 , -(156-150)/150.0 );
        glVertex2f( (52.5-150)/150.0 , -(156-150)/150.0 );
        glVertex2f( (52.5-150)/150.0 , -(220-150)/150.0 );
        glVertex2f( (0-150)/150.0 , -(220-150)/150.0 );
    glEnd();

    glBegin(GL_POLYGON); ///���|��
        glColor3f(223/255.0, 106/255.0, 86/255.0);
        glVertex2f( (0-150)/150.0 , -(158-150)/150.0 );
        glVertex2f( (50-150)/150.0 , -(158-150)/150.0 );
        glVertex2f( (50-150)/150.0 , -(218-150)/150.0 );
        glVertex2f( (0-150)/150.0 , -(218-150)/150.0 );
    glEnd();

    glBegin(GL_POLYGON); ///�k�|���~����
        glColor3f(250/255.0, 204/255.0, 129/255.0);
        glVertex2f( (245-150)/150.0 , -(154-150)/150.0 );
        glVertex2f( (300-150)/150.0 , -(154-150)/150.0 );
        glVertex2f( (300-150)/150.0 , -(222-150)/150.0 );
        glVertex2f( (245-150)/150.0 , -(222-150)/150.0 );
    glEnd();

    glBegin(GL_POLYGON); ///�k�|��������
        glColor3f(211/255.0, 135/255.0, 75/255.0);
        glVertex2f( (247.5-150)/150.0 , -(156-150)/150.0 );
        glVertex2f( (300-150)/150.0 , -(156-150)/150.0 );
        glVertex2f( (300-150)/150.0 , -(220-150)/150.0 );
        glVertex2f( (247.5-150)/150.0 , -(220-150)/150.0 );
    glEnd();

    glBegin(GL_POLYGON); ///�k�|��
        glColor3f(223/255.0, 106/255.0, 86/255.0);
        glVertex2f( (250-150)/150.0 , -(158-150)/150.0 );
        glVertex2f( (300-150)/150.0 , -(158-150)/150.0 );
        glVertex2f( (300-150)/150.0 , -(218-150)/150.0 );
        glVertex2f( (250-150)/150.0 , -(218-150)/150.0 );
    glEnd();


    glutSwapBuffers();


}



int main(int argc, char*argv[])
{
    glutInit( &argc, argv );
    glutInitDisplayMode( GLUT_DOUBLE | GLUT_DEPTH );
    ///�ּg�@�ӡA�]���w�]�N�ORGB
    glutCreateWindow("07361092 work02!!!");

    glutDisplayFunc(display);

    glutMainLoop();
}