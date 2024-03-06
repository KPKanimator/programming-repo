/*
 * Author: Kirill Korobchinsky
 * 
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
  
	auto a = 0.0; // переменная а имеет тип double, так как 0.0 - это double 
	cout << sizeof(a);

	double b = 0; // 0 автоматически преобразуется в 0.0

	auto c = 0; // переменная с имеет тип int, поскольку 0 - это int

	auto d = 1, e = 2;	// Множественное обьявление
	//auto d;
	//d = 4;
  
  system("pause>nul");
  return EXIT_SUCCESS;
}

/* ------  RESULT  -------
8

*/