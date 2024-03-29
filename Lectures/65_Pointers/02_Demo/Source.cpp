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
  
  int var = 123; // ������������� ���������� var ������ 123
  int* ptrvar = &var; // ��������� �� ���������� var (��������� ����� ���������� ���������)
  cout << "&var    = " << &var << endl;// ����� ���������� var ������������ � ������, ����������� ��������� ������ ������ 
  cout << "ptr_var = " << ptrvar << endl;// ����� ���������� var, �������� ��������� ��������� ptrvar 
  cout << "var     = " << var << endl; // �������� � ���������� var
  cout << "*ptrvar = " << *ptrvar << endl; // ����� �������� ������������� � ���������� var ����� ���������, ��������� ������������� ���������
  
  system("pause>nul");
  return EXIT_SUCCESS;
}

/* ------  RESULT  -------
  &var    = 000000EA5E0FF924
  ptr_var = 000000EA5E0FF924
  var     = 123
  *ptrvar = 123

*/