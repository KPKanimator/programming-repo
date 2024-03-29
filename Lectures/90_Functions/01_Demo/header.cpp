#include "header.hpp"
#include <iostream>

void verify_is()
{
	using namespace std;
	char ch = 'A';

	bool result = isalpha(ch);				// ������� ���������, �������� �� �������� ������

	cout << boolalpha << result << endl;

	ch = '\r';
	result = iscntrl(ch);					// ������� ���������, �������� �� ������ ����������� �������������������
	cout << boolalpha << result << endl;

	ch = '1';
	result = isdigit(ch);					// ������� ���������, �������� �� ������ ������
	cout << boolalpha << result << endl;

	ch = 'q';
	result = islower(ch);					// ������� ���������, ��������� �� ������ � ������ ��������
	cout << boolalpha << result << endl;

	result = isupper(ch);					// ������� ���������, ��������� �� ������ � ������� ��������
	cout << boolalpha << result << endl;

	ch = ',';
	result = ispunct(ch);					// ������� ���������, �������� �� ������, �������� ����������
	cout << boolalpha << result << endl;

	ch = '\t';
	result = isspace(ch);					//������� ���������, �������� �� ������ ����������
	cout << boolalpha << result << endl;

	ch = tolower('A');						// ������� ��������������� ������ � ������� �������� � ������ � ������ ��������
	cout << ch << endl;

	ch = toupper(ch);						// ������� ��������������� ������ � ������ ��������  � ������ � ������� ��������
	cout << ch << endl;

	return;
}
