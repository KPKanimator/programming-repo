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
  
  	short a = 0;
	
	// постфиксный инкремент
	cout << a << endl;
	cout << a++ << endl;	// сначала выводим на экран значение переменной а, а потом увеличиваем значение переменной на единицу
	cout << a << endl;

	cout << endl;

	// префиксный инкремент
	
	cout << a << endl;
	cout << ++a << endl;	// сначала увеличиваем значение переменной а, а затем выводим на экран
	cout << a << endl;
  
  system("pause>nul");
  return EXIT_SUCCESS;
}

/* ------  RESULT  -------

*/