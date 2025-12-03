/*
 * Author: Kirill Korobchinsky
 *
 * goto label
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
	cout << "Start program!" << endl;

	goto label;

	cout << "Some instruction..." << endl;

label:
	cout << "End program!" << endl;


	system("pause>nul");
	return EXIT_SUCCESS;
}

/* ------  RESULT  -------

*/