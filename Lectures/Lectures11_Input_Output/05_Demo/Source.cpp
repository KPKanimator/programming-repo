/*
 * Author: Kirill Korobchinsky
 * 
 * Real data overflow
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
  float  a = 0.123456789012345678901234567890123456789012345678901234567890F;
  double b = 0.123456789012345678901234567890123456789012345678901234567890;

  cout.precision(ios::floatfield);
  cout << a << endl << b << endl;
  
  system("pause>nul");
  return EXIT_SUCCESS;
}

/* ------  RESULT  -------
0.12345679104328155517578125
0.12345678901234567736988623209981597028672695159912109375

*/