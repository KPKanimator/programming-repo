/*
 * Author: Kirill Korobchinsky
 *
 * �������� ��������, ��� �������� ������� ������ ����� � �������� �� 0 �� 50 �������.
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
	int count = 0; // ������ ������ �����
	const int MAX_VAL = 50;

	for (size_t k = 0; k <= MAX_VAL; k++)
	{
		if (k % 2 == 0)
			count++;
	}
	cout << "ʳ������ ������ ����� �� �������� �� 0 �� " << MAX_VAL << " : " << count << endl;

	// ������ 2

	size_t k = 0;
	for (k = 0; k <= MAX_VAL; k += 2);
	cout << "ʳ������ ������ ����� �� �������� �� 0 �� " << MAX_VAL << " : " << k / 2 << endl;

	// ������ 3

	cout << "ʳ������ ������ ����� �� �������� �� 0 �� " << MAX_VAL << " : " << MAX_VAL / 2 + 1;



	system("pause>nul");
	return EXIT_SUCCESS;
}

/* ------  RESULT  -------

*/