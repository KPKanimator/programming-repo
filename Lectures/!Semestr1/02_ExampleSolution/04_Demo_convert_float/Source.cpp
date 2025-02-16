/*
 *
 * Author: Kirill Korobchinsky
 */
#define _USE_MATH_DEFINES

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
  //float fval1 = 3.0, fval2 = 10.;
  //int ival = fval1 + fval1 / fval2;
  //cout << ival;

  int a = 3, b = 10;
  float f = 0.f;
  float d = 3.5F;
  f = d + (float)a / b; // 3.5 + 0.3 = 3.8
  cout << "f = " << f << endl;

  system("pause>nul");
  return EXIT_SUCCESS;
}

/* ------  RESULT  -------
f = 3.8

*/