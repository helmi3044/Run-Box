#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <string>
#include <cstring>
#include <iostream>
#include <fstream>

#include "kotak.h"
#include "background.h"
#include "printer.h"
#include "rintangan.h"
Background background;
Kotak kotak;
Printer printer;
Rintangan rintangan;

int detik;
int menit;
int jam;
bool mulai;

void fullBackground(){
    background.Latar();
    background.Matahari();
    background.Perahu();
    background.Burung();
    background.Pohon();
}

void fullRintangan(){
    rintangan.Rintangan1();
    rintangan.Rintangan2();
    rintangan.Rintangan3();
    rintangan.Rintangan4();
    rintangan.Rintangan5();
    rintangan.Rintangan6();
    rintangan.Rintangan7();
    rintangan.Rintangan8();
    rintangan.Rintangan9();
    rintangan.Rintangan10();
    rintangan.Rintangan11();
    rintangan.Rintangan12();
    rintangan.Rintangan13();
}

void menuAwal(){
    glBegin(GL_POLYGON);
    glColor3ub(59, 120, 75);
    glVertex2f(20, 23);
    glVertex2f(30, 23);
    glVertex2f(30, 28);
    glVertex2f(20, 28);
    glEnd();
    glColor3ub(255, 255, 255);
    printer.drawText(21, 25,"MULAI GAME");
}

void gameOver(){
    glBegin(GL_POLYGON);
    glColor3ub(59, 120, 75);
    glVertex2f(20, 30);
    glVertex2f(30, 30);
    glVertex2f(30, 35);
    glVertex2f(20, 35);
    glEnd();
    glColor3ub(255, 255, 255);
    printer.drawText(21, 32,"GAME OVER");
}

void cetakWaktu() {
    char timer[100];
    if (detik == 60) {
        menit++;
        detik = 0;
    }
    if (menit == 60) {
        jam++;
        menit = 0;
    }
    sprintf(timer, "WAKTU = %d:%d:%d", jam, menit, detik);
    printer.drawText(1, 48, timer);
}

void catatanWaktu(){
    char timer[100];
    glBegin(GL_POLYGON);
    glColor3ub(59, 120, 75);
    glVertex2f(20, 30);
    glVertex2f(30, 30);
    glVertex2f(30, 35);
    glVertex2f(20, 35);
    glEnd();
    glColor3ub(255, 255, 255);
    sprintf(timer, "WAKTU = %d:%d:%d", jam, menit, detik);
    printer.drawText(20, 32, timer);
}

void waktuUmum(int b){
    glutTimerFunc(1000, waktuUmum, 1);
    if (mulai){
        detik++;
    }
}

void resetAll(){
    detik = 0;
    menit = 0;
    jam = 0;
    mulai = true;
}

void mouse(int button, int state, int x, int y) {
    int posX, posY;
    posX = x / 8;
    posY = 91 - (y / 8);
    char debug[100];
    printf("x : %d Y : %d\n",posX,posY);
    if (button == GLUT_LEFT_BUTTON && state == GLUT_ENTERED) {
        if (posX >= 35 && posX <= 51 && posY >= 45 && posY <= 53) {
            resetAll();
            mulai = true;
        }
    }
    glutPostRedisplay();
}

void sceneSatu(){
    glPushMatrix();
    fullBackground();
    glPopMatrix();
    menuAwal();
}

void sceneDua(){
    glPushMatrix();
    fullBackground();
    glPopMatrix();
    fullRintangan();
    kotak.KotakObject();
    cetakWaktu();
}

void sceneTiga(){
    glPushMatrix();
    fullBackground();
    glPopMatrix();
    catatanWaktu();
    //resetAll();
}

void sceneEmpat(){
    glPushMatrix();
    fullBackground();
    glPopMatrix();
    gameOver();
    //resetAll();
}

void timer(int) {
    glutPostRedisplay();
    glutTimerFunc(1000/30 , timer, 0);
    if (rintangan.y_pos > -42 && rintangan.toDown)
        rintangan.y_pos -= rintangan.delta;
    else
        rintangan.toDown = false;
    if (rintangan.y_pos < 0  && !rintangan.toDown)
        rintangan.y_pos += rintangan.delta;
    else
        rintangan.toDown = true;
}

void timer2(int) {
    glutPostRedisplay();
    glutTimerFunc(1000/30 , timer2, 0);
    if (rintangan.y_pos2 > -32 && rintangan.toDown2)
        rintangan.y_pos2 -= rintangan.delta2;
    else
        rintangan.toDown2 = false;
    if (rintangan.y_pos2 < 10  && !rintangan.toDown2)
        rintangan.y_pos2 += rintangan.delta2;
    else
        rintangan.toDown2 = true;
}

void timer3(int) {
    glutPostRedisplay();
    glutTimerFunc(1000/30 , timer3, 0);
    if (rintangan.y_pos3 > -12 && rintangan.toDown3)
        rintangan.y_pos3 -= rintangan.delta3;
    else
        rintangan.toDown3 = false;
    if (rintangan.y_pos3 < 30  && !rintangan.toDown3)
        rintangan.y_pos3 += rintangan.delta3;
    else
        rintangan.toDown3 = true;
}

void timer4(int) {
    glutPostRedisplay();
    glutTimerFunc(1000/30 , timer4, 0);
    if (rintangan.y_pos4 > -17 && rintangan.toDown4)
        rintangan.y_pos4 -= rintangan.delta4;
    else
        rintangan.toDown4 = false;
    if (rintangan.y_pos4 < 25  && !rintangan.toDown4)
        rintangan.y_pos4 += rintangan.delta4;
    else
        rintangan.toDown4 = true;
}

void timer5(int) {
    glutPostRedisplay();
    glutTimerFunc(1000/30 , timer5, 0);
    if (rintangan.y_pos5 > -2 && rintangan.toDown5)
        rintangan.y_pos5 -= rintangan.delta5;
    else
        rintangan.toDown5 = false;
    if (rintangan.y_pos5 < 40  && !rintangan.toDown5)
        rintangan.y_pos5 += rintangan.delta5;
    else
        rintangan.toDown5 = true;
}

void timer6(int) {
    glutPostRedisplay();
    glutTimerFunc(1000/30 , timer6, 0);
    if (rintangan.y_pos6 > -42 && rintangan.toDown6)
        rintangan.y_pos6 -= rintangan.delta6;
    else
        rintangan.toDown6 = false;
    if (rintangan.y_pos6 < 0  && !rintangan.toDown6)
        rintangan.y_pos6 += rintangan.delta6;
    else
        rintangan.toDown6 = true;
}

void timer7(int) {
    glutPostRedisplay();
    glutTimerFunc(1000/30 , timer7, 0);
    if (rintangan.y_pos7 > -32 && rintangan.toDown7)
        rintangan.y_pos7 -= rintangan.delta7;
    else
        rintangan.toDown7 = false;
    if (rintangan.y_pos7 < 10  && !rintangan.toDown7)
        rintangan.y_pos7 += rintangan.delta7;
    else
        rintangan.toDown7 = true;
}

void timer8(int) {
    glutPostRedisplay();
    glutTimerFunc(1000/30 , timer8, 0);
    if (rintangan.y_pos8 > -12 && rintangan.toDown8)
        rintangan.y_pos8 -= rintangan.delta8;
    else
        rintangan.toDown8 = false;
    if (rintangan.y_pos8 < 30  && !rintangan.toDown8)
        rintangan.y_pos8 += rintangan.delta8;
    else
        rintangan.toDown8 = true;
}

void timer9(int) {
    glutPostRedisplay();
    glutTimerFunc(1000/30 , timer9, 0);
    if (rintangan.y_pos9 > -17 && rintangan.toDown9)
        rintangan.y_pos9 -= rintangan.delta9;
    else
        rintangan.toDown9 = false;
    if (rintangan.y_pos9 < 25  && !rintangan.toDown9)
        rintangan.y_pos9 += rintangan.delta9;
    else
        rintangan.toDown9 = true;
}

void timer10(int) {
    glutPostRedisplay();
    glutTimerFunc(1000/30 , timer10, 0);
    if (rintangan.y_pos10 > -2 && rintangan.toDown10)
        rintangan.y_pos10 -= rintangan.delta10;
    else
        rintangan.toDown10 = false;
    if (rintangan.y_pos10 < 40  && !rintangan.toDown10)
        rintangan.y_pos10 += rintangan.delta10;
    else
        rintangan.toDown10 = true;
}

void timer11(int) {
    glutPostRedisplay();
    glutTimerFunc(1000/30 , timer11, 0);
    if (rintangan.y_pos11 > -42 && rintangan.toDown11)
        rintangan.y_pos11 -= rintangan.delta11;
    else
        rintangan.toDown11 = false;
    if (rintangan.y_pos11 < 0  && !rintangan.toDown11)
        rintangan.y_pos11 += rintangan.delta11;
    else
        rintangan.toDown11 = true;
}

void timer12(int) {
    glutPostRedisplay();
    glutTimerFunc(1000/30 , timer12, 0);
    if (rintangan.y_pos12 > -32 && rintangan.toDown12)
        rintangan.y_pos12 -= rintangan.delta12;
    else
        rintangan.toDown12 = false;
    if (rintangan.y_pos12 < 10  && !rintangan.toDown12)
        rintangan.y_pos12 += rintangan.delta12;
    else
        rintangan.toDown12 = true;
}

void timer13(int) {
    glutPostRedisplay();
    glutTimerFunc(1000/30 , timer13, 0);
    if (rintangan.y_pos13 > -12 && rintangan.toDown13)
        rintangan.y_pos13 -= rintangan.delta13;
    else
        rintangan.toDown13 = false;
    if (rintangan.y_pos13 < 30  && !rintangan.toDown13)
        rintangan.y_pos13 += rintangan.delta13;
    else
        rintangan.toDown13 = true;
}

// Fungsi untuk mengendalikan object
void characterController(int data)
{
    // Jika menekan tombol panah kiri
    if(GetAsyncKeyState(VK_LEFT)){
        if (kotak.posisiX[0] >= 0){
            kotak.posisiX[0] -= 0.1f;
            kotak.posisiX[1] -= 0.1f;
            kotak.horizontalMove-=0.1f;
        }
    // Jika menekan tombol panah kanan
    } else if(GetAsyncKeyState(VK_RIGHT)){
        if (kotak.posisiX[1] <= 50){
            kotak.posisiX[0] += 0.1f;
            kotak.posisiX[1] += 0.1f;
            kotak.horizontalMove+=0.1f;
        }
    }
    // Jika menekan tombol panah atas
    if(GetAsyncKeyState(VK_UP)){
        if (kotak.posisiY[1] <= 50){
            kotak.posisiY[0] += 0.1f;
            kotak.posisiY[1] += 0.1f;
            kotak.verticalMove+=0.1f;
        }
    // Jika menekan tombol panah bawah
    } else if (GetAsyncKeyState(VK_DOWN)){
        if (kotak.posisiY[0] >= 0){
            kotak.posisiY[0] -= 0.1f;
            kotak.posisiY[1] -= 0.1f;
            kotak.verticalMove-=0.1f;
        }
    }

    glutPostRedisplay();
	glutTimerFunc(1,characterController,0);
}

void displayMe(void){
    glClear(GL_COLOR_BUFFER_BIT);

    sceneSatu();
    if(mulai){
        sceneDua();
        if (kotak.posisiX[0] > 45 && kotak.posisiY[0] > 45){
            sceneTiga();
        }
        //if (rintangan.y_pos <= kotak.posisiY[1]){
           //if (rintangan.y_pos <= kotak.posisiX[1] && rintangan.y_pos >= kotak.posisiX[0]){
                //sceneEmpat();
            //}
        }
    glutSwapBuffers();
}

int main(int argc, char** argv){
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE); //ATUR DISPLAY
	glutInitWindowSize(700, 700); //UKURAN DISPLAY
	glutInitWindowPosition(0,0); //POSISI DISPLAY
	glutCreateWindow("MAIN"); //MEMBUAT WINDOW
	glutDisplayFunc(displayMe); //MEMANGGIL DISPLAY
	gluOrtho2D(0, 50, 0, 50); //MENGATUR JANGKAUAN TITIK PADA DISPLAY
	glutTimerFunc(0, timer, 0);
	glutTimerFunc(0, timer2, 0);
	glutTimerFunc(0, timer3, 0);
	glutTimerFunc(0, timer4, 0);
	glutTimerFunc(0, timer5, 0);
	glutTimerFunc(0, timer6, 0);
	glutTimerFunc(0, timer7, 0);
	glutTimerFunc(0, timer8, 0);
	glutTimerFunc(0, timer9, 0);
	glutTimerFunc(0, timer10, 0);
	glutTimerFunc(0, timer11, 0);
	glutTimerFunc(0, timer12, 0);
	glutTimerFunc(0, timer13, 0);
	glutTimerFunc(1000, waktuUmum, 1);
	glutTimerFunc(1,characterController,0);
	glutMouseFunc(mouse);
	glutMainLoop(); //PENGULANGAN
	return 0;
}
