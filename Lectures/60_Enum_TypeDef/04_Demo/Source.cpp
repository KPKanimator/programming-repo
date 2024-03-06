/*
 * Author: Kirill Korobchinsky
 *
 *
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

//typedef enum
//{
//  Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday
//} Weekday;

/*
enum Weekday
{
	Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday
};
*/
//


int main()
{
#pragma region Ukranian
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Ukrainian");
#pragma endregion

	enum Weekday
	{
		Weekday_First = 0,
		Sunday = 0, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Weekday_Last = Saturday, Weekdays
	} current;

	Weekday today = Monday;
	// или так
	//enum Weekday current; // В C++ enum можно опустить

	current = (Weekday)(10 % Weekdays);

	//if (current<Weekday_First || current>Weekday_Last)
	//{
	//  // Обработка некорректного значения ...
	//}
	//else {
	switch (current)
	{
	case Sunday:
		cout << "Sunday\n";
		break;
	case Monday:
		cout << "Monday\n";
		break;
	case Tuesday:
		cout << "Tuesday\n";
		break;
	case Wednesday:
		cout << "Wednesday\n";
		break;
	case Thursday:
		cout << "Thursday\n";
		break;
	case Friday:
		cout << "Friday\n";
		break;
	case Saturday:
		cout << "Saturday\n";
		break;
	default:
		cout << "Вы ввели некорректное значение :(" << endl;
		break;
	}


	//}

	system("pause>nul");
	return EXIT_SUCCESS;
}

/* ------  RESULT  -------
Вы ввели некорректное значение :(

Friday

*/