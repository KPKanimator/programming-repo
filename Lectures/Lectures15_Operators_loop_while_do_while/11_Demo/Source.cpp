/*
 * Author: Kirill Korobchinsky
 * Examples: do/while #2
 * Checking for input errors and returning to input on error
 *
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
	int var = 0;
	system("cls");	// очистка экрана
	cout << "Вычисление суммы и произведения введенных с консоли целых чисел." << endl;
	cout << "Введите целое число (0 - признак окончания ввода данных)";
	int sum = 0, prod = 1;
	while (cin >> var && var != 0)		// (cin >> var) == true если целое число
	{
		sum += var;
		prod *= var;
		system("cls");	// очистка экрана
		cout << "Вычисление суммы и произведения введенных с консоли целых чисел." << endl;
		cout << "Введите целое число (0 - признак окончания ввода данных)";
	}
	system("cls");		// очистка экрана
	if (cin.fail())		// если введена не цифра - проверяем std::ios::fail - проверяет, произошла ли исправимая ошибка
	{
		cout << setw(15) << left << "Сумма " << sum << endl;
		cout << setw(15) << "Произведение " << prod << endl;
		cout << "Ошибка ввода." << endl;
		system("pause");
		exit(EXIT_FAILURE);
	}
	else
	{
		cout << "Вы закончили ввод данных." << endl;
		cout << setw(15) << left << "Сумма " << sum << endl;
		cout << setw(15) << "Произведение " << prod << endl;
	}


	system("pause>nul");
	return EXIT_SUCCESS;
}

/* ------  RESULT  -------

*/