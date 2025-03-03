/*
 *
 * Date: 11/10/2024
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
const char* SIGN = "\tПрактична робота #4. Виконав Кирил КОРОБЧИНСЬКИЙ\n\n";

int main()
{
#pragma region Ukranian
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Ukrainian");
#pragma endregion
	cout << SIGN;
	int int_a = 0, int_b = 0;
	cout << "Будь ласка, введіть 2 цілих значення: ";
	cin >> int_a >> int_b;
	cout << "\nЦілі значення (без формату):" << setw(55) << "Цілі значення(формат 4 позиції):\n" ;
	cout << setw(15) << "a = " << int_a << setw(50) << "a = " << setw(4) << int_a << endl;
	cout << setw(15) << "b = " << int_b << setw(50) << "b = " << setw(4) << int_b << endl;


	system("pause>nul");
	return EXIT_SUCCESS;
}

/* ------  RESULT  -------


*/

