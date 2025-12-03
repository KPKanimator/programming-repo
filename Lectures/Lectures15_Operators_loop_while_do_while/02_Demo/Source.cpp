/*
 * Author: Kirill Korobchinsky
 *
 * while loop, continue
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


	while (count > 0)
	{
		cout << "Count = " << count << endl;
		count--;
		// This instruction stops the execution of the current iteration, and transfers control to the counter change section
		continue;

		cout << "This line is never executed";
	}

	cout << "This line is always executed";


	system("pause>nul");
	return EXIT_SUCCESS;
}

/* ------  RESULT  -------

*/