/* TODO: ������� ���� ��������
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
	cout << "������� ������� ...." << endl;
	double x = 0, y = 0;
	bool z;

	// TODO: ����������� ...
	cout << "������ ���� ��c�� x �� y: ";
	cin >> x >> y;
	//z = -y >= x && y >= x * x + 1 || y > 0;
	z = -y >= x and y >= x * x + 1 or y > 0;
	cout << "���������: " << boolalpha << z;

	int t=0;
	//....
	int k = ++t;

	system("pause>nul");
	return EXIT_SUCCESS;
}

/* ------  RESULT  -------
������� ������� ....
������ ���� ��c�� x �� y: 1 2
���������: true


*/

