/*
 * Author: Kirill Korobchinsky
 * 
 * Functions VS Manipulators
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
	// sets the width of the field
	cout.width(80);
	// sets the character placeholder, defaults character placeholder - space
	cout.fill('*');
	cout << right << "Hello, Kirill!" << endl;

	cout << fixed;
	double x = 1e-3; // 10^-3
	cout << "\tx = " << x << endl;

	cout.precision(3);
	cout << "\tx = " << x << endl;
	x = 1454.235656549789;
	cout << "\tx = " << x << endl;

	bool b = true;
	cout << "\tb = " << b << endl;
	cout.setf(ios::boolalpha);
	cout << "\tb = " << b << endl;
	cout << "\tb = " << boolalpha << b << endl;

  
  
  system("pause>nul");
  return EXIT_SUCCESS;
}

/* ------  RESULT  -------
******************************************************************Hello, Kirill!
				x = 0.001000
				x = 0.001
				x = 1454.236
				b = 1
				b = true
				b = true

*/