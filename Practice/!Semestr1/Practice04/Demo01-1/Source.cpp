#include <iostream>
using namespace std;

int main()
{
	float val1 = 16777215.f;
	float val2 = 16777216.f;
	float val3 = 16777217.f;

	cout << boolalpha << (16777215.f == 16777216.f) <<endl; // false ��� 0
	cout << boolalpha << (16777216.f == 16777217.f); // false ��� 0

	system("pause>nul");
}