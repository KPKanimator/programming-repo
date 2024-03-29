/*
 *
 * Date: 25/09/2023
 * Author: Kirill Korobchinsky
 */
#pragma region Includes
#include <iostream>
#include <iomanip>
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
	char _char[] = "char\n";
	int _int = 20;
	int negative_int = -10;
	double _double = 123.54;
	float zero_float = 0.0f;

	//======== �������� � ������������� ========\\
	cout<<"�������� � �������������\n";
	//������������� ������ ���� ������
	cout.width(20);
	//������������� ������ �����������(�� ��������� - ������)
	cout.fill('$');
	//���� �������������� ��� ������� ���� ����� ��������� �� ������ ����,
	//����� � �� �������. ���������� ����������� ��������� �����������
	cout.setf(ios::internal);
	cout << negative_int << endl;

	//������������� ������ ���� ������
	std::cout.width(50);
	//������������� ������ �����������(�� ��������� - ������)
	std::cout.fill('/');
	//����������� �� ������� ���� ����
	std::cout.setf(std::ios::left);
	std::cout << _char << std::endl;


	//======== ������� � ������ �������� ���������� ========\\
	std::cout<<"������� � ������ �������� ����������\n";
	//������������ ������� ���������
	std::cout.flags(std::ios::oct);
	std::cout << _int << std::endl;
	//���������� ������� ���������
	std::cout.flags(std::ios::dec);
	std::cout << _int << std::endl;
	//����������������� ������� ���������
	std::cout.flags(std::ios::hex);
	std::cout << _int << std::endl;
	//������ ��������� ������� ��������� (8, 16, 10 ��� 0)
	//�� ��������� 0 - ��� ����������, ����� �������, ����� �������� 8- ���
	//16-������ �����. ����� � ������� ��������� 8
	std::cout << std::setbase(8) << " " << _int << std::endl;
	//P.S. ����� dec, oct � hex �� ����� ���� ����������� ������������.




	system("pause>nul");
	return EXIT_SUCCESS;
}

/* ------  RESULT  -------



*/





