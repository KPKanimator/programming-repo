/*
 * Author: Kirill Korobchinsky
 *
 * Combination of parameter passing
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
void add(int, int, int&);

int main()
{
#pragma region Ukranian
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Ukrainian");
#pragma endregion

	int a = 0;
	cout << "Enter first number: " << endl;
	cin >> a;

	int b = 0;
	cout << "Enter second number: " << endl;
	cin >> b;

	int sum = 0;
	add(a, b, sum);

	cout << a << " + " << b << " = " << sum << endl;

	system("pause>nul");
	return EXIT_SUCCESS;
}

void add(int x, int y, int& sum)
{
	sum = x + y;
}

/* ------  RESULT  -------

*/