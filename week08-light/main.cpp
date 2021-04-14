#include <opencv/highgui.h> ///使用 OpenCV 2.1 比較簡單, 只要用 High GUI 即可
#include <opencv/cv.h>
#include <GL/glut.h>

GLuint id1, id2; ///TODO:增加2個 貼圖ID

int myTexture(char * filename) ///從老師那邊幹來的 https://hackmd.io/@jsyeh/opengl
{
    IplImage * img = cvLoadImage(filename); ///OpenCV讀圖
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
    return id;
}   ///最後一行最難/最重要, 所貼圖影像的資料都設定好

void display()
{

glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);


glBindTexture(GL_TEXTURE_2D, id1); ///TODO: id1的貼圖
glutSolidTeapot(0.3);


glBindTexture(GL_TEXTURE_2D, id2); ///TODO: id2的貼圖
glBegin(GL_POLYGON);
    glTexCoord2f(0,1); glVertex2f(-1,-1);
    glTexCoord2f(1,1); glVertex2f(+1,-1);
    glTexCoord2f(1,0); glVertex2f(+1,+1);
    glTexCoord2f(0,0); glVertex2f(-1,+1);
glEnd();

glutSwapBuffers();


}

///打光的陣列，放在main()前面
const GLfloat light_ambient[]  = { 0.0f, 0.0f, 0.0f, 1.0f };
const GLfloat light_diffuse[]  = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat light_specular[] = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat light_position[] = { 2.0f, 5.0f, -5.0f, 0.0f };

const GLfloat mat_ambient[]    = { 0.7f, 0.7f, 0.7f, 1.0f };
const GLfloat mat_diffuse[]    = { 0.8f, 0.8f, 0.8f, 1.0f };
const GLfloat mat_specular[]   = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat high_shininess[] = { 100.0f };


int main(int argc, char*argv[])
{

glutInit( &argc, argv );
glutInitDisplayMode( GLUT_DOUBLE | GLUT_DEPTH );
glutCreateWindow("07361092!!!");
glutDisplayFunc(display);

id1 = myTexture("XD.jpg");
id2 = myTexture("bg.jpg");

 ///下面是 glutMainLoop()之前,要把打光的函式呼叫、設定
    glEnable(GL_LIGHT0);
    glEnable(GL_NORMALIZE);
    glEnable(GL_COLOR_MATERIAL);
    glEnable(GL_LIGHTING);

    glLightfv(GL_LIGHT0, GL_AMBIENT,  light_ambient);
    glLightfv(GL_LIGHT0, GL_DIFFUSE,  light_diffuse);
    glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);
    glLightfv(GL_LIGHT0, GL_POSITION, light_position);

    glMaterialfv(GL_FRONT, GL_AMBIENT,   mat_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE,   mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR,  mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);

glEnable(GL_DEPTH_TEST);
glutMainLoop();

}
