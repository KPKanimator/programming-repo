/*
 * Author: Kirill Korobchinsky
 * 
 * Compare
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
  
  int v = 10;
  int* pv = &v;
  cout << "v = " << v << "\t &v = " << &v << endl;
  cout << "*pv = " << *pv << "\t &pv = " << &pv << "\t pv = " << pv << endl;

  cout << "(&v == pv) " << boolalpha << (&v == pv) << endl;
  
  system("pause>nul");
  return EXIT_SUCCESS;
}

/* ------  RESULT  -------

*/