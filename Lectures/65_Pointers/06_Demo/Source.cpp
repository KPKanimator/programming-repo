/*
 * Author: Kirill Korobchinsky
 * Date: 22.11.2023
 *
 * 30. «найти величини й ≥ндекси максимального за модулем ≥ м≥н≥мального елемент≥в масиву ¬ = (Ц1.5, 6.9, 13, 6.2, Ц17, 8, 6.6).
 */
#define _USE_MATH_DEFINES

#pragma region Includes
#include <iostream>
#include <iomanip>
#include <stdlib.h>     /* srand, rand */
#include <locale>
#include "windows.h"
using namespace std;
#pragma endregion

typedef unsigned int index;

int main()
{
#pragma region Ukranian
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Ukrainian");
#pragma endregion
	const index N = 7;
	float b[] = { -1.5f, 6.9f, 13.f, 6.2f, -17.f, 8.f, 6.6f };
	/* initialize random seed: */
	srand(static_cast<unsigned int>(time(nullptr)));

	for (index i = 0; i < N; i++)
	{
		// https://cplusplus.com/reference/cstdlib/rand/?kw=rand
		// rand() = 0..1
		b[i] = -10 + rand() % 20 + rand() / static_cast<float>(RAND_MAX); // -10..+10
	}

	index i_max = 0, i_min = 0;
	cout << "Array b = { " << setw(4) << setprecision(2) << b[0] << "; ";
	for (index i = 1; i < N; i++)
	{
		cout << b[i] << "; ";
		if (abs(b[i_max]) < abs(b[i]))
			i_max = i;
		if (abs(b[i_min]) > abs(b[i]))
			i_min = i;
	}
	cout << "}\n\n";
	cout << "Max: " << setw(4) << setprecision(2) << b[i_max] << "\t with Index: " << i_max << endl;
	cout << "Min: " << setw(4) << setprecision(2) << b[i_min] << "\t with Index: " << i_min << endl;

	system("pause>nul");
	return EXIT_SUCCESS;
}

/* ------  RESULT  -------
Array b = { -3; 5; -9; 8; -6; 2; 1; }

Max:   -9        with Index: 2
Min:    1        with Index: 6


*/