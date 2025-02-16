#include <iostream>
using namespace std;

int main()
{
	// sets the width of the field
	cout.width(80);
	// sets the character placeholder, defaults character placeholder - space
	cout.fill('_');
	cout << right << "Hello, Kirill!" << endl;

	cout << fixed;
	double x = 1e-3; // 10^-3
	cout << "\tx = " << x << endl;

	cout.precision(3);
	cout << "\tx = " << x << endl;
	x = 1454.235656549789;
	cout << "\tx = " << x << endl;

	bool b = true;
	cout << "\tb = " << b << endl;
	cout.setf(ios::boolalpha);
	cout << "\tb = " << b << endl;
	cout << "\tb = " << boolalpha << b << endl;


	cout << endl << endl;
	system("pause>nul");
	return EXIT_SUCCESS;
}

/*
__________________________________________________________________Hello, Kirill!
				x = 0.001000
				x = 0.001
				x = 1454.236
				b = 1
				b = true
				b = true


*/