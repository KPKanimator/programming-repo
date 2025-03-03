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
	const double X = 0.7;
	double q = 0, s = -1, a_n = 0, a_n1 = -1;

	cout << "   i " << "\tq " << "\ta(i) " << "\tS " << endl;
	cout << "   0" << "\t ---- " << "\t ---- " << " " << s << " " << endl;
	//cout << "   0" << " ---- " << " ------ " << " " << s << " " << endl;
	for (size_t i = 1; i <= N; i++)
	{
		q = - (X*X*(2*pow(i-1,2)+1)) / (2 * i * i + 1);
		a_n = a_n1 * q;
		s += a_n;
		cout << "   " << i << " " << setprecision(4) << q << " " << setprecision(4) << a_n << " " << setprecision(4) << s << " " <<endl;
		a_n1 = a_n;
	}

	system("pause>nul");
	return EXIT_SUCCESS;
}

/* ------  RESULT  -------
	 i    q       a(i)    S
	 0     ----    ----  -1
	 1 -0.1633 0.1633 -0.8367
	 2 -0.1633 -0.02668 -0.8633
	 3 -0.2321 0.006192 -0.8572
	 4 -0.2821 -0.001747 -0.8589
	 5 -0.3171 0.0005539 -0.8583

*/

