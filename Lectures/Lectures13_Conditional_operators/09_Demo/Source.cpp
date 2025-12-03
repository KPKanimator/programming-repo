/*
 * Author: Kirill Korobchinsky
 * 
 * 
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
  
  cout << "Enter the day of the week number: " << endl;

  int day_number;
  cin >> day_number;

  switch (day_number)
  {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    {
      cout << "Working day." << endl;
      break;
    }
    case 6:
    case 7:
    {
      cout << "Day off." << endl;
      break;
    }
    default:
    {
      cout << "There is no such day of the week." << endl;
      break;
    }
  }
  
  system("pause>nul");
  return EXIT_SUCCESS;
}

/* ------  RESULT  -------

*/