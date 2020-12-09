#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

float x_pos = 16.5;
float delta = 0.25;
bool toRight = true;

void Perahu(){
    //Perahu
    //Badan Perahu
    glBegin(GL_POLYGON);
    glColor3ub(54, 19, 0);
    glVertex2f(19 + x_pos, 24);
    glVertex2f(14 + x_pos, 24);
    glVertex2f(12 + x_pos, 26);
    glColor3ub(255, 197, 158);
    glVertex2f(21 + x_pos, 26);
    glEnd();

    //Tiang Bendera
    glBegin(GL_POLYGON);
    glColor3ub(54, 19, 0);
    glVertex2f(16.5 + x_pos, 31);
    glVertex2f(16.5 + x_pos, 26);
    glVertex2f(16 + x_pos, 26);
    glVertex2f(16 + x_pos, 31);
    glEnd();

    //Bendera
    glBegin(GL_TRIANGLES);
    glColor3ub(255,255,255);
    glVertex2f(16.5 + x_pos, 27);
    glColor3ub(255, 197, 158);
    glVertex2f(16.5 + x_pos, 31);
    glVertex2f(19 + x_pos, 29);
    glEnd();
}

void timer(int){
    glutPostRedisplay();
    glutTimerFunc(1000/30, timer, 0);
    if(x_pos < 29 && toRight)
        x_pos += delta;
    else
        toRight = false;

    if(x_pos > -12 && !toRight)
        x_pos -= delta;
    else
        toRight = true;
}

void displayMe(void){
    glClear(GL_COLOR_BUFFER_BIT);

    Perahu();

    glutSwapBuffers();
}

int main(int argc, char** argv){
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE); //ATUR DISPLAY
	glutInitWindowSize(700, 700); //UKURAN DISPLAY
	glutInitWindowPosition(0,0); //POSISI DISPLAY
	glutCreateWindow("PERAHU"); //MEMBUAT WINDOW
	glutDisplayFunc(displayMe); //MEMANGGIL DISPLAY
	gluOrtho2D(0, 50, 0, 50); //MENGATUR JANGKAUAN TITIK PADA DISPLAY
	glutTimerFunc(0, timer, 0);
	glutMainLoop(); //PENGULANGAN
	return 0;
}
