// Заповнити масив з 10 елементів випадковими числами в інтервалі[-10..10] і виконати інверсію окремо для 1 - ої и 2 - ої половин масиву.
/*
 *
 * Date: 02/12/2024
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
	const size_t N = 10;
	double a[N] = { 0 };
	srand(static_cast<unsigned int>(time(nullptr)));
	// введення 
	size_t p = N / 2;
	for (size_t i = 0; i < N; i++)
	{
		// -10 .. 10) + [0.0...1)  
		a[i] = rand() % 20 - 10 + static_cast<double>(rand() % 10) / 10;
		cout << "\t" << a[i];
		if (i == p - 1) cout << "\t|";
	}
	cout << endl << endl;
	// розрахунок
	double temp = 0;
	for (size_t i = 0; i < p / 2; i++)
	{
		temp = a[i];
		a[i] = a[p - 1 - i];
		a[p - 1 - i] = temp;
	}
	for (size_t i = p; i < N - p/2; i++) // [p+1 ... N-1] => [5 ... 9]
	{
		temp = a[i];
		a[i] = a[N - 1 - i + p]; // 9 - 5 + 5 = 9
		a[N - 1 - i + p] = temp;
	}
	// виведення
	for (size_t i = 0; i < N; i++)
	{
		cout << "\t" << a[i];
		if (i == p - 1) cout << "\t|";
	}
	cout << endl << endl;
	system("pause>nul");
	return EXIT_SUCCESS;
}

/* ------  RESULT  -------


*/

