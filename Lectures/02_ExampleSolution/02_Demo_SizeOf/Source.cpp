/*
 *
 * Author: Kirill Korobchinsky
 */
#define _USE_MATH_DEFINES

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	float x = 1;

	std::cout << "sizeof(int) = " << sizeof(int) << endl;
	cout << "sizeof(float) = " << sizeof(float) << endl;
	cout << "sizeof(x) = " << sizeof(x) << endl;
	cout << "sizeof(double) = " << sizeof(double) << endl;
	cout << "sizeof(char) = " << sizeof(char) << endl;

	cout << "I am developer!";
	cout << endl;

	cout << "I am \tdeveloper!\n";
	cout << 2 + 2 << endl;
	cout << 3 + 3;


	system("pause>nul");
	return EXIT_SUCCESS;
}

/* ------  RESULT  -------

sizeof(int) = 4
sizeof(float) = 4
sizeof(x) = 4
sizeof(double) = 8
sizeof(char) = 1
I am developer!
4


*/