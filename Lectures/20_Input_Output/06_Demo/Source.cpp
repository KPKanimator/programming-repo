/*
 * Author: Kirill Korobchinsky
 * 
 * A manipulator is a special type of object that manages input/output 
 * streams to format the information passed to the stream.
 */
#define _USE_MATH_DEFINES

#pragma region Includes
#include <iostream>
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
  cout << endl;									// ������� �� ����� ����� �� ��� ���������
  cout << boolalpha << true << endl;			// �������� ������� ������� � ���������� ������
  cout << noboolalpha << false << endl;			// �������� ������� ������� � ��������� ������
  cout << oct << 16 << endl;					// ��������� ������� � ������������ ������ ��������
  cout << dec << 10 << endl;					// ��������� ������� � ��������� ������ �������� (�� ����������)
  cout << hex << 255 << endl;					// ��������� ������� � �������������� ������ ��������
  cout << showbase << 10 << endl;				// �������� ��������� ������ ������� ��������
  cout << noshowbase << 10 << endl;				// �� �������� ��������� ������ ������� �������� (�� ����������).
  cout << uppercase << 255 << endl;				// � �������������� ������ �������� ��������������� ����� ��������� �������
  cout << nouppercase << 255 << endl;			// � �������������� ������ �������� ��������������� ����� �������� �������
  cout << dec << showpos << 1 << endl;			// �������� ����� ���� + ��� ���������� �����
  cout << noshowpos << 1 << endl;				// �� �������� ���� ���� + ��� ���������� ����� (�� ����������).
  cout << scientific << 1.234561944 << endl;	// ��������� ����� � ��������� ������ � �������������� ����
  cout << fixed << 1.234567 << endl;			// ��������� ����� � ��������� ������ � ���������� ����
  cout.width(40);
  cout << right << "Test string!" << endl;		// ����������� �� ����� ������� (�� ����������).
  cout.width(40);
  cout.fill('*');
  cout << left << "Test string!" << endl;		// ����������� �� ��� ���.
  
  
  system("pause>nul");
  return EXIT_SUCCESS;
}

/* ------  RESULT  -------

true
0
20
10
ff
0xa
a
FF
ff
+1
1
1.234562e+00
1.234567
                            Test string!
Test string!****************************

*/