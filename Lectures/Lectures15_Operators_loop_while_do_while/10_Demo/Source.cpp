/*
 * Author: Kirill Korobchinsky
 *
 * Examples: do/while #1
 * Checking for input errors and returning to input on error
 */
 //#define _USE_MATH_DEFINES

#pragma region Includes
#include <iostream>
#include <limits>
#include "windows.h"
#include <iomanip>
using namespace std;

//#include <math.h>
//#include <stdlib.h>
//#include <locale>
#pragma endregion

int main()
{
#pragma region Ukranian
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Ukrainian");
#pragma endregion
	int var;
	int sum = 0, prod = 1;
	do
	{
		system("cls");	// очистка экрана
		if (!(cin >> var))		// если введена не цифра - проверяем std::ios::fail - проверяет, произошла ли исправимая ошибка
		{
			cout << endl;
			cout << "cin.good=" << cin.good() << endl;
			cout << "cin.fail=" << cin.fail() << endl;
			cout << "cin.bad=" << cin.bad() << endl;
			cout << "cin.eof=" << cin.eof() << endl;
			system("pause");
			system("cls");		// очистка экрана
			cout << "Ошибка ввода." << endl;
			system("pause");
			cin.clear();					 // сброс флагов (бит) ошибки
			cin.ignore(255, '\n'); // cin.ignore(255, '\n') - очистка буфера ввода
			continue;							 // закончить текущую итерацию цикла
		}
		cout << "cin.good=" << cin.good() << endl;
		cout << "cin.fail=" << cin.fail() << endl;
		cout << "cin.bad=" << cin.bad() << endl;
		cout << "cin.eof=" << cin.eof() << endl;
		system("pause");
		if (var == 0)
		{
			system("cls");	// очистка экрана
			cout << "Вы закончили ввод данных." << endl;
			if (sum != 0)
			{
				cout << setw(15) << left << "Сумма " << sum << endl;
				cout << setw(15) << "Произведение " << prod << endl;
			}
			break;					// выйти из цикла
		}
		sum += var;
		prod *= var;
	} while (true);


	system("pause>nul");
	return EXIT_SUCCESS;
}

/* ------  RESULT  -------

*/