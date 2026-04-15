/*
 * Author: Kirill Korobchinsky
 *
 * 
 */
#define _USE_MATH_DEFINES

#pragma region Includes
#include <iostream>
#include "windows.h"
using namespace std;
#pragma endregion

unsigned int c_in_str(const char* str, char ch);

int main()
{
#pragma region Ukranian
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Ukrainian");
#pragma endregion
  using namespace std;
  char mmm[15] = "minimum";    // string in an array
  // some systems require preceding char with static to
  // enable array initialization

  const char* wail = "ululate" ;    // wail points to string

  unsigned int ms = c_in_str(mmm, 'm');
  unsigned int us = c_in_str(wail, 'u');
  cout << ms << " m characters in " << mmm << endl;
  cout << us << " u characters in " << wail << endl;

	system("pause>nul");
	return EXIT_SUCCESS;
}
// this function counts the number of ch characters
// in the string str
unsigned int c_in_str(const char* str, char ch)
{
  unsigned int count = 0;

  while (*str)        // quit when *str is '\0'
  {
    if (*str == ch)
      count++;
    str++;        // move pointer to next char
  }
  return count;
}
/* ------  RESULT  -------

*/

