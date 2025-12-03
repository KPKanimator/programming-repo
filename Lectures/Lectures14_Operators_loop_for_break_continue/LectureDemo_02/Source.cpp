/*
 * Author: Kirill Korobchinsky
 *
 * Ввести значення від a .. b, та рорахувати i * j, та i / j ціх чисел з кром 1.5
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
  double a = 0, b = 10, muli = 0;
  const double STEP = 1;
  const double STOP_VALUE = 7;

  cout << "\ta= " << a << "\tb= " << b << endl;
  for (double i = a; i <= b; i += STEP) // 4 5 6
  {
    if(i == STOP_VALUE) 
      break;

    // static_cast => double -> int
    if(static_cast<int>(i) % 2 == 0) 
      continue;
    muli = i * i;
    cout << "  " << i << " " << muli << " " << muli*i << endl; // 5 25 125
  }

  system("pause>nul");
  return EXIT_SUCCESS;
}

/* ------  RESULT  -------

*/