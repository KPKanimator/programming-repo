/*
 * Author: Kirill Korobchinsky
 * 
 * 
 */
#define _USE_MATH_DEFINES

#pragma region Includes
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <locale>
#include "windows.h"
using namespace std;
#pragma endregion

int main()
{
#pragma region Ukranian
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Ukrainian");
#pragma endregion
  
	auto a = 0.0; // ���������� � ����� ��� double, ��� ��� 0.0 - ��� double 
	cout << sizeof(a);

	double b = 0; // 0 ������������� ������������� � 0.0

	auto c = 0; // ���������� � ����� ��� int, ��������� 0 - ��� int

	auto d = 1, e = 2;	// ������������� ����������
	//auto d;
	//d = 4;
  
  system("pause>nul");
  return EXIT_SUCCESS;
}

/* ------  RESULT  -------
8

*/