#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <assert.h>

#include <windows.h>
#include <tchar.h>

typedef unsigned int IUINT32;

//==============================================
//数学库
//==============================================

typedef struct { float m[4][4]; } matrix_t;//4*4二维数组为矩阵
typedef struct { float x, y, z, w; } vector_t;//四维向量
typedef vector_t point_t;//四维点形式和向量一样

//给一个x和一个范围。在这个范围内返回x，否则返回边界。
int CMID(int x, int min, int max) { return(x < min) ? min : ((x > max) ? max : x); }

//计算插值，t为[0,1]之间数值
float interp(float x1, float x2, float t) { return x1 + (x2 - x1)*t; }