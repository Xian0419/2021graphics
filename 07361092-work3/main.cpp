#include <GL/glut.h> ///使用GLUT外掛
#include <math.h> ///使用數學外掛 cos() sin()
#include <opencv/highgui.h> ///使用 OpenCV 2.1 比較簡單, 只要用 High GUI 即可
#include <opencv/cv.h>
float angle=0,a=0;
bool s=0;
void hand1()
{
    glPushMatrix();///每個地方都要加，怕出錯
        glScalef(0.4, 0.1, 0.05); ///細長的
        glColor3f(202/255.0 ,206/255.0 ,236/255.0 ); ///色
        glutSolidCube(1); ///方塊
    glPopMatrix();
}
void hand2()
{
    glPushMatrix();///每個地方都要加，怕出錯
        glScalef(0.4, 0.09, 0.05); ///細長的
        glColor3f(209/255.0 ,214/255.0 ,239/255.0 ); ///色
        glutSolidCube(1); ///方塊
    glPopMatrix();
}
void hand3()
{
    glPushMatrix();///每個地方都要加，怕出錯
        glScalef(0.12, 0.12, 0.05); ///細長的
        glColor3f(209/255.0 ,214/255.0 ,239/255.0 ); ///色
        glutSolidCube(1); ///方塊
    glPopMatrix();
}
/*
void init() ///從老師那邊幹來的 https://hackmd.io/@jsyeh/opengl
{
    IplImage * img = cvLoadImage("XD.jpg"); ///OpenCV讀圖
    cvCvtColor(img,img, CV_BGR2RGB); ///OpenCV轉色彩 (需要cv.h)
    glEnable(GL_TEXTURE_2D); ///1. 開啟貼圖功能
    GLuint id; ///準備一個 unsigned int 整數, 叫 貼圖ID
    glGenTextures(1, &id); /// 產生Generate 貼圖ID
    glBindTexture(GL_TEXTURE_2D, id); ///綁定bind 貼圖ID
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT); /// 貼圖參數, 超過包裝的範圖T, 就重覆貼圖
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT); /// 貼圖參數, 超過包裝的範圖S, 就重覆貼圖
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST); /// 貼圖參數, 放大時的內插, 用最近點
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST); /// 貼圖參數, 縮小時的內插, 用最近點
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, img->width, img->height, 0, GL_RGB, GL_UNSIGNED_BYTE, img->imageData);
}   ///最後一行最難/最重要, 所貼圖影像的資料都設定好
*/
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);



    glBegin(GL_POLYGON); ///頭

        glColor3f(160/255.0, 169/255.0, 200/255.0);
        glVertex2f( (90-150)/150.0 , -(10-150)/150.0 );
        glVertex2f( (210-150)/150.0 , -(10-150)/150.0 );
        glVertex2f( (210-150)/150.0 , -(100-150)/150.0 );
        glVertex2f( (90-150)/150.0 , -(100-150)/150.0 );
    glEnd();

    glBegin(GL_POLYGON); ///帽子

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

    glBegin(GL_POLYGON); ///R眼睛

        glColor3f(98/255.0, 113/255.0, 144/255.0);
        glVertex2f( (105-150)/150.0 , -(50-150)/150.0 );
        glVertex2f( (135-150)/150.0 , -(50-150)/150.0 );
        glVertex2f( (135-150)/150.0 , -(65-150)/150.0 );
        glVertex2f( (105-150)/150.0 , -(65-150)/150.0 );
    glEnd();

    glBegin(GL_POLYGON); ///L眼睛

        glColor3f(98/255.0, 113/255.0, 144/255.0);
        glVertex2f( (195-150)/150.0 , -(50-150)/150.0 );
        glVertex2f( (165-150)/150.0 , -(50-150)/150.0 );
        glVertex2f( (165-150)/150.0 , -(65-150)/150.0 );
        glVertex2f( (195-150)/150.0 , -(65-150)/150.0 );
    glEnd();

    glBegin(GL_POLYGON); ///嘴巴

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

    glBegin(GL_POLYGON); ///鼻子

        glColor3f(120/255.0, 150/255.0, 180/255.0);
        glVertex2f( (135-150)/150.0 , -(65-150)/150.0 );
        glVertex2f( (165-150)/150.0 , -(65-150)/150.0 );
        glVertex2f( (165-150)/150.0 , -(75-150)/150.0 );
        glVertex2f( (135-150)/150.0 , -(75-150)/150.0 );
    glEnd();


    glPushMatrix();///右半邊
            glTranslatef(0.30, 0.2, 0); ///(3)整個移到右上角掛著
            glRotatef(angle, 0,0,1); ///(2)對中心轉動
            glTranslatef(0.20 ,0 ,0); ///(1)把關節移到中心
            hand1();///呼叫那個細長的手手當上手臂
        glPushMatrix();
            glTranslatef(0.2, 0, 0); ///(3)往右移
            glRotatef(angle+750, 0,0,1); ///(2)
            glTranslatef(0.15 ,0 ,0); ///(1)
                hand2();///呼叫那個細長的手手當下手臂
                glPushMatrix();
                    glTranslatef(0.2, 0, 0); ///(3)往右移
                    glRotatef(angle+750, 0,0,1); ///(2)
                    glTranslatef(0.00 ,0 ,0); ///(1)
                    hand3();///呼叫那個手手當手
                glPopMatrix();
        glPopMatrix();

    glPopMatrix();

    glPushMatrix();///左半邊
            glTranslatef(-0.30, 0.2, 0); ///(3)整個移到左上角掛著
            glRotatef(-0.05*angle, 0,0,1); ///(2)對中心轉動
            glTranslatef(-0.20 ,0 ,0); ///(1)把關節移到中心
            hand1();///呼叫那個細長的手手當上手臂
        glPushMatrix();
            glTranslatef(-0.20, 0, 0); ///(3)往左移
            glRotatef(-0.04*angle, 0,0,1); ///(2)
            glTranslatef(-0.20 ,0 ,0); ///(1)
            hand2();///呼叫那個細長的手手當下手臂
        glPopMatrix();

    glPopMatrix();

    glBegin(GL_POLYGON); ///身體

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

    glBegin(GL_POLYGON); ///身體

        glColor3f(170/255.0, 200/255.0, 230/255.0);
        glVertex2f( (100-150)/150.0 , -(180-150)/150.0 );
        glVertex2f( (200-150)/150.0 , -(180-150)/150.0 );
        glVertex2f( (200-150)/150.0 , -(200-150)/150.0 );
        glVertex2f( (100-150)/150.0 , -(200-150)/150.0 );
    glEnd();

    glBegin(GL_POLYGON); ///腳

    glColor3f(198/255.0, 208/255.0, 243/255.0);
        glVertex2f( (110-150)/150.0 , -(200-150)/150.0 );
        glVertex2f( (140-150)/150.0 , -(200-150)/150.0 );
        glVertex2f( (140-150)/150.0 , -(300-150)/150.0 );
        glVertex2f( (110-150)/150.0 , -(300-150)/150.0 );
    glEnd();

    glBegin(GL_POLYGON); ///腳

    glColor3f(198/255.0, 208/255.0, 243/255.0);
        glVertex2f( (190-150)/150.0 , -(200-150)/150.0 );
        glVertex2f( (160-150)/150.0 , -(200-150)/150.0 );
        glVertex2f( (160-150)/150.0 , -(300-150)/150.0 );
        glVertex2f( (190-150)/150.0 , -(300-150)/150.0 );
    glEnd();



    glutSwapBuffers();

if(s==0) ///讓角度達到極限值後迴轉
{
    a++;
    if(a >= 3000) s=1;  ///因我angle速度*0.02調慢，故數值需/0.02回去
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
    ///少寫一個，因為預設就是RGB
    glutCreateWindow("07361092 work03!!!");
    glutDisplayFunc(display);



    glutIdleFunc(display); ///TODO: 閒閒有空時,就重畫畫面!!
    glutMainLoop();
}
