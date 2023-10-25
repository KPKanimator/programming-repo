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
	int a = 1;
	cin >> a;
	switch (a)
	{
	case 1:
	{
		a++;
		cout << "1";
	}
	case 2:
	{
		a++;
		cout << "2";
	}
	case 3:
	{
		a++;
		if (a < 0)
			cout << "3";
	}
	}



	system("pause>nul");
	return EXIT_SUCCESS;
}

/* ------  RESULT  -------

*/