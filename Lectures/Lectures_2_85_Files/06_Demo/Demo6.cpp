/*
 * Author: Kirill Korobchinsky
 *
 *	C++ program to demonstrate 
 *	handling errors when working with files
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
	// Відкриття вхідного файлу in.txt
	ifstream in("in.txt"); // Визначаємо змінну in
	if (!in.is_open()) // Успішне відкриття?
	{
		cout << "Помилка: файл in.txt не існує" << endl;
		return -1;
	}
	int a, b, c;
	// Введення трьох цілих чисел з файлу
	in >> a >> b >> c;
	if (in.fail()) // Чи немає помилки
	{
		return -2;
	}
	cout << "Прочитані числа: " << a << ", ";
	cout << b << ", " << c << endl;
	// Відкриття вихідного файлу out.txt
	ofstream out("out.txt");
	// Визначаємо змінну out
	if (!out.is_open())
	{
		cout << "Помилка: не вдається записати";
		cout << "файл out.txt" << endl;
		return -3;
	}
	// Виведення a+b+c=sum в вихідний файл  
	out << a << "+" << b << "+" << c << "=" << a + b + c << endl;
	cout << "Програма успішно завершена!" << endl;


	system("pause>nul");
	return EXIT_SUCCESS;
}

/* ------  RESULT  -------

*/