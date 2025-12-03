/*
 * Author: Kirill Korobchinsky
 *
 * do - while loop
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

	int count = 5;

	do
	{
		cout << "Count " << count << endl;
		count--;
	} while (count > 0);

	cout << "This line is always executed" << endl;



	system("pause>nul");
	return EXIT_SUCCESS;
}

/* ------  RESULT  -------

*/