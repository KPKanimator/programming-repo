#include <iostream> // Input or output data to console
using namespace std;

int main()
{
	bool z = true;
	cout << " z = " << boolalpha << z << endl;

	z = (1 == 3); // false
	cout << " z = " << boolalpha << z << endl;

	z = (1.25 == 1.25); // true
	cout << " z = " << boolalpha << z << endl;

	z = (1.0 / 3 == 1.0 / 3); // true
	cout << " z = " << boolalpha << z << endl;


	system("pause>nul");
	return EXIT_SUCCESS;
}