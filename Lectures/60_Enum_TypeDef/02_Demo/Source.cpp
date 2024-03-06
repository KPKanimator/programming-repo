/*
 * Author: Kirill Korobchinsky
 * 
 * using enum
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
// create named constants for 0 - 6
enum { red, orange, yellow, green, blue, violet, indigo };

int main()
{
#pragma region Ukranian
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Ukrainian");
#pragma endregion
  cout << "Enter color code (0-6): ";
  int code;
  cin >> code;
  while (code >= red && code <= indigo)
  {
    switch (code)
    {
    case red: cout << "Her lips were red.\n"; break;
    case orange: cout << "Her hair was orange.\n"; break;
    case yellow: cout << "Her shoes were yellow.\n"; break;
    case green: cout << "Her nails were green.\n"; break;
    case blue: cout << "Her sweatsuit was blue.\n"; break;
    case violet: cout << "Her eyes were violet.\n"; break;
    case indigo: cout << "Her mood was indigo.\n"; break;
    }
    cout << "Enter color code (0-6): ";
    cin >> code;
  }
  cout << "Bye\n";
  
  system("pause>nul");
  return EXIT_SUCCESS;
}

/* ------  RESULT  -------
Enter color code (0-6): 2
Her shoes were yellow.
Enter color code (0-6): 3
Her nails were green.
Enter color code (0-6): 9
Bye




*/