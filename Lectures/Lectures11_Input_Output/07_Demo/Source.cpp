/*
 * Author: Kirill Korobchinsky
 * 
 * Data types
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
  
#pragma region ЦЕЛЫЕ ЧИСЛА

  //----------------- 16 bit -----------------
  // Типу short соответствуют типы short int, signed short, signed short int 
  // Целое со знаком

  short    a = -32768;
  short int  b = +32767;

  // Целое без знака

  unsigned short    c = 0;
  unsigned short int  d = 65535;

  //----------------- 32 bit -----------------
  // Типу int соответствуют типы signed, signed int
  // Целое со знаком

  int    e = -2147483648;
  int    f = +2147483647;

  // Типу unsigned соответствуют типы unsigned int, unsigned, unsigned int
  // Целое без знака

  unsigned    g = 0;
  unsigned int  h = 4294967295;

  //----------------- 64 bit -----------------
  // Типу long long соответствуют типы long int, signed long, signed long int 
  // Целое со знаком

  long    i = -922337203685477580;
  long int  j = +9223372036854775807;

  // Целое без знака

  unsigned long    k = 0;
  unsigned long int  l = 18446744073709551615;

#pragma endregion
#pragma region ВЕЩЕСТВЕННЫЕ ЧИСЛА

  //----------------- 32 bit ----------------- 

  float m = 1.8E-38f;
  float n = 3.4E+38f;

  //----------------- 64 bit -----------------

  double o = 2.2E-308;
  double p = 1.8E+307;

#pragma endregion
#pragma region ЛОГИЧЕСКИЙ ТИП
  //----------------- 8 bit -----------------

  // Логическая величина Истина\Ложь

  bool s = true;   // 0000 0001
  bool t = false;  // 0000 0000

#pragma endregion
#pragma region СИМВОЛЬНЫЙ ТИП
  //----------------- 16 bit -----------------

  char cu = 'A';
  char ca = 'A';
  char cb = '\x0041';
  char cc = '\u0906';
  cout << ca << endl;
  cout << cb << endl;
  cout << cc << endl;
#pragma endregion
#pragma region СТРОКОВЫЙ ТИП

  // Строка в формате UNICODE

  string w = "Hello world!";


#pragma endregion
#pragma region Виведення значень
  short m_short = 0xFFFF;
  unsigned short n_short = 0xFFFF;
  int m_int = m_short;
  int n_int = n_short;

  cout << "m_short = " << m_short << endl;
  cout << "m_int = " << m_int << endl;
  cout << "n_short = " << n_short << endl;
  cout << "n_int = " << n_int << endl;
#pragma endregion

  system("pause>nul");
  return EXIT_SUCCESS;
}

/* ------  RESULT  -------

*/