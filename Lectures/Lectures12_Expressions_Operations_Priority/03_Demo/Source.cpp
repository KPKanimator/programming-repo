/*
 * Author: Kirill Korobchinsky
 * 
 * Constants
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
  	// На 11-й строке мы создаем константу типа int с именем Month и присваиваем ей значение 12
	const int MONTH = 12;
	int const MONTH2 = 2;

	// Значение константы измен¤ть запрещенно
	// MONTH = 15;

	// const int a;
	// a = 10;

	int c = INT_MAX;

	cout << "INT_MAX = " << c << endl;

  
  
  system("pause>nul");
  return EXIT_SUCCESS;
}

/* ------  RESULT  -------

*/