/*
 * Author: Kirill Korobchinsky
 * 
 * is functions ...
 */
#define _USE_MATH_DEFINES

#pragma region Includes
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <locale>
#include "windows.h"
#include "header.hpp"
using namespace std;
#pragma endregion

// Write Only Number
void use_function()
{
	char number;

	while (true)
	{
		cout << "Enter the digit symbol" << endl;
		cin >> number;

		if (isdigit(number)) {
			cout << "User entered the number - " << number << endl;
			continue;
		}
		cout << "The " << number << " is not a digit! Try again!" << endl;
	}
}

int main()
{
#pragma region Ukranian
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Ukrainian");
#pragma endregion
	
	verify_is();
	use_function();
 
  system("pause>nul");
  return EXIT_SUCCESS;
}



/* ------  RESULT  -------

*/