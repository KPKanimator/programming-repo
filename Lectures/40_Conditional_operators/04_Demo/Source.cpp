/*
 * Author: Kirill Korobchinsky
 * 
 * Comparation, if
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

	short a = 1, b = 2;
	bool result;

	cout.setf(ios::boolalpha);
	// > - ������
	result = a > b;
	cout << "a > b = " << result << endl;
	// >= - ������ ��� �����
	result = a >= b;
	cout << "a >= b = " << result << endl;
	// < - ������
	result = a < b;
	cout << "a < b = " << result << endl;
	// <= - ������ ��� �����
	result = a <= b;
	cout << "a <= b = " << result << endl;
	// == - �������� ���������
	result = a == b;
	cout << "a == b = " << result << endl;
	// != - �������� �����������
	result = a != b;
	cout << "a != b = " << result << endl;
  

	int ia = 3, ib = 2;

	if (ia < ib)
	{
		cout << "a < b" << endl;
	}

	cout << "��� ������ ���������� ������!";
  
  system("pause>nul");
  return EXIT_SUCCESS;
}

/* ------  RESULT  -------

*/