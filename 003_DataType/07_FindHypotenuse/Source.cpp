/*
**Author: K.Korobchinskiy
**Date: 23/09/2019
**Task: Ќайти гипотенузу при известных катетах
*/
#include <iostream>
#include <iomanip>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	double a, b;
	cin >> a >> b;
	double c = sqrt(a*a + pow(b, 2));
	cout << "Answer c=" << c << endl;

	system("pause");
	return EXIT_SUCCESS;
}