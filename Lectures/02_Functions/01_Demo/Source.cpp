/*
*
* Date: 13/12/2021
* Author: Kirill Korobchinskiy
*/
#pragma region Includes
#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdlib.h>
#include <locale>
#include "windows.h"
using namespace std;
#pragma endregion

int menu()
{
	cout << "Done by: ..." << endl;
	cout << "Lab work <<Loop operators>>:" << endl;
	cout << "\t1. Task 1" << endl;
	cout << "\t2. Task 2" << endl;
	cout << "\t0. To exit the program" << endl;
	cout << setfill('-') << setw(50) << endl;
	cout << "\nYour choice is: ";
	int choice = -1;
	cin >> choice;
	return choice;
}

void task1()
{
	// TODO: Write the implementation of your task
	cout << "task1()" << endl;
}
void task2()
{
	// TODO: Write the implementation of your task
	cout << "task2()" << endl;
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
		system("cls");
		switch (menu())
		{
		case 0:
			exit(0);
			break;
		case 1:
			task1();
			break;
		case 2:
			task2();
			break;
		default:
			cout << "\nInput error: no menu item!\n\n";
			break;
		}
		system("pause>nul");
	}
	return EXIT_SUCCESS;
}

/* ------ RESULT -------

*/
