#include <iostream> // Input or output data to console
using namespace std;

int main()
{
	long x = 555;
	cout << " sizeof: " << sizeof(x) << endl; // sizeof - size data type

	long int y = 777.222;
	cout << " y:\t\t" << y << endl;
	cout << " sizeof:\t" << sizeof(y) << endl; // sizeof - size data type

	long long z = 999.888;
	cout << " z:\t\t" << z << endl;
	cout << " sizeof:\t" << sizeof(z) << endl; // sizeof - size data type

	system("pause>nul");
	return EXIT_SUCCESS;
}