/*
 * Author: Kirill Korobchinsky
 * 
 * continue
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
	int count = 15;

	for (int i = 0; i < count; i++)
	{
		cout << "Iteration " << i << endl;

		if(i % 2 == 0)
			continue;	// This instruction stops the execution of the current iteration, 
								// and transfers control to the counter change section

		cout << "This line is never executed \n";
	}

	cout << "This line is always executed";
  
  
  system("pause>nul");
  return EXIT_SUCCESS;
}

/* ------  RESULT  -------

*/