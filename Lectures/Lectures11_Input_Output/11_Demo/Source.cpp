/*
 * Author: Kirill Korobchinsky
 *
 * Separators
 */
#define _USE_MATH_DEFINES

#pragma region Includes
#include <iostream>
#include <string>
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

	int a, c, b;
	double x, y, z;

	cin >> a >> b >> c >> x >> y >> z;
	cout << "a = " << a << " b = " << b << " c = " << c << " x = " << x << " y = " << y << " z = " << z;

	string str = "I love programming!\n";
	getline(cin, str);
	cout << str;

	system("pause>nul");
	return EXIT_SUCCESS;
}

/* ------  RESULT  -------

*/