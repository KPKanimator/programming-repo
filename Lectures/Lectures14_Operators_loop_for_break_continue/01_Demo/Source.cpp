/*
 * Author: Kirill Korobchinsky
 * 
 * count_rigth & count_left
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

	int count_rigth = 5;

	for (int i = 0; i < count_rigth; i++)
	{
		cout << "Iteration " << i << endl;
	}

	cout << "This line is always executed\n";


	int count_left = 0;

	for (int i = 5; i > count_left; i--)
	{
		cout << "Count " << i << endl;
	}
	cout << "This line is always executed";
 
  system("pause>nul");
  return EXIT_SUCCESS;
}

/* ------  RESULT  -------

*/