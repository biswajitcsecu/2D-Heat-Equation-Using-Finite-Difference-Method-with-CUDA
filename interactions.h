
#pragma once
#ifndef INTERACTIONS_H
#define INTERACTIONS_H
#define GL_H
#define GL_GLEXT_PROTOTYPES
#define GRAPHICS_H


#include "kernel.h"
#include <GL/freeglut.h>




#define DELTA 5 // pixel increment for arrow keys
#define TITLE_STRING "Heat 2D"
#define DELTA_P 0.1f

const int   W = 800;
const int   H = 700;
int sys = 2;
float param = 0.2f;


void keyboard(unsigned char key, int x, int y) {
if (key == 27) exit(0);
if (key == '0') sys = 0;
if (key == '1') sys = 1;
if (key == '2') sys = 2;
glutPostRedisplay();
}
void handleSpecialKeypress(int key, int x, int y) {
if (key == GLUT_KEY_DOWN) param -= DELTA_P;
if (key == GLUT_KEY_UP)
param += DELTA_P;
glutPostRedisplay();
}
// no mouse interactions implemented for this app
void mouseMove(int x, int y) { return; }
void mouseDrag(int x, int y) { return; }

void printInstructions() {
	printf("flashlight interactions\n");
	printf("a: toggle mouse tracking mode\n");
	printf("arrow keys: move ref location\n");
	printf("esc: close graphics window\n");
}




#endif



























