/*
 * Author: Kirill Korobchinsky
 * 
 * Declare pointer
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

  int age = 18; // Инициализация переменной
  int *p_age = &age; // Инициализация указателя
  double* p_data = nullptr; // NULL

  //double length = 7.77; // Инициализация переменной 
  //double* pLength = &length; // Инициализация указателя
  
  long* var = new long;
  //*var = 1;
  std::cout << "var: " << *var << "Address var: " << var << endl;

  std::cout << "Value: " << age << " Address: " << &age << "\n";
  std::cout << "Value: " << *p_age << " Address: " << p_age << "\n";
  std::cout << "Value: " << *p_age << " Address: " << &p_age << "\n";

  //std::cout << "Value: " << length << " Address: " << &length << "\n";
  //std::cout << "Value: " << *pLength << " Address: " << pLength << "\n";
 
  system("pause>nul");
  return EXIT_SUCCESS;
}

/* ------  RESULT  -------
  var: -842150451 Address var: 000002B24B8228D0
  Value: 18 Address: 000000DA824FF924
  Value: 18 Address: 000000DA824FF924
  Value: 18 Address: 000000DA824FF948
*/