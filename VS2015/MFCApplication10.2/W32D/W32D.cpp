// W32D.cpp : ���� DLL Ӧ�ó���ĵ���������
//

#include "stdafx.h"
#include "W32D.h"
#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;


// ���ǵ���������һ��ʾ��
W32D_API int nW32D=0;


// ���ǵ���������һ��ʾ����
W32D_API int fnW32D(void)
{
    return 42;
}
W32D_API int factorial1(int n)
{
	if (n>40) return 0;
	if (n == 1) return 1;
	else return n*factorial1(n - 1);
}

// �����ѵ�����Ĺ��캯����
// �й��ඨ�����Ϣ������� W32D.h
CW32D::CW32D()
{
    return;
}
float FAC1::convert(float deg)
{
	float a = (deg / 180)*(float)M_PI;
	return a;
}

