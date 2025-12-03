/*
 * Author: Kirill Korobchinsky
 * 
 * goto Label
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
  
	int counter = 0;

Label:

	counter++;
	cout << "Counter = " << counter << endl;

	if (counter < 3)
	{
		goto Label;
	}

	cout << "End";
  
  
  system("pause>nul");
  return EXIT_SUCCESS;
}

/* ------  RESULT  -------

*/