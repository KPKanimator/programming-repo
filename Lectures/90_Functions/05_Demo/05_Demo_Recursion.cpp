/*
 * Author: Kirill Korobchinsky
 *
 * Recursion
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
void recursion(int counter);

int main()
{
#pragma region Ukranian
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Ukrainian");
#pragma endregion

	recursion(3);

	system("pause>nul");
	return EXIT_SUCCESS;
}

void recursion(int counter)
{
	counter--;

	cout << "First part of recursion function " << counter << endl;

	if (counter != 0)
	{
		recursion(counter);
	}
	cout << "Second part of recursion function " << counter << endl;
}

/* ------  RESULT  -------

*/