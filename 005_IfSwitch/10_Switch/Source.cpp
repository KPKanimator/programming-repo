#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	cout << "Введите номер дня недели: " << endl;

	int dayNumber;
	cin >> dayNumber;

	switch (dayNumber)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
	{
		cout << "Рабочий день." << endl;
		break;
	}
	case 6:
	case 7:
	{
		cout << "Выходной день." << endl;
		break;
	}
	default:
	{
		cout << "Такого дня недели не существует." << endl;
		break;
	}
	}
	system("PAUSE");
	return 0;
}