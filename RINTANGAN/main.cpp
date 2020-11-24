#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

void Rintangan(){
    //Badan Misil
    glBegin(GL_POLYGON);
    glColor3ub(220, 220, 220);
    glVertex2f(4,44);
	glVertex2f(6,44);
	glVertex2f(6,48);
	glVertex2f(4,48);
    glEnd();

    //Sayap Kiri Misil
    glBegin(GL_POLYGON);
    glColor3ub(105, 105, 105);
    glVertex2f(3, 49);
	glVertex2f(4, 48);
	glVertex2f(4, 44.5);
	glVertex2f(3, 45);
    glEnd();

    //Sayap Kanan Misil
    glBegin(GL_POLYGON);
    glColor3ub(105, 105, 105);
    glVertex2f(7, 49);
	glVertex2f(6, 48);
	glVertex2f(6, 44.5);
	glVertex2f(7, 45);
    glEnd();

    //Moncong Misil
    glBegin(GL_POLYGON);
    glColor3ub(47, 79, 79);
    glVertex2f(4, 44);
	glVertex2f(4, 42.8);
	glVertex2f(4.5, 42.3);
	glVertex2f(5, 42);
	glVertex2f(5.5, 42.3);
	glVertex2f(6, 42.8);
	glVertex2f(6, 44);
    glEnd();

}

void displayMe(void){
    glClear(GL_COLOR_BUFFER_BIT);

    Rintangan();

    glutSwapBuffers();
}

int main(int argc, char** argv){
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE); //ATUR DISPLAY
	glutInitWindowSize(700, 700); //UKURAN DISPLAY
	glutInitWindowPosition(0,0); //POSISI DISPLAY
	glutCreateWindow("RINTANGAN"); //MEMBUAT WINDOW
	glutDisplayFunc(displayMe); //MEMANGGIL DISPLAY
	gluOrtho2D(0, 50, 0, 50); //MENGATUR JANGKAUAN TITIK PADA DISPLAY
	glutMainLoop(); //PENGULANGAN
	return 0;
}
