/*
 * Author: Kirill Korobchinsky
 * 
 * escape-sequence
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
	// two tabs and print message
	cout << "\t\tControl characters C++";
	// carriage return to the beginning of the line and print msg
	cout << "\rstm.korobchinskiy.com\n";
	// single and double quotes
	cout << "\'formatting\' output with \"escape characters\"";
	// beep sound
	cout << "\a\a\a\a\a\a\a\a\a\a\a\a\a\a" << endl;
  
  
  system("pause>nul");
  return EXIT_SUCCESS;
}

/* ------  RESULT  -------
stm.korobchinskiy.comol characters C++
'formatting' output with "escape characters"

*/