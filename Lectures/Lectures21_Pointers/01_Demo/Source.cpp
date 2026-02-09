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
  cout << "Referense at age: " << &age << endl;
  int *p_age = &age; // Инициализация указателя
  cout << "Value at p_age: " << p_age << endl;
  cout << "Value at *p_age: " << *p_age << endl;
  age++;
  cout << "Value at *p_age: " << *p_age << endl;

  double* p_data = nullptr; // NULL
  //cout << "Value at *p_data: " << *p_data << endl;

  //double length = 7.77; // Инициализация переменной 
  //double* pLength = &length; // Инициализация указателя
  
  long* var = new long;
  *var = 1;
  cout << "var: " << *var << " Address var: " << var << endl;

  cout << "Value: " << age << " Address: " << &age << "\n";
  cout << "Value: " << *p_age << " Address: " << p_age << "\n";
  cout << "Value: " << *p_age << " Address: " << &p_age << "\n";

  //cout << "Value: " << length << " Address: " << &length << "\n";
  //cout << "Value: " << *pLength << " Address: " << pLength << "\n";
 
  system("pause>nul");
  return EXIT_SUCCESS;
}

/* ------  RESULT  -------
Referense at age: 000000F6B62FFB74
Value at p_age: 000000F6B62FFB74
Value at *p_age: 18
Value at *p_age: 19
var: 1 Address var: 0000027B84D14980
Value: 19 Address: 000000F6B62FFB74
Value: 19 Address: 000000F6B62FFB74
Value: 19 Address: 000000F6B62FFB98

*/