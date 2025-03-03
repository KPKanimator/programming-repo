/*
 * «найти величини й ≥ндекси максимального за модулем ≥ м≥н≥мального елемент≥в масиву ¬ = (Ц1.5, 6.9, 13, 6.2, Ц17, 8, 6.6).
 * Date: //2024
 * Author: Kirill Korobchinsky
 */
#define _USE_MATH_DEFINES
#pragma region Includes
#include <iostream>
#include <iomanip>
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
	const int N = 7;
	double b[N] = { -1.5, 6.9, 13, 6.2, -17, 8, 6.6 };
	srand(static_cast<unsigned int>(time(nullptr)));
	for (size_t i = 0; i < N; i++)
	{
		b[i] = rand() % 10 + static_cast<double>(rand() % 10)/10;
		cout << setw(5) << setprecision(2) << b[i] << " ";
	}
	cout << endl;
	// ≥ндекси максимального за модулем
	int i_max = 0, i_min = 0;
	double max = abs(b[0]), min = abs(b[0]);
	for (size_t i = 0; i < N; i++) // 0 1 2 3 4 5 6
	{
		if (abs(b[i]) > max)
		{
			max = abs(b[i]);
			i_max = i;
		}
		if (abs(b[i]) < min)
		{
			min = abs(b[i]);
			i_min = i;
		}
	}
	cout << "Max = " << max << "\tIndex max = " << i_max << endl;
	cout << "Min = " << min << "\tIndex min = " << i_min << endl;

	system("pause>nul");
	return EXIT_SUCCESS;
}

/* ------  RESULT  -------


*/

