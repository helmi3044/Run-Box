#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

class Rintangan{
public:

    float y_pos = 0;
    float delta = 0.5;
    bool toDown = true;
    float y_pos2 = 0;
    float delta2 = 1;
    bool toDown2 = true;
    float y_pos3 = 0;
    float delta3 = 1.5;
    bool toDown3 = true;
    float y_pos4 = 0;
    float delta4 = 0.5;
    bool toDown4 = true;
    float y_pos5 = 0;
    float delta5 = 1;
    bool toDown5 = true;
    float y_pos6 = 0;
    float delta6 = 1.5;
    bool toDown6 = true;
    float y_pos7 = 0;
    float delta7 = 0.5;
    bool toDown7 = true;
    float y_pos8 = 0;
    float delta8 = 1;
    bool toDown8 = true;
    float y_pos9 = 0;
    float delta9 = 1.5;
    bool toDown9 = true;
    float y_pos10 = 0;
    float delta10 = 0.5;
    bool toDown10 = true;
    float y_pos11 = 0;
    float delta11 = 1;
    bool toDown11 = true;
    float y_pos12 = 0;
    float delta12 = 1.5;
    bool toDown12 = true;
    float y_pos13 = 0;
    float delta13 = 0.5;
    bool toDown13 = true;

//    float colliderRintangan1[4] = {0,4,42,8}
  //  float colliderRintangan2[4] = {4,4,32,8}
    //float colliderRintangan3[4] = {8,4,12,8}
    //float colliderRintangan4[4] = {12,4,17,8}
    //float colliderRintangan5[4] = {16,4,2,8}
    //float colliderRintangan6[4] = {20,4,42,8}
    //float colliderRintangan7[4] = {24,2,32,8}
    //float colliderRintangan8[4] = {26,4,12,8}
    //float colliderRintangan9[4] = {30,4,17,8}
    //float colliderRintangan10[4] = {34,4,2,8}
    //float colliderRintangan11[4] = {38,4,42,8}
    //float colliderRintangan12[4] = {42,4,32,8}
    //float colliderRintangan13[4] = {46,4,12,8}

    void Rintangan1(){
        //Badan Misil
        glBegin(GL_POLYGON);
        glColor3ub(220, 220, 220);
        glVertex2f(1, 44+ y_pos);
        glVertex2f(3, 44+ y_pos);
        glVertex2f(3, 48+ y_pos);
        glVertex2f(1, 48+ y_pos);
        glEnd();

        //Sayap Kiri Misil
        glBegin(GL_POLYGON);
        glColor3ub(105, 105, 105);
        glVertex2f(0, 47+ y_pos);
        glVertex2f(1, 48+ y_pos);
        glVertex2f(1, 44+ y_pos);
        glVertex2f(0, 45+ y_pos);
        glEnd();

        //Sayap Kanan Misil
        glBegin(GL_POLYGON);
        glColor3ub(105, 105, 105);
        glVertex2f(4, 47+ y_pos);
        glVertex2f(3, 48+ y_pos);
        glVertex2f(3, 44+ y_pos);
        glVertex2f(4, 45+ y_pos);
        glEnd();

        //Moncong Misil
        glBegin(GL_POLYGON);
        glColor3ub(47, 79, 79);
        glVertex2f(1, 44+ y_pos);
        glVertex2f(1, 42.8+ y_pos);
        glVertex2f(1.5, 42.3+ y_pos);
        glVertex2f(2, 42+ y_pos);
        glVertex2f(2.5, 42.3+ y_pos);
        glVertex2f(3, 42.8+ y_pos);
        glVertex2f(3, 44+ y_pos);
        glEnd();

        //Moncong Misil
        glBegin(GL_POLYGON);
        glColor3ub(47, 79, 79);
        glVertex2f(1, 48+ y_pos);
        glVertex2f(1, 49.2+ y_pos);
        glVertex2f(1.5, 49.7+ y_pos);
        glVertex2f(2, 50+ y_pos);
        glVertex2f(2.5, 49.7+ y_pos);
        glVertex2f(3, 49.2+ y_pos);
        glVertex2f(3, 48+ y_pos);
        glEnd();
    }

    void Rintangan2(){
        //Badan Misil
        glBegin(GL_POLYGON);
        glColor3ub(220, 220, 220);
        glVertex2f(5, 34+ y_pos2);
        glVertex2f(7, 34+ y_pos2);
        glVertex2f(7, 38+ y_pos2);
        glVertex2f(5, 38+ y_pos2);
        glEnd();

        //Sayap Kiri Misil
        glBegin(GL_POLYGON);
        glColor3ub(105, 105, 105);
        glVertex2f(4, 37+ y_pos2);
        glVertex2f(5, 38+ y_pos2);
        glVertex2f(5, 34+ y_pos2);
        glVertex2f(4, 35+ y_pos2);
        glEnd();

        //Sayap Kanan Misil
        glBegin(GL_POLYGON);
        glColor3ub(105, 105, 105);
        glVertex2f(8, 37+ y_pos2);
        glVertex2f(7, 38+ y_pos2);
        glVertex2f(7, 34+ y_pos2);
        glVertex2f(8, 35+ y_pos2);
        glEnd();

        //Moncong Misil
        glBegin(GL_POLYGON);
        glColor3ub(47, 79, 79);
        glVertex2f(5, 34+ y_pos2);
        glVertex2f(5, 32.8+ y_pos2);
        glVertex2f(5.5, 32.3+ y_pos2);
        glVertex2f(6, 32+ y_pos2);
        glVertex2f(6.5, 32.3+ y_pos2);
        glVertex2f(7, 32.8+ y_pos2);
        glVertex2f(7, 34+ y_pos2);
        glEnd();

        //Moncong Misil
        glBegin(GL_POLYGON);
        glColor3ub(47, 79, 79);
        glVertex2f(5, 38+ y_pos2);
        glVertex2f(5, 39.2+ y_pos2);
        glVertex2f(5.5, 39.7+ y_pos2);
        glVertex2f(6, 40+ y_pos2);
        glVertex2f(6.5, 39.7+ y_pos2);
        glVertex2f(7, 39.2+ y_pos2);
        glVertex2f(7, 38+ y_pos2);
        glEnd();
    }

    void Rintangan3(){
        //Badan Misil
        glBegin(GL_POLYGON);
        glColor3ub(220, 220, 220);
        glVertex2f(9, 14+ y_pos3);
        glVertex2f(11, 14+ y_pos3);
        glVertex2f(11, 18+ y_pos3);
        glVertex2f(9, 18+ y_pos3);
        glEnd();

        //Sayap Kiri Misil
        glBegin(GL_POLYGON);
        glColor3ub(105, 105, 105);
        glVertex2f(8, 17+ y_pos3);
        glVertex2f(9, 18+ y_pos3);
        glVertex2f(9, 14+ y_pos3);
        glVertex2f(8, 15+ y_pos3);
        glEnd();

        //Sayap Kanan Misil
        glBegin(GL_POLYGON);
        glColor3ub(105, 105, 105);
        glVertex2f(12, 17+ y_pos3);
        glVertex2f(11, 18+ y_pos3);
        glVertex2f(11, 14+ y_pos3);
        glVertex2f(12, 15+ y_pos3);
        glEnd();

        //Moncong Misil
        glBegin(GL_POLYGON);
        glColor3ub(47, 79, 79);
        glVertex2f(9, 14+ y_pos3);
        glVertex2f(9, 12.8+ y_pos3);
        glVertex2f(9.5, 12.3+ y_pos3);
        glVertex2f(10, 12+ y_pos3);
        glVertex2f(10.5, 12.3+ y_pos3);
        glVertex2f(11, 12.8+ y_pos3);
        glVertex2f(11, 14+ y_pos3);
        glEnd();

        //Moncong Misil
        glBegin(GL_POLYGON);
        glColor3ub(47, 79, 79);
        glVertex2f(9, 18+ y_pos3);
        glVertex2f(9, 19.2+ y_pos3);
        glVertex2f(9.5, 19.7+ y_pos3);
        glVertex2f(10, 20+ y_pos3);
        glVertex2f(10.5, 19.7+ y_pos3);
        glVertex2f(11, 19.2+ y_pos3);
        glVertex2f(11, 18+ y_pos3);
        glEnd();
    }

    void Rintangan4(){
        //Badan Misil
        glBegin(GL_POLYGON);
        glColor3ub(220, 220, 220);
        glVertex2f(13, 19+ y_pos4);
        glVertex2f(15, 19+ y_pos4);
        glVertex2f(15, 23+ y_pos4);
        glVertex2f(13, 23+ y_pos4);
        glEnd();

        //Sayap Kiri Misil
        glBegin(GL_POLYGON);
        glColor3ub(105, 105, 105);
        glVertex2f(12, 22+ y_pos4);
        glVertex2f(13, 23+ y_pos4);
        glVertex2f(13, 19+ y_pos4);
        glVertex2f(12, 20+ y_pos4);
        glEnd();

        //Sayap Kanan Misil
        glBegin(GL_POLYGON);
        glColor3ub(105, 105, 105);
        glVertex2f(16, 22+ y_pos4);
        glVertex2f(15, 23+ y_pos4);
        glVertex2f(15, 19+ y_pos4);
        glVertex2f(16, 20+ y_pos4);
        glEnd();

        //Moncong Misil
        glBegin(GL_POLYGON);
        glColor3ub(47, 79, 79);
        glVertex2f(13, 19+ y_pos4);
        glVertex2f(13, 17.8+ y_pos4);
        glVertex2f(13.5, 17.3+ y_pos4);
        glVertex2f(14, 17+ y_pos4);
        glVertex2f(14.5, 17.3+ y_pos4);
        glVertex2f(15, 17.8+ y_pos4);
        glVertex2f(15, 19+ y_pos4);
        glEnd();

        //Moncong Misil
        glBegin(GL_POLYGON);
        glColor3ub(47, 79, 79);
        glVertex2f(13, 23+ y_pos4);
        glVertex2f(13, 24.2+ y_pos4);
        glVertex2f(13.5, 24.7+ y_pos4);
        glVertex2f(14, 25+ y_pos4);
        glVertex2f(14.5, 24.7+ y_pos4);
        glVertex2f(15, 24.2+ y_pos4);
        glVertex2f(15, 23+ y_pos4);
        glEnd();
    }

    void Rintangan5(){
        //Badan Misil
        glBegin(GL_POLYGON);
        glColor3ub(220, 220, 220);
        glVertex2f(17, 4+ y_pos5);
        glVertex2f(19, 4+ y_pos5);
        glVertex2f(19, 8+ y_pos5);
        glVertex2f(17, 8+ y_pos5);
        glEnd();

        //Sayap Kiri Misil
        glBegin(GL_POLYGON);
        glColor3ub(105, 105, 105);
        glVertex2f(16, 7+ y_pos5);
        glVertex2f(17, 8+ y_pos5);
        glVertex2f(17, 4+ y_pos5);
        glVertex2f(16, 5+ y_pos5);
        glEnd();

        //Sayap Kanan Misil
        glBegin(GL_POLYGON);
        glColor3ub(105, 105, 105);
        glVertex2f(20, 7+ y_pos5);
        glVertex2f(19, 8+ y_pos5);
        glVertex2f(19, 4+ y_pos5);
        glVertex2f(20, 5+ y_pos5);
        glEnd();

        //Moncong Misil
        glBegin(GL_POLYGON);
        glColor3ub(47, 79, 79);
        glVertex2f(17, 4+ y_pos5);
        glVertex2f(17, 2.8+ y_pos5);
        glVertex2f(17.5, 2.3+ y_pos5);
        glVertex2f(18, 2+ y_pos5);
        glVertex2f(18.5, 2.3+ y_pos5);
        glVertex2f(19, 2.8+ y_pos5);
        glVertex2f(19, 4+ y_pos5);
        glEnd();

        //Moncong Misil
        glBegin(GL_POLYGON);
        glColor3ub(47, 79, 79);
        glVertex2f(17, 8+ y_pos5);
        glVertex2f(17, 9.2+ y_pos5);
        glVertex2f(17.5, 9.7+ y_pos5);
        glVertex2f(18, 10+ y_pos5);
        glVertex2f(18.5, 9.7+ y_pos5);
        glVertex2f(19, 9.2+ y_pos5);
        glVertex2f(19, 8+ y_pos5);
        glEnd();
    }

    void Rintangan6(){
        //Badan Misil
        glBegin(GL_POLYGON);
        glColor3ub(220, 220, 220);
        glVertex2f(21, 44+ y_pos6);
        glVertex2f(23, 44+ y_pos6);
        glVertex2f(23, 48+ y_pos6);
        glVertex2f(21, 48+ y_pos6);
        glEnd();

        //Sayap Kiri Misil
        glBegin(GL_POLYGON);
        glColor3ub(105, 105, 105);
        glVertex2f(20, 47+ y_pos6);
        glVertex2f(21, 48+ y_pos6);
        glVertex2f(21, 44+ y_pos6);
        glVertex2f(20, 45+ y_pos6);
        glEnd();

        //Sayap Kanan Misil
        glBegin(GL_POLYGON);
        glColor3ub(105, 105, 105);
        glVertex2f(24, 47+ y_pos6);
        glVertex2f(23, 48+ y_pos6);
        glVertex2f(23, 44+ y_pos6);
        glVertex2f(24, 45+ y_pos6);
        glEnd();

        //Moncong Misil
        glBegin(GL_POLYGON);
        glColor3ub(47, 79, 79);
        glVertex2f(21, 44+ y_pos6);
        glVertex2f(21, 42.8+ y_pos6);
        glVertex2f(21.5, 42.3+ y_pos6);
        glVertex2f(22, 42+ y_pos6);
        glVertex2f(22.5, 42.3+ y_pos6);
        glVertex2f(23, 42.8+ y_pos6);
        glVertex2f(23, 44+ y_pos6);
        glEnd();

        //Moncong Misil
        glBegin(GL_POLYGON);
        glColor3ub(47, 79, 79);
        glVertex2f(21, 48+ y_pos6);
        glVertex2f(21, 49.2+ y_pos6);
        glVertex2f(21.5, 49.7+ y_pos6);
        glVertex2f(22, 50+ y_pos6);
        glVertex2f(22.5, 49.7+ y_pos6);
        glVertex2f(23, 49.2+ y_pos6);
        glVertex2f(23, 48+ y_pos6);
        glEnd();
    }

    void Rintangan7(){
        //Badan Misil
        glBegin(GL_POLYGON);
        glColor3ub(220, 220, 220);
        glVertex2f(24, 34+ y_pos7);
        glVertex2f(26, 34+ y_pos7);
        glVertex2f(26, 38+ y_pos7);
        glVertex2f(24, 38+ y_pos7);
        glEnd();

        //Moncong Misil
        glBegin(GL_POLYGON);
        glColor3ub(47, 79, 79);
        glVertex2f(24, 34+ y_pos7);
        glVertex2f(24, 32.8+ y_pos7);
        glVertex2f(24.5, 32.3+ y_pos7);
        glVertex2f(25, 32+ y_pos7);
        glVertex2f(25.5, 32.3+ y_pos7);
        glVertex2f(26, 32.8+ y_pos7);
        glVertex2f(26, 34+ y_pos7);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3ub(47, 79, 79);
        glVertex2f(24, 38+ y_pos7);
        glVertex2f(24, 39.2+ y_pos7);
        glVertex2f(24.5, 39.7+ y_pos7);
        glVertex2f(25, 40+ y_pos7);
        glVertex2f(25.5, 39.7+ y_pos7);
        glVertex2f(26, 39.2+ y_pos7);
        glVertex2f(26, 38+ y_pos7);
        glEnd();
    }

    void Rintangan8(){
        //Badan Misil
        glBegin(GL_POLYGON);
        glColor3ub(220, 220, 220);
        glVertex2f(27, 14+ y_pos8);
        glVertex2f(29, 14+ y_pos8);
        glVertex2f(29, 18+ y_pos8);
        glVertex2f(27, 18+ y_pos8);
        glEnd();

        //Sayap Kiri Misil
        glBegin(GL_POLYGON);
        glColor3ub(105, 105, 105);
        glVertex2f(26, 17+ y_pos8);
        glVertex2f(27, 18+ y_pos8);
        glVertex2f(27, 14+ y_pos8);
        glVertex2f(26, 15+ y_pos8);
        glEnd();

        //Sayap Kanan Misil
        glBegin(GL_POLYGON);
        glColor3ub(105, 105, 105);
        glVertex2f(30, 17+ y_pos8);
        glVertex2f(29, 18+ y_pos8);
        glVertex2f(29, 14+ y_pos8);
        glVertex2f(30, 15+ y_pos8);
        glEnd();

        //Moncong Misil
        glBegin(GL_POLYGON);
        glColor3ub(47, 79, 79);
        glVertex2f(27, 14+ y_pos8);
        glVertex2f(27, 12.8+ y_pos8);
        glVertex2f(27.5, 12.3+ y_pos8);
        glVertex2f(28, 12+ y_pos8);
        glVertex2f(28.5, 12.3+ y_pos8);
        glVertex2f(29, 12.8+ y_pos8);
        glVertex2f(29, 14+ y_pos8);
        glEnd();

        //Moncong Misil
        glBegin(GL_POLYGON);
        glColor3ub(47, 79, 79);
        glVertex2f(27, 18+ y_pos8);
        glVertex2f(27, 19.2+ y_pos8);
        glVertex2f(27.5, 19.7+ y_pos8);
        glVertex2f(28, 20+ y_pos8);
        glVertex2f(28.5, 19.7+ y_pos8);
        glVertex2f(29, 19.2+ y_pos8);
        glVertex2f(29, 18+ y_pos8);
        glEnd();
    }

    void Rintangan9(){
        //Badan Misil
        glBegin(GL_POLYGON);
        glColor3ub(220, 220, 220);
        glVertex2f(31, 19+ y_pos9);
        glVertex2f(33, 19+ y_pos9);
        glVertex2f(33, 23+ y_pos9);
        glVertex2f(31, 23+ y_pos9);
        glEnd();

        //Sayap Kiri Misil
        glBegin(GL_POLYGON);
        glColor3ub(105, 105, 105);
        glVertex2f(30, 22+ y_pos9);
        glVertex2f(31, 23+ y_pos9);
        glVertex2f(31, 19+ y_pos9);
        glVertex2f(30, 20+ y_pos9);
        glEnd();

        //Sayap Kanan Misil
        glBegin(GL_POLYGON);
        glColor3ub(105, 105, 105);
        glVertex2f(34, 22+ y_pos9);
        glVertex2f(33, 23+ y_pos9);
        glVertex2f(33, 19+ y_pos9);
        glVertex2f(34, 20+ y_pos9);
        glEnd();

        //Moncong Misil
        glBegin(GL_POLYGON);
        glColor3ub(47, 79, 79);
        glVertex2f(31, 19+ y_pos9);
        glVertex2f(31, 17.8+ y_pos9);
        glVertex2f(31.5, 17.3+ y_pos9);
        glVertex2f(32, 17+ y_pos9);
        glVertex2f(32.5, 17.3+ y_pos9);
        glVertex2f(33, 17.8+ y_pos9);
        glVertex2f(33, 19+ y_pos9);
        glEnd();

        //Moncong Misil
        glBegin(GL_POLYGON);
        glColor3ub(47, 79, 79);
        glVertex2f(31, 23+ y_pos9);
        glVertex2f(31, 24.2+ y_pos9);
        glVertex2f(31.5, 24.7+ y_pos9);
        glVertex2f(32, 25+ y_pos9);
        glVertex2f(32.5, 24.7+ y_pos9);
        glVertex2f(33, 24.2+ y_pos9);
        glVertex2f(33, 23+ y_pos9);
        glEnd();
    }

    void Rintangan10(){
        //Badan Misil
        glBegin(GL_POLYGON);
        glColor3ub(220, 220, 220);
        glVertex2f(35, 4+ y_pos10);
        glVertex2f(37, 4+ y_pos10);
        glVertex2f(37, 8+ y_pos10);
        glVertex2f(35, 8+ y_pos10);
        glEnd();

        //Sayap Kiri Misil
        glBegin(GL_POLYGON);
        glColor3ub(105, 105, 105);
        glVertex2f(34, 7+ y_pos10);
        glVertex2f(35, 8+ y_pos10);
        glVertex2f(35, 4+ y_pos10);
        glVertex2f(34, 5+ y_pos10);
        glEnd();

        //Sayap Kanan Misil
        glBegin(GL_POLYGON);
        glColor3ub(105, 105, 105);
        glVertex2f(38, 7+ y_pos10);
        glVertex2f(37, 8+ y_pos10);
        glVertex2f(37, 4+ y_pos10);
        glVertex2f(38, 5+ y_pos10);
        glEnd();

        //Moncong Misil
        glBegin(GL_POLYGON);
        glColor3ub(47, 79, 79);
        glVertex2f(35, 4+ y_pos10);
        glVertex2f(35, 2.8+ y_pos10);
        glVertex2f(35.5, 2.3+ y_pos10);
        glVertex2f(36, 2+ y_pos10);
        glVertex2f(36.5, 2.3+ y_pos10);
        glVertex2f(37, 2.8+ y_pos10);
        glVertex2f(37, 4+ y_pos10);
        glEnd();

        //Moncong Misil
        glBegin(GL_POLYGON);
        glColor3ub(47, 79, 79);
        glVertex2f(35, 8+ y_pos10);
        glVertex2f(35, 9.2+ y_pos10);
        glVertex2f(35.5, 9.7+ y_pos10);
        glVertex2f(36, 10+ y_pos10);
        glVertex2f(36.5, 9.7+ y_pos10);
        glVertex2f(37, 9.2+ y_pos10);
        glVertex2f(37, 8+ y_pos10);
        glEnd();
    }

    void Rintangan11(){
        //Badan Misil
        glBegin(GL_POLYGON);
        glColor3ub(220, 220, 220);
        glVertex2f(39, 44+ y_pos11);
        glVertex2f(41, 44+ y_pos11);
        glVertex2f(41, 48+ y_pos11);
        glVertex2f(39, 48+ y_pos11);
        glEnd();

        //Sayap Kiri Misil
        glBegin(GL_POLYGON);
        glColor3ub(105, 105, 105);
        glVertex2f(38, 47+ y_pos11);
        glVertex2f(39, 48+ y_pos11);
        glVertex2f(39, 44+ y_pos11);
        glVertex2f(38, 45+ y_pos11);
        glEnd();

        //Sayap Kanan Misil
        glBegin(GL_POLYGON);
        glColor3ub(105, 105, 105);
        glVertex2f(42, 47+ y_pos11);
        glVertex2f(41, 48+ y_pos11);
        glVertex2f(41, 44+ y_pos11);
        glVertex2f(42, 45+ y_pos11);
        glEnd();

        //Moncong Misil
        glBegin(GL_POLYGON);
        glColor3ub(47, 79, 79);
        glVertex2f(39, 44+ y_pos11);
        glVertex2f(39, 42.8+ y_pos11);
        glVertex2f(39.5, 42.3+ y_pos11);
        glVertex2f(40, 42+ y_pos11);
        glVertex2f(40.5, 42.3+ y_pos11);
        glVertex2f(41, 42.8+ y_pos11);
        glVertex2f(41, 44+ y_pos11);
        glEnd();

        //Moncong Misil
        glBegin(GL_POLYGON);
        glColor3ub(47, 79, 79);
        glVertex2f(39, 48+ y_pos11);
        glVertex2f(39, 49.2+ y_pos11);
        glVertex2f(39.5, 49.7+ y_pos11);
        glVertex2f(40, 50+ y_pos11);
        glVertex2f(40.5, 49.7+ y_pos11);
        glVertex2f(41, 49.2+ y_pos11);
        glVertex2f(41, 48+ y_pos11);
        glEnd();
    }

    void Rintangan12(){
        //Badan Misil
        glBegin(GL_POLYGON);
        glColor3ub(220, 220, 220);
        glVertex2f(43, 34+ y_pos12);
        glVertex2f(45, 34+ y_pos12);
        glVertex2f(45, 38+ y_pos12);
        glVertex2f(43, 38+ y_pos12);
        glEnd();

        //Sayap Kiri Misil
        glBegin(GL_POLYGON);
        glColor3ub(105, 105, 105);
        glVertex2f(42, 37+ y_pos12);
        glVertex2f(43, 38+ y_pos12);
        glVertex2f(43, 34+ y_pos12);
        glVertex2f(42, 35+ y_pos12);
        glEnd();

        //Sayap Kanan Misil
        glBegin(GL_POLYGON);
        glColor3ub(105, 105, 105);
        glVertex2f(46, 37+ y_pos12);
        glVertex2f(45, 38+ y_pos12);
        glVertex2f(45, 34+ y_pos12);
        glVertex2f(46, 35+ y_pos12);
        glEnd();

        //Moncong Misil
        glBegin(GL_POLYGON);
        glColor3ub(47, 79, 79);
        glVertex2f(43, 34+ y_pos12);
        glVertex2f(43, 32.8+ y_pos12);
        glVertex2f(43.5, 32.3+ y_pos12);
        glVertex2f(44, 32+ y_pos12);
        glVertex2f(44.5, 32.3+ y_pos12);
        glVertex2f(45, 32.8+ y_pos12);
        glVertex2f(45, 34+ y_pos12);
        glEnd();

        //Moncong Misil
        glBegin(GL_POLYGON);
        glColor3ub(47, 79, 79);
        glVertex2f(43, 38+ y_pos12);
        glVertex2f(43, 39.2+ y_pos12);
        glVertex2f(43.5, 39.7+ y_pos12);
        glVertex2f(44, 40+ y_pos12);
        glVertex2f(44.5, 39.7+ y_pos12);
        glVertex2f(45, 39.2+ y_pos12);
        glVertex2f(45, 38+ y_pos12);
        glEnd();
    }

    void Rintangan13(){
        //Badan Misil
        glBegin(GL_POLYGON);
        glColor3ub(220, 220, 220);
        glVertex2f(47, 14+ y_pos13);
        glVertex2f(49, 14+ y_pos13);
        glVertex2f(49, 18+ y_pos13);
        glVertex2f(47, 18+ y_pos13);
        glEnd();

        //Sayap Kiri Misil
        glBegin(GL_POLYGON);
        glColor3ub(105, 105, 105);
        glVertex2f(46, 17+ y_pos13);
        glVertex2f(47, 18+ y_pos13);
        glVertex2f(47, 14+ y_pos13);
        glVertex2f(46, 15+ y_pos13);
        glEnd();

        //Sayap Kanan Misil
        glBegin(GL_POLYGON);
        glColor3ub(105, 105, 105);
        glVertex2f(50, 17+ y_pos13);
        glVertex2f(49, 18+ y_pos13);
        glVertex2f(49, 14+ y_pos13);
        glVertex2f(50, 15+ y_pos13);
        glEnd();

        //Moncong Misil
        glBegin(GL_POLYGON);
        glColor3ub(47, 79, 79);
        glVertex2f(47, 14+ y_pos13);
        glVertex2f(47, 12.8+ y_pos13);
        glVertex2f(47.5, 12.3+ y_pos13);
        glVertex2f(48, 12+ y_pos13);
        glVertex2f(48.5, 12.3+ y_pos13);
        glVertex2f(49, 12.8+ y_pos13);
        glVertex2f(49, 14+ y_pos13);
        glEnd();

        //Moncong Misil
        glBegin(GL_POLYGON);
        glColor3ub(47, 79, 79);
        glVertex2f(47, 18+ y_pos13);
        glVertex2f(47, 19.2+ y_pos13);
        glVertex2f(47.5, 19.7+ y_pos13);
        glVertex2f(48, 20+ y_pos13);
        glVertex2f(48.5, 19.7+ y_pos13);
        glVertex2f(49, 19.2+ y_pos13);
        glVertex2f(49, 18+ y_pos13);
        glEnd();
    }
//    void colliderRin1(){
  //      glPushMatrix();
    //    glBegin(GL_POLYGON);
      //  glColor3f(0.063, 0.91, 0.176);
        //glVertex2f(colliderRintangan1[0], colliderRintangan1[0]);
//        glVertex2f(posisiX[1], posisiY[0]);
  //      glVertex2f(posisiX[1], posisiY[1]);
    //    glVertex2f(posisiX[0], posisiY[1]);
      //  glEnd();
        //glPopMatrix();
        //}
};
