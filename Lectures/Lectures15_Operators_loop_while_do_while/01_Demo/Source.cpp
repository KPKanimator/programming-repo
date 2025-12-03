/*
 * Author: Kirill Korobchinsky
 *
 * while loop
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

		break;	// This instruction will stop the loop, and transfer control to the instruction located after the operator brackets of the loop

		cout << "This line is never executed";
	}

	cout << "This line is always executed";

	system("pause>nul");
	return EXIT_SUCCESS;
}

/* ------  RESULT  -------

*/