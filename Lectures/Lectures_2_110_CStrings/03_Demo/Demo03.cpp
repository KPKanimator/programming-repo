/*
 * Author: Kirill Korobchinsky
 * 
 * sizeof(string)
 */
#pragma region Includes
#include <iostream>
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
	char name[15];
	cout << "What's your name?" << endl;
	cin >> name;
	cout << "Your name is " << name << endl;
	cout << "Your name has " << strlen(name) << " symbols" << endl;
	cout << "And take " << strlen(name) * sizeof(char) << " bytes" << endl;
	cout << "--------------------------------------" << endl;
	cout << "Array has length " << sizeof(name) << " elements" << endl;
  
  system("pause>nul");
  return EXIT_SUCCESS;
}

/* ------  RESULT  -------

*/