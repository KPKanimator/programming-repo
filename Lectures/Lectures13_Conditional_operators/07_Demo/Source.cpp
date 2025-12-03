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

	int number;
	cout << "Enter the number 1 or 2: " << endl;
	cin >> number;

	// ­On the 27th line, we create a multivalued selection operator, and as a selector expression, we pass the variable - number

	switch (number)     // (number) - selector expression
	{
		case 1:         // 1-е Constant expression
		{
			cout << "One" << endl;     // Ветвь 1
			break;
		}
		case 2:         // 2-е Constant expression
		{
			cout << "Two" << endl;      // Ветвь 2
			break;
		}
	}

	system("pause>nul");
	return EXIT_SUCCESS;
}

/* ------  RESULT  -------

*/