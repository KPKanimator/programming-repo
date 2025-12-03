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

	unsigned int number1 = 0;
	unsigned int number2 = 0;
	unsigned int number = 0;
	unsigned int c1 = 0;
	unsigned int c2 = 0;
	cout << "Input number = ";
	cin >> number1;
	number2 = number1;
	number = number1;
	const int NUM_COUNT = 4;
	int count = 0;
	bool flag = true;
	// 1123 1234
	for (int i = 0; i < NUM_COUNT; i++)
	{
		c1 = number1 % 10;
		number1 /= 10;
		cout << c1 << " ";
		// 1234
		while (number2 != 0 and flag)
		{
			c2 = number2 % 10;
			number2 /= 10;
			if (c1 == c2)
			{
				count++;
				if (count == 2)
					flag = false;
			}
		}
		if (count == 2)
			break;
		count = 0;
		number2 = number;
	}

	if (!flag)
		cout << endl << "връ" << endl;
	else
		cout << endl << "ЭГ" << endl;

	system("pause>nul");
	return EXIT_SUCCESS;
}

/* ------  RESULT  -------

*/