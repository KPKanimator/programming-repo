/*
 * Author: Kirill Korobchinsky
 * 
 * 
 */
#define _USE_MATH_DEFINES

#pragma region Includes
#include <iostream>
#include <fstream>
//#include <math.h>
//#include <stdlib.h>
//#include <locale>
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

	//ofstream outfile("clients.txt",ios::app);
	//int account;  
	//char name[10]; 
	//float balance;
	//
	//while (cin >> account >> name >> balance)
	//{
	//	outfile << account << " " << name << " " << balance << endl;
	//}
	//
	//outfile.close();

	const int N = 10;
	int mas[N] = {}; // �����, � ���� ������ ��������� ���� � �����
	int k = 0;	// �������� �������
	ifstream file_in; // ��������� ���� ��������
	file_in.open("file_in.txt"); // ��������� ����
	// ���� �� ����� ����� � ����� �� ���������
	for (int � = 0; � < N && !file_in.eof(); �++, k++)
	{
		file_in >> mas[�]; // ������� ���� � �����
		cout << mas[�] << " ";	//	��������	���� �� �������
	}
	file_in.close(); // ��������� ����
	cout << "\n� ����� ������� " << k;
	cout << " �������� ������ � " << N << endl;
  
  
  system("pause>nul");
  return EXIT_SUCCESS;
}

/* ------  RESULT  -------

*/