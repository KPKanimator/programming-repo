/*
 * Author: Kirill Korobchinsky
 *
 * nested cycles
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
//  0 1 2 3 4
//0 00 01 02 03 04
//1 10 11 12 13 14
//2 20 21 22 23 24
//3
//4 40 41 42 43 44


int main()
{
#pragma region Ukranian
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Ukrainian");
#pragma endregion

	const int N = 7;

	for (int i = 0; i < N; i++)
	{
		// We display one line of 5 stars
		for (int j = 0; j < N; j++)
			cout << "* ";
		// Jump to a new line
		cout << endl;
	}


	system("pause>nul");
	return EXIT_SUCCESS;
}

/* ------  RESULT  -------

*/