#include "header.hpp"
#include <iostream>

void verify_is()
{
	using namespace std;
	char ch = 'A';

	bool result = isalpha(ch);				// функция проверяет, является ли параметр буквой

	cout << boolalpha << result << endl;

	ch = '\r';
	result = iscntrl(ch);					// функция проверяет, является ли символ управляющей последовательностью
	cout << boolalpha << result << endl;

	ch = '1';
	result = isdigit(ch);					// функция проверяет, является ли символ числом
	cout << boolalpha << result << endl;

	ch = 'q';
	result = islower(ch);					// функция проверяет, находится ли символ в нижнем регистре
	cout << boolalpha << result << endl;

	result = isupper(ch);					// функция проверяет, находится ли символ в верхнем регистре
	cout << boolalpha << result << endl;

	ch = ',';
	result = ispunct(ch);					// функция проверяет, является ли символ, символом пунктуации
	cout << boolalpha << result << endl;

	ch = '\t';
	result = isspace(ch);					//функция проверяет, является ли символ пробельным
	cout << boolalpha << result << endl;

	ch = tolower('A');						// функция преобразовывает символ в верхнем регистре в символ в нижнем регистре
	cout << ch << endl;

	ch = toupper(ch);						// функция преобразовывает символ в нижнем регистре  в символ в верхнем регистре
	cout << ch << endl;

	return;
}
