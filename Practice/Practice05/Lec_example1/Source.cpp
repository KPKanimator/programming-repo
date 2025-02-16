/* 
 * Дано довжину ребра куба. Знайти об'єм куба та площу його бічної поверхні.
 * Date: 01/11/2024
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
	cout << "Виконав студент ...." << endl;
	double a = 0;
	cout << "Введіть, будь лаcка, довжину ребра куба a: ";
	cin >> a;
	double v = pow(a, 3);
	double s = 4 * a * a;
	cout << "Результат: " << "\n\tV= "<< v << "\n\tS= " << s;
	system("pause>nul");
	return EXIT_SUCCESS;
}

/* ------  RESULT  -------
Виконав студент ....
Введіть, будь лаcка, довжину ребра куба a: 10
Результат:
	V= 1000
	S= 400

*/

