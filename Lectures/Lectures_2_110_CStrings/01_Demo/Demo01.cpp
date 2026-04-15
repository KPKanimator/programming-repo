/*
 * Author: Kirill Korobchinsky
 *
 * String ot not strings
 * 'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', '.'
 */
#pragma region Includes
#include <iostream>
//#include <cstring>
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
	using namespace std;
	// This is not a string
	char first_string[12] = { 'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', '.' };

	// This is a string
	char second_string[] = { 'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', '.' , '\0'};

	cout << "Second_string length = " << strlen(second_string) << endl;
	cout << second_string << endl;

	//cout << first_string << endl; // Uncomment!

	system("pause>nul");
	return EXIT_SUCCESS;
}

/* ------  RESULT  -------

*/