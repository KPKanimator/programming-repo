/*
 * Author: Kirill Korobchinsky
 * 
 * Nested functions
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

void recursion(int counter);
void func(int counter);

int main()
{
#pragma region Ukranian
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Ukrainian");
#pragma endregion
  
	func(3);
  
  system("pause>nul");
  return EXIT_SUCCESS;
}

void recursion(int counter)
{
	counter--;

	cout << "Forst part of recursion function " << counter << endl;

	if (counter != 0)
	{
		func(counter);
	}
	cout << "Second part of recursion function " << counter << endl;
}

void func(int counter)
{
	cout << "First part of func function " << counter << endl;

	recursion(counter);

	cout << "Second part of func function " << counter << endl;
}

/* ------  RESULT  -------

*/