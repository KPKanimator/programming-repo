/*
 *
 * Date: 22/11/2024
 * Author: Kirill Korobchinsky
 */
#define _USE_MATH_DEFINES

#pragma region Includes
#include <iostream>
#include <iomanip>
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
	const int N = 5;
	double x = 0.2;
	const double X_END = 1, X_STEP = 0.2, EPS = 1E-4;
	double q = 0, s = 0.0, a_n = 0, a_n1 = 0;
	int i = 0;

	cout << "   N " << "\tX " << "\ta(i) " << "\t\tS " << endl;

	while (x <= X_END)
	{
		s = a_n1 = -1;
		i = 1;
		do
		{
			q = -(x * x * (2 * pow(i - 1, 2) + 1)) / (2 * i * i + 1);
			a_n = a_n1 * q;
			s += a_n;
			a_n1 = a_n;
			i++;
		} while (abs(a_n) > EPS);
		cout << "   " << i << " \t" << setw(2) << setprecision(1) << x;
		cout << " \t" << setw(10) << setprecision(8) << fixed << a_n;
		cout << " \t" << setw(10) << setprecision(8) << fixed << s << endl;
		x += X_STEP;
	}

	system("pause>nul");
	return EXIT_SUCCESS;
}

/* ------  RESULT  -------
	 N    X       a(i)            S
	 4    0.2     0.00000337      -0.98684108
	 5    0.4     -0.00001986     -0.94931539
	 7    0.6     -0.00002982     -0.89236465
	 11   0.8     -0.00005736     -0.82202151
	 72   1.0     0.00009918      -0.74373979

*/

