/*
 * Author: Kirill Korobchinsky
 * 
 * Sizeof & Save settings precision
 */
#define _USE_MATH_DEFINES

#pragma region Includes
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <locale>
#include "windows.h"
#include <iomanip>
using namespace std;
#pragma endregion

int main()
{
#pragma region Ukranian
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Ukrainian");
#pragma endregion
  char n;
  cout << "n = ";
  cin >> hex >> n;
  cout << n << endl;
  cout << hex << "Hello " << n << endl;

  cout << "         sizeof(char) = " << sizeof(char) << endl;
  cout << "    sizeof(short int) = " << sizeof(short int) << endl;
  cout << "          sizeof(int) = " << sizeof(int) << endl;
  cout << "     sizeof(long int) = " << sizeof(long int) << endl;
  cout << "sizeof(long long int) = " << sizeof(long long int) << endl;

  double x = 1.6666666;
  double y = 1.6666666;
  streamsize ss = cout.precision(); // save settings
  cout << setprecision(ss) << x << " " << fixed << setprecision(2) << x << endl;
  cout.unsetf(ios::fixed);
  cout << setprecision(ss) << y << " " << fixed << setprecision(2) << y;

  
  
  system("pause>nul");
  return EXIT_SUCCESS;
}

/* ------  RESULT  -------
n = a
a
Hello a
         sizeof(char) = 1
    sizeof(short int) = 2
          sizeof(int) = 4
     sizeof(long int) = 4
sizeof(long long int) = 8
1.66667 1.67
1.66667 1.67

*/