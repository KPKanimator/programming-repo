/* TODO: Зробити опис програми
 * Practice 05
 * Date: 29/10/2024
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
	double x = 0, y = 0;
	bool z;

	// TODO: Нагадування ...
	cout << "Введіть будь лаcка x та y: ";
	cin >> x >> y;
	//z = -y >= x && y >= x * x + 1 || y > 0;
	z = -y >= x and y >= x * x + 1 or y > 0;
	cout << "Результат: " << boolalpha << z;

	int t=0;
	//....
	int k = ++t;

	system("pause>nul");
	return EXIT_SUCCESS;
}

/* ------  RESULT  -------
Виконав студент ....
Введіть будь лаcка x та y: 1 2
Результат: true


*/

