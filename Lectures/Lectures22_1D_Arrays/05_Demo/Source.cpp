/*
 * Author: Kirill Korobchinsky
 *
 * Задача:
 */
#define _USE_MATH_DEFINES

#pragma region Includes
#include <iostream>
#include <iomanip>
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
	int n = 100;

	// y = x ^2  for x < 0
	// y = sqrt (x)    for x >= 0
	double x = 0, y = 0;

	if (x < 0) // -*************------*-------
		y = x * x; //            0      1    
	if (x == 1) 
		y = sqrt(x);


	if (x < 0) 
		y = x * x;
	else 
		y = sqrt(x);


	int* ptr = new int{0};
	*ptr = 1;
	cout << *ptr;
	delete (ptr);

	int* ptr_arr = new int[10] {0};
	cout << ptr_arr[0];

	delete [] ptr_arr;

	system("pause>nul");
	return EXIT_SUCCESS;
}

/* ------  RESULT  -------

*/

