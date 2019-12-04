#include <iostream>

using namespace std;

int main()
{
	int a = 2, b = 3, c;
	c = (a > b) ? a : b;        // ЕСЛИ: a > b ТО: вернуть а ИНАЧЕ вернуть b
	cout << c << endl;

	/*
	if(a > b)
	{
	c = a;
	}
	else
	{
	c = b;
	}
	*/

	cin.get();
	return 0;
}
