#include <windows.h>
#include <GL/glut.h>
#include <GL/gl.h>

int angle;
float horizontalMove;
float verticalMove;

// Collider
float posisiX[2] = {0, 9};
float posisiY[2] = {0, 9};

void ColliderPersegi(){ // Collider bentuk kotak
    glPushMatrix();
    glBegin(GL_POLYGON);
	glColor3f(0.063, 0.91, 0.176);
	glVertex2f(posisiX[0], posisiY[0]);
	glVertex2f(posisiX[1], posisiY[0]);
	glVertex2f(posisiX[1], posisiY[1]);
	glVertex2f(posisiX[0], posisiY[1]);
	glEnd();
    glPopMatrix();
}

// Menggambar objek
void KotakView(){
    //membuat kotak keranjang
    glTranslated(-5,-5,0);
    glScaled(1.5,1.5,0);
    glBegin(GL_POLYGON);//awal polygon
    glColor3f(0.6,0.3,0.0);//pemberian warna polygon kotak keranjang (warna coklat)
    glVertex2f(0, 0);
    glColor3f(0.65,0.35,0.0);
    glVertex2f(0, 6);
    glColor3f(0.7,0.4,0.0);
    glVertex2f(6, 6);
    glColor3f(0.75,0.45,0.0);
    glVertex2f(6, 0);
    glEnd();//akhir

    //membuat garis kotak keranjang
    glBegin(GL_LINES);//awal garis
    glColor3f (1.0,0.0,0.0);//pemberian warna garis kotak keranjang
    glVertex2f(0, 0);
    glVertex2f(0, 6);
    glEnd();//akhir

    //membuat garis kotak keranjang
    glBegin(GL_LINES);//awal garis
    glColor3f (1.0,0.0,0.0);//pemberian warna garis kotak keranjang
    glVertex2f(6, 0);
    glVertex2f(6, 6);
    glEnd();//akhir

    //membuat garis kotak keranjang
    glBegin(GL_LINES);//awal garis
    glColor3f (1.0,0.0,0.0);//pemberian warna ungu pagar
    glVertex2f(0, 6);
    glVertex2f(6, 6);
    glEnd();//akhir

    //membuat motif kotak
    glBegin(GL_POLYGON);//awal polygon
    glColor3f(0.6,0.0,0.0);//pemberian warna polygon motif kotak
    glVertex2f(3, 1);
    glColor3f(0.8,0.0,0.0);
    glVertex2f(1, 3);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(3, 5);
    glColor3f(1.2,0.0,0.0);
    glVertex2f(5, 3);
    glEnd();//akhir
}

void KotakObject(){
    // Memasang collider pada object
    ColliderPersegi();

    glPushMatrix();
    glTranslatef(horizontalMove, verticalMove,0); // Mengendalikan posisi segitiganya
    glTranslatef(5,5,0); // Menengahkan view
    KotakView(); // Memanggil view
    glPopMatrix();
}

// Fungsi untuk mengendalikan object
void characterController(int data)
{
    // Jika menekan tombol panah kiri
    if(GetAsyncKeyState(VK_LEFT)){
        if (posisiX[0] >= 0){
            posisiX[0] -= 0.1f;
            posisiX[1] -= 0.1f;
            horizontalMove-=0.1f;
        }
    // Jika menekan tombol panah kanan
    } else if(GetAsyncKeyState(VK_RIGHT)){
        if (posisiX[1] <= 50){
            posisiX[0] += 0.1f;
            posisiX[1] += 0.1f;
            horizontalMove+=0.1f;
        }
    }

    glutPostRedisplay();
	glutTimerFunc(1,characterController,0);
}

void displayMe(void) {
	glClearColor(1,1,1, 1);
	glClear(GL_COLOR_BUFFER_BIT);

	// Memanggil objek
    KotakObject();

	glFlush();
	glutSwapBuffers();
}

void myinit() {
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glMatrixMode(GL_MODELVIEW);
	glClearColor(1.0, 1.0, 1.0, 1.0); //membersihkan windows
	glColor3f(0.0, 0.0, 0.0); //spesifikasi warna
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
}

int main(int argc, char** argv){
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutInitWindowSize(700, 700);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Kotak Keranjang");
	gluOrtho2D(0, 50, 0, 50);
	glutDisplayFunc(displayMe);
	glutTimerFunc(1,characterController,0);
	myinit();
	glutMainLoop();
	return 0;
}
