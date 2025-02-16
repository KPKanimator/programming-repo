/*
 *
 * Date: 29/11/2024
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
	const int N = 50;
	double a[N] = { 0 };
	srand(static_cast<unsigned int>(time(nullptr)));
	// введення 
	for (size_t i = 0; i < N; i++)
	{
		//cout << "\ta[ " << i << " ]=";
		//cin >> a[i];
		//a[i] = rand() % 20; // 0 .. 20)
		
		// -10 .. 10) + [0.0...1)  
		//a[i] = rand() % 20 - 10 + static_cast<double>(rand() % 10) / 10;
		a[i] = rand();
	}
	cout << endl;
	// розрахунок
	double sum = 0;
	for (size_t i = 0; i < N; i++)
	{
		// sum = sum + a[i];
		sum += a[i];
	}
	double ser = sum / N;
	// виведення
	for (size_t i = 0; i < N; i++)
	{
		cout << "\ta[ " << i << " ] = " << a[i] << endl;
	}
	cout << "Середнє значення: " << setw(5) << setprecision(2) << ser << endl;
	system("pause>nul");
	return EXIT_SUCCESS;
}

/* ------  RESULT  -------
				a[ 0 ]=1
				a[ 1 ]=2
				a[ 2 ]=3
				a[ 3 ]=4
				a[ 4 ]=6

Середнє значення:   3.2

*/

