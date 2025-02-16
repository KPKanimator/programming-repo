/* 
 * ���� ������� ����� ����. ������ ��'�� ���� �� ����� ���� ���� ��������.
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
	cout << "������� ������� ...." << endl;
	double a = 0;
	cout << "������, ���� ��c��, ������� ����� ���� a: ";
	cin >> a;
	double v = pow(a, 3);
	double s = 4 * a * a;
	cout << "���������: " << "\n\tV= "<< v << "\n\tS= " << s;
	system("pause>nul");
	return EXIT_SUCCESS;
}

/* ------  RESULT  -------
������� ������� ....
������, ���� ��c��, ������� ����� ���� a: 10
���������:
	V= 1000
	S= 400

*/

