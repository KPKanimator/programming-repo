/*
 * Author: Kirill Korobchinsky
 * 
 * Address of pointers
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
  
  int* ptr_int = nullptr;
  cout << "Address of prt_int " << ptr_int << endl;
  cout << "Address of &prt_int " << &ptr_int << endl;

  int* ptr_int3;
  int* ptr_int2 = new int;
  cout << "Address of &prt_int2 " << &ptr_int2 << endl;
  delete ptr_int2;
  cout << "Address of &prt_int2 " << &ptr_int2 << endl;

  int x = 7;
  int& ref_x = x;
  ref_x++;
  x++;
  cout << " x is " << x << endl; // 8
  cout << " reference x is " << ref_x << endl; // ?
  
  system("pause>nul");
  return EXIT_SUCCESS;
}

/* ------  RESULT  -------

*/