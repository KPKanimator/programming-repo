/*
 * Author: Kirill Korobchinsky
 * 
 * Explicit type conversion
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
  
	cout << 'a' << endl;
	cout << (int)'a' << endl;

	cout << "Hello" << endl;
 
  system("pause>nul");
  return EXIT_SUCCESS;
}

/* ------  RESULT  -------
a
97
Hello

*/