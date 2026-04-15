/*
 * Author: Kirill Korobchinsky
 * 
 * ++++++++++++++++++++-DONE-++++++++++++++++++++
 */
#define _USE_MATH_DEFINES

#pragma region Includes
#include <iostream>
#include "windows.h"
using namespace std;
#pragma endregion

char* buildstr(char c, int n);     // prototype

int main()
{
#pragma region Ukranian
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Ukrainian");
#pragma endregion
  
  int times;
  char ch;

  cout << "Enter a character: ";
  cin >> ch;
  cout << "Enter an integer: ";
  cin >> times;
  char* ps = buildstr(ch, times);
  cout << ps << endl;
  delete[] ps;                   // free memory 
  ps = buildstr('+', 20);         // reuse pointer 
  cout << ps << "-DONE-" << ps << endl;
  delete[] ps;                   // free memory 
  // cin.get();
  // cin.get();
  
  system("pause>nul");
  return EXIT_SUCCESS;
}

// builds string made of n c characters
char* buildstr(char c, int n)
{
  char* pstr = new char[n + 1];
  pstr[n] = '\0';         // terminate string
  while (n-- > 0)
    pstr[n] = c;        // fill rest of string
  return pstr;
}
/* ------  RESULT  -------

*/