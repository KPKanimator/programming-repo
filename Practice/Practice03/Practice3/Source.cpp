/*
 *
 * Date: 25/09/2023
 * Author: Kirill Korobchinsky
 */
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
	std::cout << "My name is Kirill Korobchinskiy";
	std::cout << ", 315 gr.";
	std::cout << std::endl;
	// оголошення заданих змінних
	int a = 12;
	float b = 13.4f;
	char c = 'y';
	bool d = true;
	bool f = (bool)124;
	// виведення на консоль
	std::cout << "int a=" << a << std::endl;
	std::cout << "float b=" << b << std::endl;
	std::cout << "char c=" << c << std::endl;
	std::cout << "bool d=" << d << std::endl;

	system("pause>nul");
	return EXIT_SUCCESS;
}

/* ------  RESULT  -------
My name is Kirill Korobchinskiy, 315 gr.
int a=12
float b=13.4
char c=y
bool d=1


*/

