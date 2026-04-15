/*
 * Author: Kirill Korobchinsky
 * 
 * 
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

	char str1[] = "Hello world!";
	char* p = strchr(str1, 'w');
	cout << *p << endl;
	cout << p << endl;

	cout << boolalpha << (str1[6] == *p) << endl;
  
  system("pause>nul");
  return EXIT_SUCCESS;
}

/* ------  RESULT  -------

*/