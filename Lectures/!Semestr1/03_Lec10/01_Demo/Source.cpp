/*
 * Знаходження найбільшого з двох заданих чисел
 * Date: 01/11/2024
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
	// Введення значень
	float x = 0, y = 0;
	cin >> x >> y;

	// алгоритм
	if (x >= -2 and x <= 2 and y <= 1 and y >= -1)
		cout << "Введена точка належить прямокутнику [-2; 2; 1; -1]\n";
	else
		cout << "Введена точка НЕ належить прямокутнику [-2; 2; 1; -1]\n";

	int num = 20;
	if (num % 2 == 0)
		cout << "Парне";
	else
		cout << "Не парне";

	system("pause>nul");
	return EXIT_SUCCESS;
}

/* ------  RESULT  -------


*/

