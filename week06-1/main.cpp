#include<GL/glut.h>
float angle=0; ///TODO:
void hand()
{
    glPushMatrix();///�C�Ӧa�賣�n�[�A�ȥX��
        glScalef(0.5, 0.1, 0.1); ///�Ӫ���
        glColor3f(0,0,1); ///�Ŧ⪺
        glutSolidCube(1); ///���
    glPopMatrix();
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glColor3f(1,1,1); glutSolidCube(0.5);///�e�Ӥ������
    glPushMatrix();///�k�b��
        glTranslatef(0.25, 0.25, 0); ///(3)��Ӳ���k�W������
        glRotatef(angle, 0,0,1); ///(2)�襤�����
        glTranslatef(0.25 ,0 ,0); ///(1)�����`���줤��
        hand();///�I�s���ӲӪ����Ŧ⪺�p����W���u
        glPushMatrix();
            glTranslatef(0.25, 0, 0); ///(3)���k��
            glRotatef(angle, 0,0,1); ///(2)
            glTranslatef(0.25 ,0 ,0); ///(1)
            hand();///�I�s���ӲӪ����Ŧ⪺�p����U���u
        glPopMatrix();
    glPopMatrix();

    glPushMatrix();///���b��
        glTranslatef(-0.25, 0.25, 0); ///(3)��Ӳ��쥪�W������
        glRotatef(-angle, 0,0,1); ///(2)�襤�����
        glTranslatef(-0.25 ,0 ,0); ///(1)�����`���줤��
        hand();///�I�s���ӲӪ����Ŧ⪺�p����W���u
        glPushMatrix();
            glTranslatef(-0.25, 0, 0); ///(3)������
            glRotatef(-angle, 0,0,1); ///(2)
            glTranslatef(-0.25 ,0 ,0); ///(1)
            hand();///�I�s���ӲӪ����Ŧ⪺�p����U���u
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
    glutIdleFunc(display); ///TODO: �������Ů�,�N���e�e��!!
    glutMainLoop();

}
