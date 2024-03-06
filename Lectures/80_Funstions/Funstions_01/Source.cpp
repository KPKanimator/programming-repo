#include <iostream>
#include <stdlib.h>
#include <locale>
#include "windows.h"
using	namespace std;

void input_x(int& x);
void output_x(int x);

int main()
{
#pragma region Ukranian
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Ukrainian");
#pragma endregion
	int x = 100;

	input_x(x);
	output_x(x);

	system("pause>nul");
	return EXIT_SUCCESS;
}

void input_x(int& formail_parametr)
{
	cout << "Будь ласка введіть значення х: ";
	cin >> formail_parametr;
}

void output_x(int formail_parametr)
{
	cout << "Значення х: " << formail_parametr << endl;
}