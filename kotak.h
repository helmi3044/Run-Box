class Kotak{
public :
int angle;
float horizontalMove;
float verticalMove;

// Collider
float posisiX[2] = {0, 4};
float posisiY[2] = {0, 4};

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
    glScaled(1,1,0);
    glBegin(GL_POLYGON);//awal polygon
    glColor3f(0.6,0.3,0.0);//pemberian warna polygon kotak keranjang (warna coklat)
    glVertex2f(0, 0);
    glColor3f(0.65,0.35,0.0);
    glVertex2f(0, 4);
    glColor3f(0.7,0.4,0.0);
    glVertex2f(4, 4);
    glColor3f(0.75,0.45,0.0);
    glVertex2f(4, 0);
    glEnd();//akhir

    //membuat garis kotak keranjang
    glBegin(GL_LINES);//awal garis
    glColor3f (1.0,0.0,0.0);//pemberian warna garis kotak keranjang
    glVertex2f(0, 0);
    glVertex2f(0, 4);
    glEnd();//akhir

    //membuat garis kotak keranjang
    glBegin(GL_LINES);//awal garis
    glColor3f (1.0,0.0,0.0);//pemberian warna garis kotak keranjang
    glVertex2f(4, 0);
    glVertex2f(4, 4);
    glEnd();//akhir

    //membuat garis kotak keranjang
    glBegin(GL_LINES);//awal garis
    glColor3f (1.0,0.0,0.0);//pemberian warna ungu pagar
    glVertex2f(0, 4);
    glVertex2f(4, 4);
    glEnd();//akhir

    //membuat motif kotak
    glBegin(GL_POLYGON);//awal polygon
    glColor3f(0.6,0.0,0.0);//pemberian warna polygon motif kotak
    glVertex2f(2, 0);
    glColor3f(0.8,0.0,0.0);
    glVertex2f(0, 2);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(2, 4);
    glColor3f(1.2,0.0,0.0);
    glVertex2f(4, 2);
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
};
