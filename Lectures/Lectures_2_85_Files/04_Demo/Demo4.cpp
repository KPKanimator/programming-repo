/*
 * Author: Kirill Korobchinsky
 *
 * Generation array random values
 */
#define _USE_MATH_DEFINES

#pragma region Includes
#include <iostream>
#include <fstream>
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
	// Заповнення двовимірного масиву mas[N][N] випадковими числами
	const int N = 5; // Розмірність масиву
	double mas[N][N]; // Масив, який необхідно заповнити
	// Ініціалізували генератор поточним часом
	srand(static_cast<unsigned int>(time(nullptr)));
	cout << "Заповнення двовимірного масиву mas[" << N << "][" << N << "] "
		"випадковими числами" << endl;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			mas[i][j] = rand() % 10; // Випадкове число в межах від 0 до 9
			cout << mas[i][j] << " ";
		}
	}
	cout << endl;

	system("pause>nul");
	return EXIT_SUCCESS;
}

/* ------  RESULT  -------

*/