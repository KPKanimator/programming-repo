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
	float x = 0.5f, y = -1.f;

	if (x <= 2)
		if (x >= -2)
			if (y <= 1)
				if (y >= -1)
					cout << "�. � �������� ������������\n";
				else
					cout << "�. ����� ������������\n";
			else
				cout << "�. ����� ������������\n";
		else
			cout << "�. ����� ������������\n";
	else
		cout << "�. ����� ������������\n";


	if (x <= 2 and x >= -2 and y <= 1 and y >= -1)
		cout << "�. � �������� ������������\n";
	else
		cout << "�. ����� ������������\n";

	// ����� �����������
	if (abs(x) <= 2 and abs(y) <= 1)
		cout << "�. � �������� ������������\n";
	else
		cout << "�. ����� ������������\n";


	system("pause>nul");
	return EXIT_SUCCESS;
}

/* ------  RESULT  -------

*/