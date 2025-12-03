/*
 * Author: Kirill Korobchinsky
 *
 * namespace
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

int d = 111;

namespace my_namespace
{
	int d = 333;
}

int main()
{
#pragma region Ukranian
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Ukrainian");
#pragma endregion

	string str = "якийсь р€док њ \n";
	cout << "str = " << str << endl;
	cin >> str;
	cout << "str = " << str << endl;

	int d = 222;
	cout << d << endl;
	cout << ::d << endl;
	cout << my_namespace::d << endl;

	int a = 4;
	cout << "1. " << a << endl;
	{
		int a = 5;
		cout << "2. " << a << endl;
	}

	cout << "1. " << a << endl;

	{
		int a = 6;
		cout << "3. " << a << endl;
	}

	//int a = 7;	// недопустимо создавать переменную с уже существующим именем

	// |x| => (expr) ? true : false;
	int x = -10;

	cout << "|x| = " << ((x < 0) ? -x : x) << endl;

	int k = x > 2 ? 10 : 20;

	system("pause>nul");
}

/* ------  RESULT  -------
str = якийсь р€док њ

123
str = 123
222
111
333
1. 4
2. 5
1. 4
3. 6
|x| = 10
*/