#include <iostream> // Input or output data to console
using namespace std;

int main()
{
	bool z = true;
	cout << " z = " << boolalpha << z << endl;

	z = (1 == 3); 
	cout << " z = " << boolalpha << z << endl;

	z = (1.25 == 1.25);
	cout << " z = " << boolalpha << z << endl;

	z = (1.0 / 3 == 1.0 / 3);
	cout << " z = " << boolalpha << z << endl;

	float val1 = 16777215.f;
	float val2 = 16777216.f;
	float val3 = 16777217.f;

	cout << boolalpha << (val1 == val2) << endl;
	cout << boolalpha << (val2 == val3) << endl;

	cout << boolalpha << (16777215.f == 16777216.f) << endl; 
	cout << boolalpha << (16777216.f == 16777217.f) << endl;

	cout << boolalpha << (val1 == val1) << endl;
	cout << boolalpha << (val2 == val2) << endl;
	cout << boolalpha << (val3 == val3) << endl;

	system("pause>nul");
	return EXIT_SUCCESS;
}