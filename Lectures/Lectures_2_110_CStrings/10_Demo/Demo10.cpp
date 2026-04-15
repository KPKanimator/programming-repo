/*
 * Author: Kirill Korobchinsky
 *
 * devide string on substrings
 */
#define _USE_MATH_DEFINES

#pragma region Includes
#include <iostream>
#include <string>
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
	const char* BIN_STR = "11110001110000001111";
	int bin_str_lenght = static_cast<int>(strlen(BIN_STR));
	char* substring = new char[bin_str_lenght];
	int i = 0;
	char ch = BIN_STR[0];
	while (BIN_STR[i] != '\0')
	{
		int k = 0;
		while (BIN_STR[i] == ch || i == bin_str_lenght)
		{
			substring[k++] = BIN_STR[i++];
		}
		substring[k] = '\0';

		if (strlen(substring) % 2 == 0)
			cout << substring << endl;
		substring[0] = '\0';
		ch = (ch == '1') ? '0' : '1';
	}


	system("pause>nul");
	return EXIT_SUCCESS;
}

/* ------  RESULT  -------

*/