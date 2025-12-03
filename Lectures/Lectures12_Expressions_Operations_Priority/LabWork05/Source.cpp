/*
 * Author: Kirill Korobchinsky
 *
 * Example of LabWork05 Part3
 */
#define _USE_MATH_DEFINES
#pragma region Includes
#include <iostream>
#include <math.h>
#include <locale>
#include "windows.h"
using namespace std;
#pragma endregion

void task1()
{
}
void task2()
{
}
void task3()
{
	bool z = 0;
	float x = 0.F, y = 0.F;
	cout << "Введіть значення х та у: ";
	cin >> x >> y;
	// and => &&; or => || 
	z = pow(x, 2) + pow(y, 2) < 9 and x * y <= 0 and x <= 3 and y <= 3;
	cout << (z ? "Да! Попали в заданную область" : "Увы не попали");

	cout << "Введіть значення х та у: ";
	cin >> x >> y;
	// and => &&; or => || 
	z = pow(x, 2) + pow(y, 2) < 9 and x * y <= 0 and x <= 3 and y <= 3;
	cout << (z ? "Да! Попали в заданную область" : "Увы не попали");

	cout << "Введіть значення х та у: ";
	cin >> x >> y;
	// and => &&; or => || 
	z = pow(x, 2) + pow(y, 2) < 9 and x * y <= 0 and x <= 3 and y <= 3;
	cout << (z ? "Да! Попали в заданную область" : "Увы не попали");

	cout << "Введіть значення х та у: ";
	cin >> x >> y;
	// and => &&; or => || 
	z = pow(x, 2) + pow(y, 2) < 9 and x * y <= 0 and x <= 3 and y <= 3;
	cout << (z ? "Да! Попали в заданную область" : "Увы не попали");
}


int main()
{
#pragma region Ukranian
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Ukrainian");
#pragma endregion

	long long s = -1;
	double k = -1;
	//cin >> s;
	k = sqrt(-2 * s + 1);
	cout << k << endl;
	cout << sizeof(long long);

	
	//task1();
	//task2();
	//task3();

	system("pause>nul");
	return EXIT_SUCCESS;
}

/* ------  RESULT  -------

*/
