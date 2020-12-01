#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

// including files
using namespace std;
float xr = 0, yr = 0; // to control object's movement


void displayMe(void){
    glClear(GL_COLOR_BUFFER_BIT); //membersihkan frame
    //membuat kotak keranjang
    glBegin(GL_POLYGON);//awal polygon
    glColor3f(0.6,0.3,0.0);//pemberian warna polygon kotak keranjang (warna coklat)
    glVertex2f(0 + xr, 0);
    glColor3f(0.65,0.35,0.0);
    glVertex2f(0 + xr, 6);
    glColor3f(0.7,0.4,0.0);
    glVertex2f(6 + xr, 6);
    glColor3f(0.75,0.45,0.0);
    glVertex2f(6 + xr, 0);
    glEnd();//akhir

    //membuat garis kotak keranjang
    glBegin(GL_LINES);//awal garis
    glColor3f (1.0,0.0,0.0);//pemberian warna garis kotak keranjang
    glVertex2f(0 + xr, 0);
    glVertex2f(0 + xr, 6);
    glEnd();//akhir

    //membuat garis kotak keranjang
    glBegin(GL_LINES);//awal garis
    glColor3f (1.0,0.0,0.0);//pemberian warna garis kotak keranjang
    glVertex2f(6 + xr, 0);
    glVertex2f(6 + xr, 6);
    glEnd();//akhir

    //membuat garis kotak keranjang
    glBegin(GL_LINES);//awal garis
    glColor3f (1.0,0.0,0.0);//pemberian warna ungu pagar
    glVertex2f(0 + xr, 6);
    glVertex2f(6 + xr, 6);
    glEnd();//akhir

    //membuat motif kotak
    glBegin(GL_POLYGON);//awal polygon
    glColor3f(0.6,0.0,0.0);//pemberian warna polygon motif kotak
    glVertex2f(3 + xr, 1);
    glColor3f(0.8,0.0,0.0);
    glVertex2f(1 + xr, 3);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(3 + xr, 5);
    glColor3f(1.2,0.0,0.0);
    glVertex2f(5 + xr, 3);
    glEnd();//akhir

    glFlush();
    glutPostRedisplay();
	glutSwapBuffers();
}

// setup keyboard controlling function
void specialkey(int key, int x, int y){
    switch(key){
    case GLUT_KEY_LEFT:
        xr--;
        glutPostRedisplay();
        break;
    case GLUT_KEY_RIGHT:
        xr++;
        glutPostRedisplay();
        break;
    }
}

//setting up main function
int main(int argc, char** argv){
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE); //ATUR DISPLAY
	glutInitWindowSize(700, 700);//UKURAN DISPLAY
	glutInitWindowPosition(0,0);//POSISI DISPLAY
	glutCreateWindow("Animasi Kotak");//MEMBUAT WINDOW
	glutDisplayFunc(displayMe); //display call back function
	gluOrtho2D(0, 50, 0, 50);//MENGATUR JANGKAUAN TITIK PADA DISPLAY
	glutSpecialFunc(specialkey); // keyboard call back function
	glutMainLoop();//PENGULANGAN
	return 0;
}
