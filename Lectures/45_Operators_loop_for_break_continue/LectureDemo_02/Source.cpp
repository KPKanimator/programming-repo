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
	double a = -3, b = 6;
	const double STEP = 1.5;

	for (double i = a; i < b; i+=STEP)
	{
		for (double j = a; j < b; j+=STEP)
		{
			if (j == 0)
				//break;
				continue;
			cout << i << "\t" << j << "\t" << i * j << "\t" << i / j << endl;
		}
	}



	system("pause>nul");
	return EXIT_SUCCESS;
}

/* ------  RESULT  -------
-3      -3      9       1
-3      -1.5    4.5     2
-3      1.5     -4.5    -2
-3      3       -9      -1
-3      4.5     -13.5   -0.666667
-1.5    -3      4.5     0.5
-1.5    -1.5    2.25    1
-1.5    1.5     -2.25   -1
-1.5    3       -4.5    -0.5
-1.5    4.5     -6.75   -0.333333
0       -3      -0      -0
0       -1.5    -0      -0
0       1.5     0       0
0       3       0       0
0       4.5     0       0
1.5     -3      -4.5    -0.5
1.5     -1.5    -2.25   -1
1.5     1.5     2.25    1
1.5     3       4.5     0.5
1.5     4.5     6.75    0.333333
3       -3      -9      -1
3       -1.5    -4.5    -2
3       1.5     4.5     2
3       3       9       1
3       4.5     13.5    0.666667
4.5     -3      -13.5   -1.5
4.5     -1.5    -6.75   -3
4.5     1.5     6.75    3
4.5     3       13.5    1.5
4.5     4.5     20.25   1
*/