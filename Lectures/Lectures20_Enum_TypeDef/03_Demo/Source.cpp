/*
 * Author: Kirill Korobchinsky
 * 
 * enum progr
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

enum progr
{
  C, Pascal, Foxpro, Modula2, Basic, Fortran
} lang;

int main()
{
#pragma region Ukranian
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Ukrainian");
#pragma endregion
  cout << " progr samples: " << lang << endl;
  system("pause");
  system("cls");

  lang = progr::Fortran;
  cout << " progr samples: " << lang << endl;
  system("pause");
  system("cls");

  enum elements { elem1 = -1, elem2, elem3 = 5 };
  cout << " elements samples: " << elements::elem1 << endl;
  system("pause");
  system("cls");
  
  
  system("pause>nul");
  return EXIT_SUCCESS;
}

/* ------  RESULT  -------

*/