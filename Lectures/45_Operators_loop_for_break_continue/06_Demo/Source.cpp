/*
 * Author: Kirill Korobchinsky
 * 
 * Squares and cubes of numbers
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
  int a, b;
  const int n = 8;
  for (int i = 0; i < n; ++i)
  {
    a = i * i;
    b = a * i;
    cout << "\ti^2=" << a << "\ti^3=" << b << endl;
  }
  
  
  system("pause>nul");
  return EXIT_SUCCESS;
}

/* ------  RESULT  -------

*/