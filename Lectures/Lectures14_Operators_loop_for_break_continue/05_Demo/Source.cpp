/*
 * Author: Kirill Korobchinsky
 *
 * Draw a geometric figure
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
	int lines = 15; // Number of lines
	int symb_in_lines = 30; // Number of characters in a string
	char symbol = '%'; // Symbol

	for (int i = 1; i <= lines; i++)
	{
		if (i == 1 || i == lines) // 1st and last line
		{
			for (int j = 1; j <= symb_in_lines; j++)
			{
				cout << symbol; // solid character
			}
		}
		else // all lines between first and last
		{
			cout << symbol; // show one character
			for (int j = 1; j <= symb_in_lines - 2; j++)
			{
				cout << ' '; // spaces in the line (symb_in_lines - 2) times
			}
			cout << symbol; // show one more character
		}
		cout << endl; // new line
	}

	cout << endl;


	system("pause>nul");
	return EXIT_SUCCESS;
}

/* ------  RESULT  -------

*/