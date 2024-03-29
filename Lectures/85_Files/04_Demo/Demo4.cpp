/*
 * Author: Kirill Korobchinsky
 *
 * Generation array random values
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
	// ���������� ����������� ������ mas[N][N] ����������� �������
	const int N = 5; // ���������� ������
	double mas[N][N]; // �����, ���� ��������� ���������
	// ������������� ��������� �������� �����
	srand(static_cast<unsigned int>(time(nullptr)));
	cout << "���������� ����������� ������ mas[" << N << "][" << N << "] "
		"����������� �������" << endl;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			mas[i][j] = rand() % 10; // ��������� ����� � ����� �� 0 �� 9
			cout << mas[i][j] << " ";
		}
	}
	cout << endl;

	system("pause>nul");
	return EXIT_SUCCESS;
}

/* ------  RESULT  -------

*/