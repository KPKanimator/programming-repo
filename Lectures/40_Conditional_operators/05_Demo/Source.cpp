/*
 * Author: Kirill Korobchinsky
 *
 * if ... else ...
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
	int a = 3, b = 2;

	if (a < b)
	{
		cout << "a < b" << endl;
	}
	else if (a > b)
	{
		cout << "a не меньше b" << endl;
	}
	else
	{
		cout << "a = b" << endl;
	}


	cout << "Эта строка выполнится всегда!" << endl;



	system("pause>nul");
	return EXIT_SUCCESS;
}

/* ------  RESULT  -------
a не меньше b
Эта строка выполнится всегда!

*/