/*
 * Practice 05
 * Date: 16/10/2024
 * Author: Kirill Korobchinsky
 */
#define _USE_MATH_DEFINES

#pragma region Includes
#include <iostream>
#include <iomanip>
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
	cout << "Виконав студент ...." << endl;
	double y;
	const double A = 0.5;
	// 5 * 10^-2 => 5E-2
	y = cos(A - M_PI) / (0.5E-2 * pow(A, 3));
	cout << "Task 1: y = " << y << endl;

	y =  (11 / 4.) / 1.1 + 10 / 3.;

	system("pause>nul");
	return EXIT_SUCCESS;
}

/* ------  RESULT  -------


*/

