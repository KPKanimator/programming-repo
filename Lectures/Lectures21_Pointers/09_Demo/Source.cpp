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
	cout << "Author: Kirill Korobchinsky" << endl;
	cout << "Practice #8, var 9." << endl;
	cout << endl;

	double A = 5.5;
	const int N = 10;
	double y[N] = { 0 }; // 0..N-1
	double x = 0;
	for (int i = 1; i <= N; i++)
	{
		x = -(sin(i) / A);
		if (x < 0)
			y[i] = exp(x);
		if (x == 0)
			y[i] = acos(0.65);
		if (x > 0)
			y[i] = pow(y[i], 1.0 / 3.0);
		cout << y[i] << endl;
	}
  
  system("pause>nul");
  return EXIT_SUCCESS;
}

/* ------  RESULT  -------

*/