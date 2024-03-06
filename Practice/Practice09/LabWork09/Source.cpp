/*
 *
 * Date: //2023
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
	const int N = 10;
	int a[N][N];
	// ≥н≥ц≥ал≥зац≥€ масиву
	srand(static_cast<unsigned int>(time(nullptr)));
	for (size_t i = 0; i < N; i++)
		for (size_t j = 0; j < N; j++)
			a[i][j] = rand() % 21 - 10;
	// пошук м≥н та макс
	size_t imin = 0, jmin = 0, imax = 0, jmax = 0;
	for (size_t i = 0; i < N; i++)
		for (size_t j = 0; j < N; j++)
		{
			// пошук максимального значенн€
			if (a[i][j] > a[imax][jmax])
			{
				imax = i;
				jmax = j;
			}
			// пошук м≥н≥мального значенн€
			if (a[i][j] < a[imin][jmin])
			{
				imin = i;
				jmin = j;
			}
		}
	// output source matrix and result
	cout << "ћатриц€: \n";
	for (size_t i = 0; i < N; i++)
	{
		for (size_t j = 0; j < N; j++)
			cout << a[i][j] << "  ";
		cout << endl;
	}
	cout << "Minimum: " << a[imin][jmin] << endl;
	cout << "Maximum: " << a[imax][jmax] << endl;
	cout << "–≥зниц€: " << a[imax][jmax] - a[imin][jmin] << endl;


	system("pause>nul");
	return EXIT_SUCCESS;
}

/* ------  RESULT  -------
ћатриц€:
7  -9  -9  -3  4  -6  -8  -9  -10  9
-1  -5  2  9  5  -9  -9  2  -1  2
0  -2  -4  5  -5  -4  -6  2  0  1
7  -8  -8  -10  4  10  4  7  -10  3
1  -9  -9  2  -2  6  -6  -2  -3  -7
-3  8  2  3  -7  -3  7  6  -5  5
-8  -10  8  -2  7  8  -5  -9  5  -5
8  9  -2  -7  -7  -10  -3  10  -9  -10
-10  -1  -4  1  1  7  5  3  3  1
0  -8  -8  -1  0  -9  -6  10  0  2
Minimum: -10
Maximum: 10
–≥зниц€: 20
*/

