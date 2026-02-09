/*
 * Author: Kirill Korobchinsky
 *
 *
 */
#define _USE_MATH_DEFINES

#pragma region Includes
#include <iostream>
#include <fstream>
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
	double a;
	ifstream file_in; // створюємо потік введення
	file_in.open("file.in"); // відкриваємо файл
	if (file_in) // файл відкрито успішно?
	{ // якщо так, то читаємо значення з файлу
		file_in >> a;
		file_in.close(); // закриваємо файл
		// виводимо на консоль значення змінної
		cout << a << endl;
	}
	else // якщо ні, то виводимо повідомлення про помилку
		cerr << "Помилка відкриття файлу" << endl;

#pragma region Console
	cout << "Write to screen tms" << endl;
	int b = 0;
	cin >> b;
	cout << "b is " << b << endl;
#pragma endregion

#pragma region File
	// чтение из файла
	ifstream fin("input.txt");
	fin >> b;
	cout << "Data from file is " << b << endl;
	fin.close();
	// запись в файл
	ofstream fout("file_name.txt");
	fout << "Write to screen tms" << endl;
	fout.close();
#pragma endregion

	system("pause>nul");
	return EXIT_SUCCESS;
}

/* ------  RESULT  -------

*/