/*
 * Author: Kirill Korobchinsky
 * 
 * Factorial
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
  
	unsigned long long number = 0;		// The number whose factorial you want to get
	unsigned long long factorial = 1;	// Factorial

	cout << "Enter the number: ";
	cin >> number;

	cout << "Factorial of a number: " << number << "! = ";

	do
	{
		if (number == 0)
		{
			factorial = 1;
			break;
		}
		factorial *= number;
		number--;
	} while (number > 0);
	
  
	cout << factorial;

  system("pause>nul");
  return EXIT_SUCCESS;
}

/* ------  RESULT  -------

*/