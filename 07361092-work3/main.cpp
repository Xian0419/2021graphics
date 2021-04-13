#include <GL/glut.h> ///�ϥ�GLUT�~��
#include <math.h> ///�ϥμƾǥ~�� cos() sin()
#include <opencv/highgui.h> ///�ϥ� OpenCV 2.1 ���²��, �u�n�� High GUI �Y�i
#include <opencv/cv.h>
float angle=0,a=0;
bool s=0;
void hand1()
{
    glPushMatrix();///�C�Ӧa�賣�n�[�A�ȥX��
        glScalef(0.4, 0.1, 0.05); ///�Ӫ���
        glColor3f(202/255.0 ,206/255.0 ,236/255.0 ); ///��
        glutSolidCube(1); ///���
    glPopMatrix();
}
void hand2()
{
    glPushMatrix();///�C�Ӧa�賣�n�[�A�ȥX��
        glScalef(0.4, 0.09, 0.05); ///�Ӫ���
        glColor3f(209/255.0 ,214/255.0 ,239/255.0 ); ///��
        glutSolidCube(1); ///���
    glPopMatrix();
}
void hand3()
{
    glPushMatrix();///�C�Ӧa�賣�n�[�A�ȥX��
        glScalef(0.12, 0.12, 0.05); ///�Ӫ���
        glColor3f(209/255.0 ,214/255.0 ,239/255.0 ); ///��
        glutSolidCube(1); ///���
    glPopMatrix();
}
/*
void init() ///�q�Ѯv����F�Ӫ� https://hackmd.io/@jsyeh/opengl
{
    IplImage * img = cvLoadImage("XD.jpg"); ///OpenCVŪ��
    cvCvtColor(img,img, CV_BGR2RGB); ///OpenCV���m (�ݭncv.h)
    glEnable(GL_TEXTURE_2D); ///1. �}�ҶK�ϥ\��
    GLuint id; ///�ǳƤ@�� unsigned int ���, �s �K��ID
    glGenTextures(1, &id); /// ����Generate �K��ID
    glBindTexture(GL_TEXTURE_2D, id); ///�j�wbind �K��ID
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT); /// �K�ϰѼ�, �W�L�]�˪��d��T, �N���жK��
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT); /// �K�ϰѼ�, �W�L�]�˪��d��S, �N���жK��
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST); /// �K�ϰѼ�, ��j�ɪ�����, �γ̪��I
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST); /// �K�ϰѼ�, �Y�p�ɪ�����, �γ̪��I
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, img->width, img->height, 0, GL_RGB, GL_UNSIGNED_BYTE, img->imageData);
}   ///�̫�@�����/�̭��n, �ҶK�ϼv������Ƴ��]�w�n
*/
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);



    glBegin(GL_POLYGON); ///�Y

        glColor3f(160/255.0, 169/255.0, 200/255.0);
        glVertex2f( (90-150)/150.0 , -(10-150)/150.0 );
        glVertex2f( (210-150)/150.0 , -(10-150)/150.0 );
        glVertex2f( (210-150)/150.0 , -(100-150)/150.0 );
        glVertex2f( (90-150)/150.0 , -(100-150)/150.0 );
    glEnd();

    glBegin(GL_POLYGON); ///�U�l

        glColor3f(185/255.0, 122/255.0, 87/255.0);
        glVertex2f( (80-150)/150.0 , -(0-150)/150.0 );
        glVertex2f( (220-150)/150.0 , -(0-150)/150.0 );
        glVertex2f( (220-150)/150.0 , -(40-150)/150.0 );
        glVertex2f( (200-150)/150.0 , -(40-150)/150.0 );
        glVertex2f( (200-150)/150.0 , -(20-150)/150.0 );
        glVertex2f( (100-150)/150.0 , -(20-150)/150.0 );
        glVertex2f( (100-150)/150.0 , -(40-150)/150.0 );
        glVertex2f( (80-150)/150.0 , -(40-150)/150.0 );

    glEnd();

    glBegin(GL_POLYGON); ///R����

        glColor3f(98/255.0, 113/255.0, 144/255.0);
        glVertex2f( (105-150)/150.0 , -(50-150)/150.0 );
        glVertex2f( (135-150)/150.0 , -(50-150)/150.0 );
        glVertex2f( (135-150)/150.0 , -(65-150)/150.0 );
        glVertex2f( (105-150)/150.0 , -(65-150)/150.0 );
    glEnd();

    glBegin(GL_POLYGON); ///L����

        glColor3f(98/255.0, 113/255.0, 144/255.0);
        glVertex2f( (195-150)/150.0 , -(50-150)/150.0 );
        glVertex2f( (165-150)/150.0 , -(50-150)/150.0 );
        glVertex2f( (165-150)/150.0 , -(65-150)/150.0 );
        glVertex2f( (195-150)/150.0 , -(65-150)/150.0 );
    glEnd();

    glBegin(GL_POLYGON); ///�L��

        glColor3f(98/255.0, 113/255.0, 144/255.0);
        glVertex2f( (150-150)/150.0 , -(80-150)/150.0 );
        glVertex2f( (185-150)/150.0 , -(80-150)/150.0 );
        glVertex2f( (185-150)/150.0 , -(70-150)/150.0 );
        glVertex2f( (195-150)/150.0 , -(70-150)/150.0 );
        glVertex2f( (195-150)/150.0 , -(80-150)/150.0 );
        glVertex2f( (150-150)/150.0 , -(90-150)/150.0 );
        glVertex2f( (105-150)/150.0 , -(80-150)/150.0 );
        glVertex2f( (105-150)/150.0 , -(70-150)/150.0 );
        glVertex2f( (115-150)/150.0 , -(70-150)/150.0 );
    glEnd();

    glBegin(GL_POLYGON); ///��l

        glColor3f(120/255.0, 150/255.0, 180/255.0);
        glVertex2f( (135-150)/150.0 , -(65-150)/150.0 );
        glVertex2f( (165-150)/150.0 , -(65-150)/150.0 );
        glVertex2f( (165-150)/150.0 , -(75-150)/150.0 );
        glVertex2f( (135-150)/150.0 , -(75-150)/150.0 );
    glEnd();


    glPushMatrix();///�k�b��
            glTranslatef(0.30, 0.2, 0); ///(3)��Ӳ���k�W������
            glRotatef(angle, 0,0,1); ///(2)�襤�����
            glTranslatef(0.20 ,0 ,0); ///(1)�����`���줤��
            hand1();///�I�s���ӲӪ�������W���u
        glPushMatrix();
            glTranslatef(0.2, 0, 0); ///(3)���k��
            glRotatef(angle+750, 0,0,1); ///(2)
            glTranslatef(0.15 ,0 ,0); ///(1)
                hand2();///�I�s���ӲӪ�������U���u
                glPushMatrix();
                    glTranslatef(0.2, 0, 0); ///(3)���k��
                    glRotatef(angle+750, 0,0,1); ///(2)
                    glTranslatef(0.00 ,0 ,0); ///(1)
                    hand3();///�I�s���Ӥ����
                glPopMatrix();
        glPopMatrix();

    glPopMatrix();

    glPushMatrix();///���b��
            glTranslatef(-0.30, 0.2, 0); ///(3)��Ӳ��쥪�W������
            glRotatef(-0.05*angle, 0,0,1); ///(2)�襤�����
            glTranslatef(-0.20 ,0 ,0); ///(1)�����`���줤��
            hand1();///�I�s���ӲӪ�������W���u
        glPushMatrix();
            glTranslatef(-0.20, 0, 0); ///(3)������
            glRotatef(-0.04*angle, 0,0,1); ///(2)
            glTranslatef(-0.20 ,0 ,0); ///(1)
            hand2();///�I�s���ӲӪ�������U���u
        glPopMatrix();

    glPopMatrix();

    glBegin(GL_POLYGON); ///����

    glColor3f(200/255.0, 185/255.0, 218/255.0);
        glVertex2f( (100-150)/150.0 , -(100-150)/150.0 );
        glVertex2f( (200-150)/150.0 , -(100-150)/150.0 );
        glVertex2f( (200-150)/150.0 , -(160-150)/150.0 );
        glVertex2f( (190-150)/150.0 , -(180-150)/150.0 );
        glVertex2f( (110-150)/150.0 , -(180-150)/150.0 );
        glVertex2f( (100-150)/150.0 , -(160-150)/150.0 );
        glVertex2f( (100-150)/150.0 , -(100-150)/150.0 );
    glEnd();

    glPopMatrix();

    glBegin(GL_POLYGON); ///����

        glColor3f(170/255.0, 200/255.0, 230/255.0);
        glVertex2f( (100-150)/150.0 , -(180-150)/150.0 );
        glVertex2f( (200-150)/150.0 , -(180-150)/150.0 );
        glVertex2f( (200-150)/150.0 , -(200-150)/150.0 );
        glVertex2f( (100-150)/150.0 , -(200-150)/150.0 );
    glEnd();

    glBegin(GL_POLYGON); ///�}

    glColor3f(198/255.0, 208/255.0, 243/255.0);
        glVertex2f( (110-150)/150.0 , -(200-150)/150.0 );
        glVertex2f( (140-150)/150.0 , -(200-150)/150.0 );
        glVertex2f( (140-150)/150.0 , -(300-150)/150.0 );
        glVertex2f( (110-150)/150.0 , -(300-150)/150.0 );
    glEnd();

    glBegin(GL_POLYGON); ///�}

    glColor3f(198/255.0, 208/255.0, 243/255.0);
        glVertex2f( (190-150)/150.0 , -(200-150)/150.0 );
        glVertex2f( (160-150)/150.0 , -(200-150)/150.0 );
        glVertex2f( (160-150)/150.0 , -(300-150)/150.0 );
        glVertex2f( (190-150)/150.0 , -(300-150)/150.0 );
    glEnd();



    glutSwapBuffers();

if(s==0) ///�����׹F�췥���ȫ�j��
{
    a++;
    if(a >= 3000) s=1;  ///�]��angle�t��*0.02�պC�A�G�ƭȻ�/0.02�^�h
}
if(s==1)
{
    a--;
    if(a <= -1500) s=0;

}

angle=0.02*a;



}



int main(int argc, char*argv[])
{
    glutInit( &argc, argv );
    glutInitDisplayMode( GLUT_DOUBLE | GLUT_DEPTH );
    ///�ּg�@�ӡA�]���w�]�N�ORGB
    glutCreateWindow("07361092 work03!!!");
    glutDisplayFunc(display);



    glutIdleFunc(display); ///TODO: �������Ů�,�N���e�e��!!
    glutMainLoop();
}
