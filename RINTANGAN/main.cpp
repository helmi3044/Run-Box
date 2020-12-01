#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

float y_pos = 0.48f;
float delta = 0.05f;
bool toDown = true;

void displayMe(void){
    glClear(GL_COLOR_BUFFER_BIT);
    //Badan Misil
    glBegin(GL_POLYGON);
    glColor3ub(220, 220, 220);
    glVertex2f(4, 44+ y_pos);
	glVertex2f(6, 44+ y_pos);
	glVertex2f(6, 48+ y_pos);
	glVertex2f(4, 48+ y_pos);
    glEnd();

    //Sayap Kiri Misil
    glBegin(GL_POLYGON);
    glColor3ub(105, 105, 105);
    glVertex2f(3, 49+ y_pos);
	glVertex2f(4, 48+ y_pos);
	glVertex2f(4, 44.5+ y_pos);
	glVertex2f(3, 45+ y_pos);
    glEnd();

    //Sayap Kanan Misil
    glBegin(GL_POLYGON);
    glColor3ub(105, 105, 105);
    glVertex2f(7, 49+ y_pos);
	glVertex2f(6, 48+ y_pos);
	glVertex2f(6, 44.5+ y_pos);
	glVertex2f(7, 45+ y_pos);
    glEnd();

    //Moncong Misil
    glBegin(GL_POLYGON);
    glColor3ub(47, 79, 79);
    glVertex2f(4, 44+ y_pos);
	glVertex2f(4, 42.8+ y_pos);
	glVertex2f(4.5, 42.3+ y_pos);
	glVertex2f(5, 42+ y_pos);
	glVertex2f(5.5, 42.3+ y_pos);
	glVertex2f(6, 42.8+ y_pos);
	glVertex2f(6, 44+ y_pos);
    glEnd();
    glutSwapBuffers();

}


void timer(int) {
    glutPostRedisplay();
    glutTimerFunc(1000/30 , timer, 0);
    if (y_pos < 43.5f && toDown)
        y_pos -= delta;
    else
        toDown = false;

}

int main(int argc, char** argv){
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE); //ATUR DISPLAY
	glutInitWindowSize(700, 700); //UKURAN DISPLAY
	glutInitWindowPosition(0,0); //POSISI DISPLAY
	glutCreateWindow("RINTANGAN"); //MEMBUAT WINDOW
	glutDisplayFunc(displayMe); //MEMANGGIL DISPLAY
	gluOrtho2D(0, 50, 0, 50); //MENGATUR JANGKAUAN TITIK PADA DISPLAY
	glutTimerFunc(0, timer, 0);
	glutMainLoop(); //PENGULANGAN
	return 0;
}
