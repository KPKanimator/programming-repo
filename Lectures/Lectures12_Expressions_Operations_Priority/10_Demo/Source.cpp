/*
 * Author: Kirill Korobchinsky
 * 
 * ( , )
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
  
  int x = 2;
  int y = 0;
  int z = (++x, ++y); // increment x and y

  z = (x, 10); // increment x and y
 
  system("pause>nul");
  return EXIT_SUCCESS;
}

/* ------  RESULT  -------

*/