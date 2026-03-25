/*
 * Author: Kirill Korobchinsky
 * 
 * Pass by value
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
void add_two(int);

int main()
{
#pragma region Ukranian
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Ukrainian");
#pragma endregion
  
	int a = 0;
	cout << "Enter the value: " << endl;
	cin >> a;

	cout << "Value of variable a = " << a << endl;

	add_two(a);

	cout << "Value of variable a = " << a << endl;
  
  system("pause>nul");
  return EXIT_SUCCESS;
}


void add_two(int a)
{
	a = a + 2;
	cout << "Value int a = " << a << endl;
}

/* ------  RESULT  -------

*/