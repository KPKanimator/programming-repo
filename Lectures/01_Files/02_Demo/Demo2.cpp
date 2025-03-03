/*
 * Author: Kirill Korobchinsky
 *
 *
 */
#define _USE_MATH_DEFINES

#pragma region Includes
#include <iostream>
#include <fstream>
#include <math.h>
#include <stdlib.h>
#include <locale>
#include "windows.h"
using namespace std;
#pragma endregion

int main()
{
#pragma region Ukranian
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Ukrainian");
#pragma endregion

	double a;
	ifstream file_in; // ��������� ���� ��������
	file_in.open("file.txt"); // ��������� ����
	if (file_in) // ���� ������� ������?
	{ // ���� ���, �� ������ �������� � �����
		file_in >> a;
		file_in.close(); // ��������� ����
		// �������� �� ������� �������� �����
		cout << a << endl;
	}
	else // ���� ��, �� �������� ����������� ��� �������
		cerr << "������� �������� �����" << endl;

	int b = 0;
#pragma region Console
	cout << "Write to screen tms" << endl;
	cin >> b;
	cout << "b is " << b << endl;
#pragma endregion

#pragma region File
	// ������ �� �����
	ifstream fin("input.txt");
	fin >> b;
	cout << "Data from file is " << b << endl;
	fin.close();
	// ������ � ����
	ofstream fout("file_name.txt");
	fout << "Write to screen tms: " << b << endl;
	fout.close();
#pragma endregion

	system("pause>nul");
	return EXIT_SUCCESS;
}

/* ------  RESULT  -------

*/