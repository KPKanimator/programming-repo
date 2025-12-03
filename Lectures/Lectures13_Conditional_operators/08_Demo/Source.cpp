/*
 * Author: Kirill Korobchinsky
 *
 *
 */
#define _USE_MATH_DEFINES

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

	for (;;)
	{
		cout << "Choose one of the menu items:" << endl;
		cout << "0. Exit." << endl;
		cout << "1. Task 1." << endl;
		cout << "2. Task 2." << endl;
		cout << "3. Task 3." << endl;

		char action;
		cin >> action;

		switch (action)
		{
		case '0':
		{
			//break;
			return EXIT_SUCCESS;
		}
		case '1':
		{
			cout << "The assignment of an arithmetic expression" << endl;
			//break;
		}
		case '2':
		{
			cout << "Given a logical expression" << endl;
			//break;
		}
		case '3':
		{
			cout << "The assignment is a graphic area" << endl;
			//break;
		}
		//default:
		//{
		//	cout << "Wrong choice, try again!";
		//	//break;
		//}
		}
	system("pause>nul");
}

	system("pause>nul");
	return EXIT_SUCCESS;
}

/* ------  RESULT  -------

*/