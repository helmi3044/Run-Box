#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

float x_pos = 0.0f;
float delta = 0.05f;
bool toRight = true;

void displayMe(void){
    glClear(GL_COLOR_BUFFER_BIT); //membersihkan frame
    //membuat kotak keranjang
    glBegin(GL_POLYGON);//awal polygon
    glColor3f(0.6,0.3,0.0);//pemberian warna polygon kotak keranjang (warna coklat)
    glVertex2f(0 + x_pos, 0);
    glColor3f(0.65,0.35,0.0);
    glVertex2f(0 + x_pos, 6);
    glColor3f(0.7,0.4,0.0);
    glVertex2f(6 + x_pos, 6);
    glColor3f(0.75,0.45,0.0);
    glVertex2f(6 + x_pos, 0);
    glEnd();//akhir

    //membuat garis kotak keranjang
    glBegin(GL_LINES);//awal garis
    glColor3f (1.0,0.0,0.0);//pemberian warna garis kotak keranjang
    glVertex2f(0 + x_pos, 0);
    glVertex2f(0 + x_pos, 6);
    glEnd();//akhir

    //membuat garis kotak keranjang
    glBegin(GL_LINES);//awal garis
    glColor3f (1.0,0.0,0.0);//pemberian warna garis kotak keranjang
    glVertex2f(6 + x_pos, 0);
    glVertex2f(6 + x_pos, 6);
    glEnd();//akhir

    //membuat garis kotak keranjang
    glBegin(GL_LINES);//awal garis
    glColor3f (1.0,0.0,0.0);//pemberian warna ungu pagar
    glVertex2f(0 + x_pos, 6);
    glVertex2f(6 + x_pos, 6);
    glEnd();//akhir

    //membuat motif kotak
    glBegin(GL_POLYGON);//awal polygon
    glColor3f(0.6,0.0,0.0);//pemberian warna polygon motif kotak
    glVertex2f(3 + x_pos, 1);
    glColor3f(0.8,0.0,0.0);
    glVertex2f(1 + x_pos, 3);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(3 + x_pos, 5);
    glColor3f(1.2,0.0,0.0);
    glVertex2f(5 + x_pos, 3);
    glEnd();//akhir
	glutSwapBuffers();
}

void timer(int) {
    glutPostRedisplay();
    glutTimerFunc(1000/30 , timer, 0);
    if (x_pos < 43.5f && toRight)
        x_pos += delta;
    else
        toRight = false;

    if (x_pos > -0.0f && !toRight)
        x_pos -= delta;
    else
        toRight = true;
}

int main(int argc, char** argv){
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE); //ATUR DISPLAY
	glutInitWindowSize(700, 700);
	glutInitWindowPosition(0,0);
	glutCreateWindow("Animasi Kotak");
	glutDisplayFunc(displayMe);
	gluOrtho2D(0, 50, 0, 50);
	glutTimerFunc(0, timer, 0);
	glutMainLoop();
	return 0;
}
