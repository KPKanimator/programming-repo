/*
 * Author: Kirill Korobchinsky
 *
 * Напишіть програму, яка підраховує кількість парних чисел в діапазоні від 0 до 50 включно.
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
	int count = 0; // кільсть парних чисел
	const int MAX_VAL = 50;

	for (size_t k = 0; k <= MAX_VAL; k++)
	{
		if (k % 2 == 0)
			count++;
	}
	cout << "Кількість парних чисел на інтервалі від 0 до " << MAX_VAL << " : " << count << endl;

	// Варіант 2

	size_t k = 0;
	for (k = 0; k <= MAX_VAL; k += 2);
	cout << "Кількість парних чисел на інтервалі від 0 до " << MAX_VAL << " : " << k / 2 << endl;

	// Варіант 3

	cout << "Кількість парних чисел на інтервалі від 0 до " << MAX_VAL << " : " << MAX_VAL / 2 + 1;



	system("pause>nul");
	return EXIT_SUCCESS;
}

/* ------  RESULT  -------

*/