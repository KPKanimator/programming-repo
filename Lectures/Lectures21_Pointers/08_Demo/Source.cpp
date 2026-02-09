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
	const int N = 100;
	int a[N] = { 0 };
	int b[N] = { 0 };
	int s = 0;

	srand(static_cast<unsigned int>(time(nullptr)));
	for (int i = 0; i < N; i++)
	{
		a[i] = rand() % 50 + 1; // -25; // -25...25
		cout << "a[" << i << "]=" << a[i] << "\t";
		s += a[i];
	}
	int i_min = 0, k = 0;

	for (int i = 1; i < N; i++)
	{
		if (a[i_min] > a[i])
		{
			i_min = i;
			b[k++] = a[i];
		}
	}
	for (int i = 0; i < k; i++)
	{
		cout << b[i] << "\t";
	}

	float sr = s / (float)N;
	cout << "\nsr =" << sr << endl;
	cout << "\nmin =" << a[i_min] << endl;

	system("pause>nul");
	return EXIT_SUCCESS;
}

/* ------  RESULT  -------

*/