/*
 *
 * Date: 25/09/2023
 * Author: Kirill Korobchinsky
 */
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
	char _char[] = "char\n";
	int _int = 20;
	int negative_int = -10;
	double _double = 123.54;
	float zero_float = 0.0f;

	system("pause>nul");
	return EXIT_SUCCESS;
}

/* ------  RESULT  -------



*/





