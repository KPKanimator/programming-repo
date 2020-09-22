#include <iostream>

int main()
{
	using namespace std;
	setlocale(LC_ALL, "rus");

	int a = 2, b = 2;

	if (a < b)
	{
		cout << "a < b" << endl;
	}
	else
	{
		if (a > b)
		{
			cout << "a > b" << endl;
		}
		else
		{
			cout << "a = b" << endl;
		}
	}

	cout << "Эта строка выполнится всегда!" << endl;

	cin.get();
	return 0;
}
