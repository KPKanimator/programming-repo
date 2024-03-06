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
  int v1 = 10;
  int v2 = 10;
  int* pv = &v1;
  cout << "v1 = " << v1 << "\t &v = " << &v1 << endl;
  cout << "v2 = " << v2 << "\t &v = " << &v2 << endl;
  cout << "*pv = " << *pv << "\t &pv = " << &pv << "\t pv = " << pv << endl;

  cout << "(&v1 == pv) " << boolalpha << (&v1 == pv) << endl;
  cout << "(&v2 == pv) " << boolalpha << (&v2 == pv) << endl;
  
  system("pause>nul");
  return EXIT_SUCCESS;
}

/* ------  RESULT  -------
    v1 = 10  &v = 00000094FD9FFA54
    v2 = 10  &v = 00000094FD9FFA74
    *pv = 10 &pv = 00000094FD9FFA98  pv = 00000094FD9FFA54
    (&v1 == pv) true
    (&v2 == pv) false


*/