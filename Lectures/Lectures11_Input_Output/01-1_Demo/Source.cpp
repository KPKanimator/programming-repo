/*
 *
 * Date: 04/10/2023
 * Author: Kirill Korobchinsky
 * Дано прямокутний трикутник з катетами a і b. Складіть програму для обчислення гіпотенузи c.
 */
#define _USE_MATH_DEFINES

#pragma region Includes
#include <iostream>
#include <iomanip>
#include <cmath>
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
	
	cout << boolalpha << (4.0f == 4.0f) << endl;

	cout << boolalpha << (16777215.f == 16777216.f)<< endl;
	cout << boolalpha << (16777216.f == 16777217.f)<< endl;

	system("pause>nul");
	return EXIT_SUCCESS;
}

/* ------  RESULT  -------
true
false
true

*/




