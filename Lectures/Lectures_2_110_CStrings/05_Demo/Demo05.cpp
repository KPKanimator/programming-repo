/*
 * Author: Kirill Korobchinsky
 * 
 * strcpy_s
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
	char ñolor[10];
	char copy_color[10];

	cout << "Enter your favorite color: ";
	cin.getline(ñolor, 10);

	strcpy_s(copy_color, ñolor);

	cout << "Color : " << ñolor << endl;
	cout << "Copy color : " << copy_color << endl;

	char str[10] = "dark gray";		
	//char str[15] = "light gray";  // Leads to memory corruption!

	//strcpy(copy_color, str);
	strcpy_s(copy_color, str);

	cout << "Now copy_color equals " << copy_color << endl;
  
  
  system("pause>nul");
  return EXIT_SUCCESS;
}

/* ------  RESULT  -------

*/