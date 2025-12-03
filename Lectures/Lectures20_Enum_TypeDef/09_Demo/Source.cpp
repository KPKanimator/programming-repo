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
	// запускаем генератор случайных чисел
	srand(static_cast<unsigned int>(time(0)));
	// случайное число в диапазоне от 1 до 100
	int secretNumber = rand() % 100 + 1;
	int tries = 0;
	int guess;
	cout << "\tWelcome to Guess My Number\n\n";

	do {
		cout << "Enter a guess: ";
		cin >> guess;
		++tries;
		if (guess > secretNumber)
		{
			cout << "Too high!\n\n";
		}
		else
			if (guess < secretNumber)
			{
				cout << "Too low!\n\n";
			}
			else
			{
				cout << "\nThat's it! You got it in " << tries << " guesses!\n";
			}
	} while (guess != secretNumber);


	system("pause>nul");
	return EXIT_SUCCESS;
}

/* ------  RESULT  -------

*/