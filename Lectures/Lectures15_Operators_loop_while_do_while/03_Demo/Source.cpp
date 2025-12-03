/*
 * Author: Kirill Korobchinsky
 * 
 * 
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

int main()
{
#pragma region Ukranian
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Ukrainian");
#pragma endregion
  string str = "Guess the color in 5 attempts.";

	int maxAttempt = 5; // Allowed number of retries
	int attempt = 0; // Current attempt number
	string color="red"; // Intended color

	while (attempt < maxAttempt) 
	{
		attempt++;
		cout << str << " Attempt " << attempt << endl;
		string value = "";
		cin >> value;

		if (value == "")
		{
			break;
		}
		if (value != color)
		{
			str = "You guessed it wrong!";
			continue;
		}

		cout << "Congratulations, you guessed right with " << attempt << " attempts!" <<endl;
		break;
	}
  
  
  system("pause>nul");
  return EXIT_SUCCESS;
}

/* ------  RESULT  -------

*/