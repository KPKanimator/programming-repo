/*
 * Author: Kirill Korobchinsky
 * 
 * is functions ...
 */
#define _USE_MATH_DEFINES

#pragma region Includes
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <locale>
#include "windows.h"
#include "header.hpp"
#include "UseFile.hpp"
using namespace std;
#pragma endregion

// Write Only Number
void use_function()
{
	char number;

	while (true)
	{
		cout << "Enter the digit symbol" << endl;
		cin >> number;

		if (isdigit(number)) {
			cout << "User entered the number - " << number << endl;
			continue;
		}
		cout << "The " << number << " is not a digit! Try again!" << endl;
	}
}

int get_int_value(char); // прототип / prototype
const int GLOBAL_X = 20;
static int y = 30;

int main()
{
#pragma region Ukranian
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Ukrainian");
#pragma endregion
	//read_from_file("file.txt");
	//verify_is();
	//use_function();
	int val = get_int_value('b');
	cout << "1. Function value: " << val << endl;
	cout << "2. Function value: " << get_int_value('c') << endl;
	val = GLOBAL_X;
	val = y;
	cout << "3. Function value: " << val << endl;
	
  system("pause>nul");
  return EXIT_SUCCESS;
}

// реалізація функції
int get_int_value(char ch = 'a')
{

	int x = GLOBAL_X + (int)ch;
	x = y;
	return x;
}


/* ------  RESULT  -------

*/