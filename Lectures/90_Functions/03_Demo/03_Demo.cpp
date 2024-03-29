/*
 * Author: Kirill Korobchinsky
 *
 * Overload
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

void Operation();									// 1-� ����������.
void Operation(string value);						// 2-� ����������.
void Operation(string value1, int value2);			// 3-� ����������
void Operation(string val1, int val2, double val3);	// 4-� ����������.

int main()
{
#pragma region Ukranian
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Ukrainian");
#pragma endregion
	Operation();                  // 1-� ����������.
	Operation("val");             // 2-� ����������.
	Operation("val", 10);         // 3-� ����������. 
	Operation("val", 10, 12.2);   // 4-� ����������.

	system("pause>nul");
	return EXIT_SUCCESS;
}

void Operation()
{
	Operation("val", 10, 12.2);
}
void Operation(string value1)
{
	Operation(value1, 10, 12.2);
}
void Operation(string value1, int value2)
{
	Operation(value1, value2, 12.2);
}
void Operation(string val1, int val2, double val3)
{
	cout << val1 << " " << val2 << " " << val3 << endl;
}

/* ------  RESULT  -------

*/

