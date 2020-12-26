#pragma once
#include<windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

void *font = GLUT_BITMAP_HELVETICA_18;
void *font2 = GLUT_BITMAP_TIMES_ROMAN_24;
class Printer
{
public:
	void drawText(int x, int y, const char *string) {
		glRasterPos2f(x, y);
		int len = (int)strlen(string);
		for (int i = 0; i < len; i++) {
			glutBitmapCharacter(font, string[i]);
		}
	}
};
