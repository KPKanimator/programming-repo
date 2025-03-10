/*
 * Author: Kirill Korobchinsky
 *
 *	C++ program to demonstrate
 *	handling errors when working with files
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
	// ³������� �������� ����� in.txt
	ifstream in("in.txt"); // ��������� ����� in
	if (!in.is_open()) // ������ ��������?
	{
		cout << "�������: ���� in.txt �� ����" << endl;
		return -1;
	}
	int a, b, c;
	// �������� ����� ����� ����� � �����
	in >> a >> b >> c;
	if (in.fail()) // �� ���� �������
	{
		return -2;
	}
	cout << "��������� �����: " << a << ", ";
	cout << b << ", " << c << endl;
	// ³������� ��������� ����� out.txt
	ofstream out("out.txt");
	// ��������� ����� out
	if (!out.is_open())
	{
		cout << "�������: �� ������� ��������";
		cout << "���� out.txt" << endl;
		return -3;
	}
	// ��������� a+b+c=sum � �������� ����  
	out << a << "+" << b << "+" << c << "=" << a + b + c << endl;
	cout << "�������� ������ ���������!" << endl;


	system("pause>nul");
	return EXIT_SUCCESS;
}

/* ------  RESULT  -------

*/