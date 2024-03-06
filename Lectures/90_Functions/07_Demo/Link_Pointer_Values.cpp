/*
 * Author: Kirill Korobchinsky
 * 
 * Link Pointer Values
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
// —сылки представл€ют собой "псевдонимы" дл€ переменных и позвол€ют работать с данными через ссылку не по копии а по значению.

int main()
{
#pragma region Ukranian
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Ukrainian");
#pragma endregion


	int a = 10;

	cout << "Variable a = " << a << endl;

	// —оздаем ссылку на переменную типа int
	int& b = a;

	cout << "Variable a = " << b << endl;
	cout << "Change variable b" << endl;

	b = 15;

	cout << "Variable a = " << a << endl;
	cout << "Variable a = " << b << endl;

	// int &c; // Ќе допустимо! ѕри объ€влении ссылочную переменную необходимо инициализировать.


	int* p_a = &a;
	int& l_a = a;

	cout << "Value of variable: a = " << a << "; p_a = " << *p_a << " (" << p_a << "); l_a = " << l_a << endl;

	*p_a = 13;
	cout << "Value of variable: a = " << a << "; p_a = " << *p_a << " (" << p_a << "); l_a = " << l_a << endl;

	l_a = 15;
	cout << "Value of variable: a = " << a << "; p_a = " << *p_a << " (" << p_a << "); l_a = " << l_a << endl;
  
  
  system("pause>nul");
  return EXIT_SUCCESS;
}

/* ------  RESULT  -------

*/