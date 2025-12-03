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
  double y = 0;
  const double TOPX = 2.;
  const double DOWNX = -2.;
  const double STEP = 0.5;
  int counter = 0;

  cout << "-----------------\n";
  cout << "n\tx\ty\n";
  cout << "-----------------\n";
  //for (double x = DOWNX, int count = 0; x < TOPX; x += STEP, count++)
  for (double x = DOWNX; x <= TOPX; x += STEP, ++counter)
  {
    // вывести чётные итерации
    if (counter % 6 == 0 and counter != 0)
    //  break;
    continue;
    y = -2.4 * x * x + 5 * x - 3;
    cout << counter + 1 << "\t" << x << "\t" << y << endl;
  }
  cout << "-----------------\n";
  
  
  system("pause>nul");
  return EXIT_SUCCESS;
}

/* ------  RESULT  -------

*/