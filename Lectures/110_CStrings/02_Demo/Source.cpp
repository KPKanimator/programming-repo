/*
 * Author: Kirill Korobchinsky
 * 
 * array of characters
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
	// The compiler splits the string into an array of characters
	char str1[16] = "I write in C++!";
	cout << str1 << endl;

	// The compiler itself counts the number of characters in a string and initializes the array
	char str2[] = "And I like it!";
	cout << str2 << endl;
  
	//////////////////////////////////////////////////////////////////////////

	char _char = 'Q'; // An ordinary character, the compiler will assign the numeric code of this character to the _char variable
	cout << _char << " " << (int)_char << endl;
	//char str = "Q"; // Not allowed!
  
  system("pause>nul");
  return EXIT_SUCCESS;
}

/* ------  RESULT  -------

*/