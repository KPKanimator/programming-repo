/*
 * Author: Kirill Korobchinsky
 *
 * Дано мисив з n елементів, знайти значення від а до б
 */
#define _USE_MATH_DEFINES
#define DEBUG1

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
	// инициализация
	const int N = 100;
	int a[N] = { 0 };
	int b[N] = { 0 };
	srand(static_cast<unsigned int>(time(nullptr)));
	for (size_t i = 0; i < N; i++)
		a[i] = rand() % 201 - 100;   // -100..100
	int a_i = rand() % 201 - 100; // 50
	int b_i = rand() % 201 - 100; // -50
	if (b_i < a_i)
	{
		int temp = a_i;
		a_i = b_i;
		b_i = temp;
	}
#ifdef DEBUG
	for (size_t i = 0; i < N; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl << "a = " << a_i << endl;
	cout << "b = " << b_i << endl;
#endif // DEBUG
	// решение задания
	int couter = 0;
	for (size_t i = 0; i < N; i++)
	{
		if (a[i] >= a_i and a[i] <= b_i)
			b[couter++] = a[i];
	}
	// вывести результат
	for (size_t i = 0; i < couter; i++)
	{
		cout << b[i] << " ";
	}

	system("pause>nul");
	return EXIT_SUCCESS;
}

/* ------  RESULT  -------

*/