/*
 * Author: Kirill Korobchinsky
 * 
 * Type Overflow
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
  
  int lower, upper, step;
  char c;
  //bool success;

  const int MAXLINE = 80;

  char esc = '\\';
  int i = 0;
  int limit = MAXLINE + 1;
  float eps = 1.0e-5f;
  bool success = true;

  unsigned short a = 65535;
  std::cout << "a = " << a << endl;
  a = a + 2;
  cout << "a + 2 = " << a << endl; // -65536 65537 65539
  a += 2;
  cout << "a + 2 = " << a << endl;
  
  //MAXLINE = 20;

  system("pause>nul");
  return EXIT_SUCCESS;
}

/* ------  RESULT  -------
a = 65535
a + 2 = 1
a + 2 = 3

*/