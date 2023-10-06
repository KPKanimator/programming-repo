/*
 * Author: Kirill Korobchinsky
 * 
 * flag combination
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
  
  // ¬ключить вывод логических величин в текстовом виде
  cout.setf(ios::boolalpha);
  bool a = true;
  bool b = false;
  cout << "a = " << a << "; b = " << b << endl;
  // включить вывод логических величин в текстовом виде
  cout.unsetf(ios::boolalpha /* noboolalpha */);
  cout.unsetf(ios::dec);
  cout.setf(ios::showbase /* noshowbase */ | ios::showpos /* noshowpos */);
  int number = 16;
  cout << "number = " << number << endl;

  
  system("pause>nul");
  return EXIT_SUCCESS;
}

/* ------  RESULT  -------
a = true; b = false
number = +16

*/