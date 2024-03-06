/*
 * Author: Kirill Korobchinsky
 * 
 * Link & Pointer
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
  
  int var = 123; // инициализация переменной var числом 123
  int* ptrvar = &var; // указатель на переменную var (присвоили адрес переменной указателю)
  cout << "&var    = " << &var << endl;// адрес переменной var содержащийся в памяти, извлечённый операцией взятия адреса 
  cout << "ptr_var = " << ptrvar << endl;// адрес переменной var, является значением указателя ptrvar 
  cout << "var     = " << var << endl; // значение в переменной var
  cout << "*ptrvar = " << *ptrvar << endl; // вывод значения содержащегося в переменной var через указатель, операцией разименования указателя
  
  system("pause>nul");
  return EXIT_SUCCESS;
}

/* ------  RESULT  -------
  &var    = 000000EA5E0FF924
  ptr_var = 000000EA5E0FF924
  var     = 123
  *ptrvar = 123

*/