/*
 * Author: Kirill Korobchinsky
 * 
 * Default values
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

void Operation(string val1 = "val", int val2 = 10, double val3 = 12);

int main()
{
#pragma region Ukranian
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Ukrainian");
#pragma endregion
  
	Operation();                  // 1-я перегрузка.
	Operation("C++");             // 2-я перегрузка.
	Operation("CSharp", 10);         // 3-я перегрузка. 
	Operation("Pointer", 11, 12.3);   // 4-я перегрузка.

  
  system("pause>nul");
  return EXIT_SUCCESS;
}


void Operation(string val1, int val2, double val3)
{
	cout << val1 << " " << val2 << " " << val3 << endl;
}

/* ------  RESULT  -------

*/
