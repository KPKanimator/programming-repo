#include <iostream> // Input or output data to console
using namespace std;

int main()
{
	float  a = 0.123456789012345678901234567890123456789012345678901234567890F;
	double b = 0.123456789012345678901234567890123456789012345678901234567890;

	cout.precision(ios::floatfield);
	cout << a << endl << b << endl;

	system("pause>nul");
	return 0;
}