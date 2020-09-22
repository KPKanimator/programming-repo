#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	cout << "Выберите один из пунктов меню: " << endl;
	cout << "1. Создать файл." << endl;
	cout << "2. Сохранить файл." << endl;
	cout << "3. Завершить программу." << endl;

	char action;
	cin >> action;

	switch (action)
	{
	case '1':
	{
		cout << "Создан новый файл." << endl;
		break;
	}
	case '2':
	{
		cout << "Файл сохранен." << endl;
		break;
	}
	case '3':
	{
		cout << "До свидания!" << endl;
		break;
	}
	default:
	{
		cout << "Неверный выбор, попробуйте снова!";
		break;
	}
	}

	system("PAUSE");
	return 0;
}