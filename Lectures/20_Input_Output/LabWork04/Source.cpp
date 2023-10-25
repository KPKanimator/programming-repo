#pragma region Includes
#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include <stdlib.h>
#include <locale>
#include "windows.h"
using namespace std;
#pragma endregion
using namespace std;

int main()
{
#pragma region Ukranian
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Ukrainian");
#pragma endregion
	double c = 123.123456789;
	double d = 123.123456789;
	double e = 123.123456789;
	double f = 123.123456789;

	cout << "4 действительных числа" << endl;
	cout << "c= " << c << endl;
	cout << "d= " << d << endl;
	cout << "e= " << e << endl;
	cout << "f= " << f << endl;

	cout << "format: 4 действительных числа" << endl;
	cout.setf(ios::fixed);
	int size_pr = 9;
	cout << "c= " << setw(10) << setprecision(size_pr) << c << endl;
	cout << "d= " << d << endl;
	cout << "e= " << e << endl;
	cout << "f= " << f << endl;

	cout << "4 действительных числа" << endl;
	cout << "c= " << c << endl;
	cout << "d= " << d << endl;
	cout << "e= " << e << endl;
	cout << "f= " << f << endl;

	//cout.precision(2);
	//cout << setw(75) << "ƒействительные числа(ширина пол€ равна 5)" << endl;
	//cout << setw(30) << "¬ывод без формата" << setw(30) << "¬ывод с фикс. точкой" << setw(30) << "¬ывод с плав. точкой" << endl;
	//cout << setw(20) << "c=" << s[0] << setw(25) << fixed << "c=" << setw(5) << c << setw(25) << scientific << "c=" << c << endl;
	//cout << setw(20) << "d=" << s[1] << setw(25) << fixed << "d=" << setw(5) << d << setw(25) << scientific << "d=" << d << endl;
	//cout << setw(20) << "e=" << s[2] << setw(25) << fixed << "e=" << setw(5) << e << setw(25) << scientific << "e=" << e << endl;
	//cout << setw(20) << "f=" << s[3] << setw(25) << fixed << "f=" << setw(5) << f << setw(25) << scientific << "f=" << f << endl << endl;

	system("pause>nul");
	return EXIT_SUCCESS;
}

