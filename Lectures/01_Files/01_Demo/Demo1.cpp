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
	double a = 3.14;
	ofstream file_hendler; // ��������� ���� ���������
	ofstream file_out; // ��������� ���� ���������
	file_out.open("file.txt"); // ��������� ����
	file_out << a; // ������ �������� ����� � � ����
	file_out.close(); // ��������� ����
 
	cout << "�������� ����� � �������� � ���� file.txt" << endl;
  system("pause>nul");
  return EXIT_SUCCESS;
}

/* ------  RESULT  -------
3.14

*/