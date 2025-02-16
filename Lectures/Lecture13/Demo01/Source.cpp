/*
 *
 * Date: 15/11/2024
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

void menu()
{
	cout << "�������� 1: ��������� 1\n";
	cout << "�������� 2: ��������� 2\n";
	cout << "�������� 3: ��������� 3\n";
	cout << "��� ������ ��������� 0\n";
}

int main()
{
#pragma region Ukranian
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Ukrainian");
#pragma endregion
	int item_menu = 0;
	do
	{
		menu();
		cout << "������ ����� ��������: ";
		cin >> item_menu;
		double a, b, c, d = 0, e = 0;

		switch (item_menu)
		{
		case 0:
			return EXIT_SUCCESS;
		case 1:
			cout << "Item 1\n";
			cout << "������ ������� ����������: ";
			cin >> a >> b >> c;
			if (a > b and a > c)
			{
				d = a * a;
				e = pow(b, 2) + pow(c, 2);
			}
			else if (b > a and b > c)
			{
				d = b * b;
				e = pow(a, 2) + pow(c, 2);
			}
			else
			{
				d = c * c;
				e = pow(a, 2) + pow(b, 2);
			}
			cout << (d == e ? "��������� - �����������" : "��������� - ��������");
			break;
		case 2:
			cout << "Item 2\n";
			break;
		case 3:
			cout << "Item 3\n";
			break;
		default:
			cout << "default\n";
			break;
		}
		system("pause>nul");
		system("cls");
	} while (true);
	return EXIT_SUCCESS;
}

/* ------  RESULT  -------


*/

