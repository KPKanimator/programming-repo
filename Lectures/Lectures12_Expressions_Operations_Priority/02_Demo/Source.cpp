/*
 * Author: Kirill Korobchinsky
 * 
 * sizeof
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
	cout << "Bool: " << sizeof(bool) << endl;
	cout << "Char: " << sizeof(char) << endl;
	cout << "Short: " << sizeof(short) << endl;
	cout << "Int: " << sizeof(int) << endl;
	cout << "Long long: " << sizeof(long long) << endl;
	cout << "Float: " << sizeof(float) << endl;
	cout << "Double: " << sizeof(double) << endl;

	int a = 4;

	cout << sizeof a << endl;
	cout << sizeof 12.5f << endl;
  
  
  system("pause>nul");
  return EXIT_SUCCESS;
}

/* ------  RESULT  -------
Bool: 1
Char: 1
Short: 2
Int: 4
Long long: 8
Float: 4
Double: 8
4
4


*/