/*
 * Author: Kirill Korobchinsky
 * ru.wikipedia.org/wiki/Приоритет_операции
 * 
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
	int a = 3, b = 4, c = 6;
	bool z = a * a == b * b + c * c;
	z |= b * b == a * a + c * c;
	z |= c * c == b * b + a * a;
	if (z)
		cout << "Трикутник зі сторонами а, b, c –– э прямокутним" << endl;
	else
		cout << "Трикутник зі сторонами а, b, c –– НЕ прямокутний" << endl;

  
  
  system("pause>nul");
  return EXIT_SUCCESS;
}

/* ------  RESULT  -------

*/