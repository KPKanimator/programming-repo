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

	int n = 123;
	int count = 0;
	do
	{
		cout << n << " " << count << endl;
		n /= 10;
		count++;
	} while (n != 0);
	
	cout << count << endl;

	system("pause>nul");
	return EXIT_SUCCESS;
}

/* ------  RESULT  -------

*/