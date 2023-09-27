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
	char _char[] = "char\n";
	int _int = 20;
	int negative_int = -10;
	double _double = 123.54;
	float zero_float = 0.0f;

	//======== работаем с выравниванием ========\\
	cout<<"Работаем с выравниванием\n";
	//устанавливаем ширину поля вывода
	cout.width(20);
	//устанавливаем символ заполнитель(по умолчанию - пробел)
	cout.fill('$');
	//флаг форматирования при котором знак числа выводится по левому краю,
	//число — по правому. Промежуток заполняется символами заполнителя
	cout.setf(ios::internal);
	cout << negative_int << endl;

	//устанавливаем ширину поля вывода
	std::cout.width(50);
	//устанавливаем символ заполнитель(по умолчанию - пробел)
	std::cout.fill('/');
	//выравниваем по правому краю поля
	std::cout.setf(std::ios::left);
	std::cout << _char << std::endl;


	//======== выводим в разных системах исчисления ========\\
	std::cout<<"Выводим в разных системах исчисления\n";
	//восьмеричная система счисления
	std::cout.flags(std::ios::oct);
	std::cout << _int << std::endl;
	//десятичная система счисления
	std::cout.flags(std::ios::dec);
	std::cout << _int << std::endl;
	//шестнадцатеричная система счисления
	std::cout.flags(std::ios::hex);
	std::cout << _int << std::endl;
	//задаем основание системы счисления (8, 16, 10 или 0)
	//по умолчанию 0 - это десятичное, кроме случаев, когда вводятся 8- или
	//16-ричные числа. Здесь к примеру основание 8
	std::cout << std::setbase(8) << " " << _int << std::endl;
	//P.S. флаги dec, oct и hex не могут быть установлены одновременно.




	system("pause>nul");
	return EXIT_SUCCESS;
}

/* ------  RESULT  -------



*/





