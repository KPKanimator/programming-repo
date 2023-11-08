/*
 * Exaple of LW7
 * Date: 08/11/2023
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

// Користувач вводе значення меню
int select_menu()
{
	cout << "Choose one of the menu items:" << endl;
	cout << "0. Exit." << endl;
	cout << "1. Task 1." << endl;
	cout << "2. Task 2." << endl;

	char action;
	cin >> action;
	return action;
}
// n = 15; x = 1.5
// q = - x / (i + 1)
void task1()
{
	cout << "~~~~~~~~~~~ TASK 1 ~~~~~~~~~~~ " << endl;
	const int N = 15+1;
	const double X = 1.5;
	double a1 = 1, s = a1, a2 = 0, q = 0;
	cout << "\t\t\t\ta[0]: " << a1 << " S= " << s <<endl;
	for (size_t i = 0; i < N-1; i++)
	{
		q = -X / (i + 1);
		a2 = a1 * q;
		s += a2;
		cout << "\tq: " << setw(5) << setprecision(4) << q 
			<< "\ta[" << i << "]: " << setw(25) << setprecision(14) << a2 
			<< "\tS= " << setw(15) << setprecision(14) << s << endl;
		a1 = a2;
	}
	cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	cout << "\tx: " << X << " n: " << N -1 << " S= " << s;
}
void task2()
{
	cout << "~~~~~~~~~~~ TASK 2 ~~~~~~~~~~~ " << endl;
}

int main()
{
#pragma region Ukranian
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Ukrainian");
#pragma endregion

	while (true)
	{
		switch (select_menu())
		{
		case '0':
			return EXIT_SUCCESS;
		case '1':
		{
			task1();
			break;
		}
		case '2':
		{
			task2();
			break;
		}
		default:
		{
			cout << "Wrong choice, try again!";
			break;
		}
		}
		cout << "\n\n<<<Press any key>>>\n";
		system("pause>nul");
		system("cls");
	}
	return EXIT_SUCCESS;
}

/* ------  RESULT  -------

*/

