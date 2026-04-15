/*
 * Author: Kirill Korobchinsky
 * 
 * strcat_s - the function concatenates strings by writing the second parameter to the first.
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

	char str1[20] = "Hello";
	char str2[] = " world!";
	strcat_s(str1, str2);

	cout << str1 << endl;
  
  system("pause>nul");
  return EXIT_SUCCESS;
}

/* ------  RESULT  -------

*/