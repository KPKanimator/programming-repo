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
const char* SIGN = "\t��������� ������ #4. ������� ����� �������������\n\n";

int main()
{
#pragma region Ukranian
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Ukrainian");
#pragma endregion
	cout << SIGN;
	int int_a = 0, int_b = 0;
	cout << "���� �����, ������ 2 ����� ��������: ";
	cin >> int_a >> int_b;
	cout << "\nֳ� �������� (��� �������):" << setw(55) << "ֳ� ��������(������ 4 �������):\n" ;
	cout << setw(15) << "a = " << int_a << setw(50) << "a = " << setw(4) << int_a << endl;
	cout << setw(15) << "b = " << int_b << setw(50) << "b = " << setw(4) << int_b << endl;


	system("pause>nul");
	return EXIT_SUCCESS;
}

/* ------  RESULT  -------


*/

