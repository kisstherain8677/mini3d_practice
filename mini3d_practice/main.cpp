#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <assert.h>

#include <windows.h>
#include <tchar.h>

typedef unsigned int IUINT32;

//==============================================
//��ѧ��
//==============================================

typedef struct { float m[4][4]; } matrix_t;//4*4��ά����Ϊ����
typedef struct { float x, y, z, w; } vector_t;//��ά����
typedef vector_t point_t;//��ά����ʽ������һ��

//��һ��x��һ����Χ���������Χ�ڷ���x�����򷵻ر߽硣
int CMID(int x, int min, int max) { return(x < min) ? min : ((x > max) ? max : x); }

//�����ֵ��tΪ[0,1]֮����ֵ
float interp(float x1, float x2, float t) { return x1 + (x2 - x1)*t; }