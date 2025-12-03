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
  
	// В стандарте С++11 появилось новое средство позволяющее компилятору определять тип переменной

	auto a = 1; // переменная a типа int
	cout <<"\t sizeof a "<< sizeof a << endl;

	auto b = 1.1; // переменная b типа double
	cout << "\t sizeof b " << sizeof b << endl;

	auto c = 'A'; // переменная c типа char  
	cout << "\t sizeof c " << sizeof c << endl;

  system("pause>nul");
  return EXIT_SUCCESS;
}

/* ------  RESULT  -------

*/