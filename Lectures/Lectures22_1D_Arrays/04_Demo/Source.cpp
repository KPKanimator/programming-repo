/*
 * Author: Kirill Korobchinsky
 *
 * Задача:
 * Найти элемент в масииве.
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

	const int ROW = 3;
	const int COL = 4;
	///* initialize random seed: */
	srand(static_cast<unsigned int>(time(nullptr)));
	float a[ROW][COL] = { 0.f };

	//int choise = 0;
	//cout << "If you want generate press any key:";
	//cin >> choise;
	//if (choise)
	for (int i = 0; i < ROW; i++)
		for (int j = 0; j < COL; j++)
			a[i][j] = -10 + rand() % 21 + 1.f / (1 + rand() % 11); // [-10; 10]

	/* print items: */
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
			cout << fixed << setw(10) << setprecision(2) << a[i][j] << " ";
		cout << endl;
	}

	///* find sum: */
	//int s = 0;
	//for (int i = 0; i < ROW; i++)
	//	for (int j = 0; j < COL; j++)
	//		s += a[i][j];

	//cout << "S = " << s << endl;

	//s = 0;
	//int r = 0;
	//cout << "r = ";
	//cin >> r;
	//for (int j = 0; j < COL; j++)
	//	if (a[r][j] > 0)
	//		s += a[r][j];
	//cout << "S = " << s << endl;

	//const int N = 10;
	//int a[N] = {0};

	//cout << "\ta[0] = \t" << a[0] << endl;
	//cout << "\t&a[0] = \t" << &a[0] << endl;
	//cout << "\t&a = \t" << &a << endl;

	//cout << "\t&a[3] = \t" << &a[3] << endl;
	//cout << "\t&a[3] - &a[0] = \t" << (&a[3] - &a[0]) << endl;
	//
	//cout << "\t&a = \t" << a << endl;
	//cout << "\t*a = \t" << *a << endl;




	system("pause>nul");
	return EXIT_SUCCESS;
}

/* ------  RESULT  -------

*/

