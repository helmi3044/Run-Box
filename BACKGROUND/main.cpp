#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

void Latar(){
    //Pesisir
    glBegin(GL_POLYGON);
    glColor3ub(163, 98, 34);
    glVertex2f(50, 0);
	glVertex2f(0, 0);
	glColor3ub(247, 200, 153);
	glVertex2f(0, 15);
	glVertex2f(50, 20);
    glEnd();

    //Air Laut
    glBegin(GL_POLYGON);
    glColor3ub(189, 230, 255);
	glVertex2f(50, 20);
	glVertex2f(0, 15);
	glColor3ub(135,206,250);
	glVertex2f(0, 35);
	glVertex2f(50, 35);
    glEnd();

    //Langit
    glBegin(GL_POLYGON);
    glColor3ub(255, 197, 158);
    glVertex2f(50, 35);
    glColor3ub(227, 245, 255);
	glVertex2f(0, 35);
	glColor3ub(255, 197, 158);
	glVertex2f(0, 50);
	glColor3ub(255, 112, 18);
	glVertex2f(50, 50);
    glEnd();

    //Batas Antara Laut Dan Pesisir
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(0, 15);
    glColor3ub(135,206,250);
	glVertex2f(10, 15);
	glColor3ub(255,255,255);
	glVertex2f(15, 16);
	glColor3ub(135,206,250);
	glVertex2f(20, 17);
	glColor3ub(255,255,255);
	glVertex2f(25, 16);
	glColor3ub(135,206,250);
	glVertex2f(35, 18);
	glColor3ub(255,255,255);
	glVertex2f(45, 19);
	glColor3ub(135,206,250);
	glVertex2f(50, 20);
    glEnd();
}

void Burung(){
    //Burung
    glLineWidth(2);
    glBegin(GL_LINE_STRIP);
    glColor3ub(0,0,0);
    glVertex2f(3, 41);
    glVertex2f(4, 42);
    glVertex2f(5, 41);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINE_STRIP);
    glColor3ub(0,0,0);
    glVertex2f(4.5, 41);
    glVertex2f(5.5, 42);
    glVertex2f(6.5, 41);
    glEnd();

    glTranslated(3,3,0);
    glLineWidth(2);
    glBegin(GL_LINE_STRIP);
    glColor3ub(0,0,0);
    glVertex2f(3, 41);
    glVertex2f(4, 42);
    glVertex2f(5, 41);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINE_STRIP);
    glColor3ub(0,0,0);
    glVertex2f(4.5, 41);
    glVertex2f(5.5, 42);
    glVertex2f(6.5, 41);
    glEnd();

    glTranslated(2,-4,0);
    glLineWidth(2);
    glBegin(GL_LINE_STRIP);
    glColor3ub(0,0,0);
    glVertex2f(3, 41);
    glVertex2f(4, 42);
    glVertex2f(5, 41);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINE_STRIP);
    glColor3ub(0,0,0);
    glVertex2f(4.5, 41);
    glVertex2f(5.5, 42);
    glVertex2f(6.5, 41);
    glEnd();

    glTranslated(4,2,0);
    glLineWidth(2);
    glBegin(GL_LINE_STRIP);
    glColor3ub(0,0,0);
    glVertex2f(3, 41);
    glVertex2f(4, 42);
    glVertex2f(5, 41);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINE_STRIP);
    glColor3ub(0,0,0);
    glVertex2f(4.5, 41);
    glVertex2f(5.5, 42);
    glVertex2f(6.5, 41);
    glEnd();

    glTranslated(3,-3,0);
    glLineWidth(2);
    glBegin(GL_LINE_STRIP);
    glColor3ub(0,0,0);
    glVertex2f(3, 41);
    glVertex2f(4, 42);
    glVertex2f(5, 41);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINE_STRIP);
    glColor3ub(0,0,0);
    glVertex2f(4.5, 41);
    glVertex2f(5.5, 42);
    glVertex2f(6.5, 41);
    glEnd();
}

void Matahari(){
    //Matahari
    //Matahari Seperempat Lingkaran
    glBegin(GL_POLYGON);
    glColor3ub(214, 85, 0);
    glVertex2f(50, 50);
    glVertex2f(50, 46);
    glVertex2f(48.5, 46.5);
    glVertex2f(47.3, 47.3);
    glVertex2f(46.5, 48.5);
    glVertex2f(46, 50);
    glEnd();

    //Garis Di Luar Matahari
    glBegin(GL_LINE_STRIP);
    glColor3ub(214, 85, 0);
    glVertex2f(44, 50);
    glVertex2f(45, 49);
    glVertex2f(44.5, 47.5);
    glVertex2f(45.5, 46.7);
    glVertex2f(45.3, 45.3);
    glVertex2f(46.7, 45.5);
    glVertex2f(47.5, 44.5);
    glVertex2f(49, 45);
    glVertex2f(50, 44);
    glEnd();
}

void Pohon(){
    //Pohon Kiri
    //Batang Pohon
    glTranslated(-13,-1,0);
    glBegin(GL_POLYGON);
    glColor3ub(54, 19, 0);
    glVertex2f(4, 4);
    glColor3ub(110, 71, 49);
	glVertex2f(4, 5);
	glColor3ub(156, 68, 19);
	glVertex2f(4, 6);
	glColor3ub(54, 19, 0);
	glVertex2f(4.1, 7);
	glColor3ub(110, 71, 49);
	glVertex2f(4.3, 9);
	glColor3ub(156, 68, 19);
	glVertex2f(4.5, 11);
	glColor3ub(54, 19, 0);
	glVertex2f(4.8, 13);
	glColor3ub(110, 71, 49);
	glVertex2f(5, 15);
	glColor3ub(156, 68, 19);
	glVertex2f(5.5, 18);
	glColor3ub(54, 19, 0);
	glVertex2f(6, 20);
	glColor3ub(110, 71, 49);
	glVertex2f(7, 20);
	glColor3ub(156, 68, 19);
	glVertex2f(6.5, 18);
	glColor3ub(54, 19, 0);
	glVertex2f(6, 15);
	glColor3ub(110, 71, 49);
	glVertex2f(6, 13);
	glColor3ub(156, 68, 19);
	glVertex2f(5.8, 11);
	glColor3ub(54, 19, 0);
	glVertex2f(6, 9);
	glColor3ub(110, 71, 49);
	glVertex2f(6, 7);
	glColor3ub(156, 68, 19);
	glVertex2f(6.2, 6);
	glColor3ub(54, 19, 0);
	glVertex2f(6.5, 5);
	glColor3ub(110, 71, 49);
	glVertex2f(7, 4);
    glEnd();

    //Daun Kiri Atas
    glBegin(GL_POLYGON);
    glColor3ub(47, 130, 8);
	glVertex2f(6.5, 20);
    glColor3ub(47, 130, 8);
    glVertex2f(5, 26);
	glColor3ub(143, 191, 75);
	glVertex2f(6.5, 23);
	glColor3ub(47, 130, 8);
	glVertex2f(7, 27);
	glColor3ub(143, 191, 75);
	glVertex2f(7.5, 25);
	glColor3ub(47, 130, 8);
	glVertex2f(8, 25.5);
	glColor3ub(143, 191, 75);
	glVertex2f(7, 23);
	glColor3ub(47, 130, 8);
	glVertex2f(8, 24);
	glColor3ub(143, 191, 75);
	glVertex2f(8, 22);
    glEnd();

    //Daun Kiri Atas
    glBegin(GL_POLYGON);
    glColor3ub(47, 130, 8);
	glVertex2f(6.5, 20);
    glColor3ub(143, 191, 75);
    glVertex2f(0.5, 19.5);
    glColor3ub(47, 130, 8);
	glVertex2f(2, 21.5);
	glColor3ub(143, 191, 75);
	glVertex2f(2.5, 21);
	glColor3ub(47, 130, 8);
	glVertex2f(3.5, 22);
	glColor3ub(143, 191, 75);
	glVertex2f(5, 22);
	glColor3ub(47, 130, 8);
	glVertex2f(5.5, 21.5);
	glColor3ub(143, 191, 75);
	glVertex2f(6, 22);
    glEnd();

    //Daun Kanan Atas
    glBegin(GL_POLYGON);
    glColor3ub(47, 130, 8);
	glVertex2f(6.5, 20);
    glColor3ub(143, 191, 75);
    glVertex2f(12.5, 19.5);
    glColor3ub(47, 130, 8);
	glVertex2f(11, 21.5);
	glColor3ub(143, 191, 75);
	glVertex2f(10.5, 21);
	glColor3ub(47, 130, 8);
	glVertex2f(9.5, 22);
	glColor3ub(143, 191, 75);
	glVertex2f(8, 22);
	glColor3ub(47, 130, 8);
	glVertex2f(7.5, 21.5);
	glColor3ub(143, 191, 75);
	glVertex2f(7, 22);
    glEnd();

    //Daun Kiri Bawah
    glBegin(GL_POLYGON);
    glColor3ub(47, 130, 8);
    glVertex2f(6.5, 20);
    glColor3ub(143, 191, 75);
	glVertex2f(3, 14);
	glColor3ub(47, 130, 8);
	glVertex2f(3, 17);
	glColor3ub(143, 191, 75);
	glVertex2f(4, 17);
	glColor3ub(47, 130, 8);
	glVertex2f(4, 19);
	glColor3ub(143, 191, 75);
	glVertex2f(5, 19);
	glColor3ub(47, 130, 8);
	glVertex2f(5, 20);
    glEnd();

    //Daun Kanan Bawah
    glBegin(GL_POLYGON);
    glColor3ub(47, 130, 8);
    glVertex2f(6.5, 20);
    glColor3ub(143, 191, 75);
	glVertex2f(10, 14);
	glColor3ub(47, 130, 8);
	glVertex2f(10, 17);
	glColor3ub(143, 191, 75);
	glVertex2f(9, 17);
	glColor3ub(47, 130, 8);
	glVertex2f(9, 19);
	glColor3ub(143, 191, 75);
	glVertex2f(8, 19);
	glColor3ub(47, 130, 8);
	glVertex2f(8, 20);
    glEnd();

    //Pohon Kanan
    glTranslated(52,-2,0);
    glScalef(-1.5,1.5,0);
    //Batang Pohon
    glBegin(GL_POLYGON);
    glColor3ub(54, 19, 0);
    glVertex2f(4, 4);
    glColor3ub(110, 71, 49);
	glVertex2f(4, 5);
	glColor3ub(156, 68, 19);
	glVertex2f(4, 6);
	glColor3ub(54, 19, 0);
	glVertex2f(4.1, 7);
	glColor3ub(110, 71, 49);
	glVertex2f(4.3, 9);
	glColor3ub(156, 68, 19);
	glVertex2f(4.5, 11);
	glColor3ub(54, 19, 0);
	glVertex2f(4.8, 13);
	glColor3ub(110, 71, 49);
	glVertex2f(5, 15);
	glColor3ub(156, 68, 19);
	glVertex2f(5.5, 18);
	glColor3ub(54, 19, 0);
	glVertex2f(6, 20);
	glColor3ub(110, 71, 49);
	glVertex2f(7, 20);
	glColor3ub(156, 68, 19);
	glVertex2f(6.5, 18);
	glColor3ub(54, 19, 0);
	glVertex2f(6, 15);
	glColor3ub(110, 71, 49);
	glVertex2f(6, 13);
	glColor3ub(156, 68, 19);
	glVertex2f(5.8, 11);
	glColor3ub(54, 19, 0);
	glVertex2f(6, 9);
	glColor3ub(110, 71, 49);
	glVertex2f(6, 7);
	glColor3ub(156, 68, 19);
	glVertex2f(6.2, 6);
	glColor3ub(54, 19, 0);
	glVertex2f(6.5, 5);
	glColor3ub(110, 71, 49);
	glVertex2f(7, 4);
    glEnd();

    //Daun Kiri Atas
    glBegin(GL_POLYGON);
    glColor3ub(47, 130, 8);
	glVertex2f(6.5, 20);
    glColor3ub(47, 130, 8);
    glVertex2f(5, 26);
	glColor3ub(143, 191, 75);
	glVertex2f(6.5, 23);
	glColor3ub(47, 130, 8);
	glVertex2f(7, 27);
	glColor3ub(143, 191, 75);
	glVertex2f(7.5, 25);
	glColor3ub(47, 130, 8);
	glVertex2f(8, 25.5);
	glColor3ub(143, 191, 75);
	glVertex2f(7, 23);
	glColor3ub(47, 130, 8);
	glVertex2f(8, 24);
	glColor3ub(143, 191, 75);
	glVertex2f(8, 22);
    glEnd();

    //Daun Kiri Atas
    glBegin(GL_POLYGON);
    glColor3ub(47, 130, 8);
	glVertex2f(6.5, 20);
    glColor3ub(143, 191, 75);
    glVertex2f(0.5, 19.5);
    glColor3ub(47, 130, 8);
	glVertex2f(2, 21.5);
	glColor3ub(143, 191, 75);
	glVertex2f(2.5, 21);
	glColor3ub(47, 130, 8);
	glVertex2f(3.5, 22);
	glColor3ub(143, 191, 75);
	glVertex2f(5, 22);
	glColor3ub(47, 130, 8);
	glVertex2f(5.5, 21.5);
	glColor3ub(143, 191, 75);
	glVertex2f(6, 22);
    glEnd();

    //Daun Kanan Atas
    glBegin(GL_POLYGON);
    glColor3ub(47, 130, 8);
	glVertex2f(6.5, 20);
    glColor3ub(143, 191, 75);
    glVertex2f(12.5, 19.5);
    glColor3ub(47, 130, 8);
	glVertex2f(11, 21.5);
	glColor3ub(143, 191, 75);
	glVertex2f(10.5, 21);
	glColor3ub(47, 130, 8);
	glVertex2f(9.5, 22);
	glColor3ub(143, 191, 75);
	glVertex2f(8, 22);
	glColor3ub(47, 130, 8);
	glVertex2f(7.5, 21.5);
	glColor3ub(143, 191, 75);
	glVertex2f(7, 22);
    glEnd();

    //Daun Kiri Bawah
    glBegin(GL_POLYGON);
    glColor3ub(47, 130, 8);
    glVertex2f(6.5, 20);
    glColor3ub(143, 191, 75);
	glVertex2f(3, 14);
	glColor3ub(47, 130, 8);
	glVertex2f(3, 17);
	glColor3ub(143, 191, 75);
	glVertex2f(4, 17);
	glColor3ub(47, 130, 8);
	glVertex2f(4, 19);
	glColor3ub(143, 191, 75);
	glVertex2f(5, 19);
	glColor3ub(47, 130, 8);
	glVertex2f(5, 20);
    glEnd();

    //Daun Kanan Bawah
    glBegin(GL_POLYGON);
    glColor3ub(47, 130, 8);
    glVertex2f(6.5, 20);
    glColor3ub(143, 191, 75);
	glVertex2f(10, 14);
	glColor3ub(47, 130, 8);
	glVertex2f(10, 17);
	glColor3ub(143, 191, 75);
	glVertex2f(9, 17);
	glColor3ub(47, 130, 8);
	glVertex2f(9, 19);
	glColor3ub(143, 191, 75);
	glVertex2f(8, 19);
	glColor3ub(47, 130, 8);
	glVertex2f(8, 20);
    glEnd();
}

void Perahu(){
    //Perahu
    //Badan Perahu
    glBegin(GL_POLYGON);
    glColor3ub(54, 19, 0);
    glVertex2f(19, 24);
    glVertex2f(14, 24);
    glVertex2f(12, 26);
    glColor3ub(255, 197, 158);
    glVertex2f(21, 26);
    glEnd();

    //Tiang Bendera
    glBegin(GL_POLYGON);
    glColor3ub(54, 19, 0);
    glVertex2f(16.5, 31);
    glVertex2f(16.5, 26);
    glVertex2f(16, 26);
    glVertex2f(16, 31);
    glEnd();

    //Bendera
    glBegin(GL_TRIANGLES);
    glColor3ub(255,255,255);
    glVertex2f(16.5, 27);
    glColor3ub(255, 197, 158);
    glVertex2f(16.5, 31);
    glVertex2f(19, 29);
    glEnd();
}

void displayMe(void){
    glClear(GL_COLOR_BUFFER_BIT);

    Latar();
    Matahari();
    Perahu();
    Burung();
    Pohon();

    glutSwapBuffers();
}

int main(int argc, char** argv){
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE); //ATUR DISPLAY
	glutInitWindowSize(700, 700); //UKURAN DISPLAY
	glutInitWindowPosition(0,0); //POSISI DISPLAY
	glutCreateWindow("BACKGROUND"); //MEMBUAT WINDOW
	glutDisplayFunc(displayMe); //MEMANGGIL DISPLAY
	gluOrtho2D(0, 50, 0, 50); //MENGATUR JANGKAUAN TITIK PADA DISPLAY
	glutMainLoop(); //PENGULANGAN
	return 0;
}
