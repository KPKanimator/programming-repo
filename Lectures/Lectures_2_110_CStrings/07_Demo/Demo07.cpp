/*
 * Author: Kirill Korobchinsky
 * 
 * The function performs a string comparison.
 */
#pragma region Includes
#include <iostream>
#include <cstring>
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
  
	char str1[] = "Hello";
	char str2[] = " world!";
	char str3[] = "Hello";

	// Возвращает 0, если строки совпадают, 
	// -1, если первая меньше второй 
	// 1, если первая больше второй.
	int res = strcmp(str1, str3);

	switch (res)
	{
	case 0:
		cout << "The string is equal!" << endl;
		break;
	case -1:
		cout << "First string is less than second!" << endl;
		break;
	case 1:
		cout << "First string is more than second!" << endl;
		break;
	}
  
  system("pause>nul");
  return EXIT_SUCCESS;
}

/* ------  RESULT  -------

*/