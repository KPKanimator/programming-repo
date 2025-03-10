/*
 * Author: Kirill Korobchinsky
 *
 * ������ � ������������ �� ����������� ��������
 */
#define _USE_MATH_DEFINES

#pragma region Includes
#include "my_function.hpp"
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <cstdlib> // ��� rand()
#include <ctime>   // ��� ��������� ���������� �����
#include <locale>
#include "windows.h"
using namespace std;
#pragma endregion

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

int main()
{
#pragma region Ukranian
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Ukrainian");
#pragma endregion
	int choice;
	do {
		cout << "\n����:\n";
		cout << "1. ������ � ����������� �������\n";
		cout << "2. ������ � ���������� �������\n";
		cout << "3. �����\n";
		cout << "������ �����: ";
		cin >> choice;

		switch (choice) {
		case 1: oneDimensionalArray(); break;
		case 2: twoDimensionalArray(); break;
		case 3: cout << "����� � ��������...\n"; break;
		default: cout << "������� ����! ��������� �� ���.\n";
		}
	} while (choice != 3);

	system("pause>nul");
	return EXIT_SUCCESS;
}

// Function definitions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

// ������� ��� ���������� ������������ ������
void fillOneDimensionalArray(int arr[], int size) {
	cout << "������ " << size << " �������� ������:\n";
	for (int i = 0; i < size; i++) {
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}
}

// ������� ��� ��������� ������������ ������
void printOneDimensionalArray(const int arr[], int size) {
	cout << "�����: ";
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

// ������� ��� ������ ����������� �� ������������� ��������
void findMinMax(const int arr[], int size, int& minVal, int& maxVal) {
	minVal = arr[0];
	maxVal = arr[0];
	for (int i = 1; i < size; i++) {
		if (arr[i] < minVal) minVal = arr[i];
		if (arr[i] > maxVal) maxVal = arr[i];
	}
}

// ������� ��� ���������� ���� �������� ������
int sumArray(const int arr[], int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}
	return sum;
}

// ������� ��� ���������� ����������� ������ ����������� �������
void fillTwoDimensionalArray(int matrix[][3], int rows, int cols) 
{
	// ������������ ��������� �������� ��� ��������� ���������� �����
	srand(static_cast<unsigned int>(time(0))); 
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			matrix[i][j] = rand() % 10; // ���������� ������� 0-9
		}
	}
}

// ������� ��� ��������� ����������� ������
void printTwoDimensionalArray(const int matrix[][3], int rows, int cols) {
	cout << "\n������� (" << rows << "x" << cols << "):\n";
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}

// ������� ��� ���������� ���� ��� �������� ����������� ������
int sumMatrix(const int matrix[][3], int rows, int cols) {
	int sum = 0;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			sum += matrix[i][j];
		}
	}
	return sum;
}

// ������� ��� ����������� ������������� �������� � �������
int findMaxMatrix(const int matrix[][3], int rows, int cols) {
	int maxVal = matrix[0][0];
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			if (matrix[i][j] > maxVal) {
				maxVal = matrix[i][j];
			}
		}
	}
	return maxVal;
}

// ������� ��� ������ � ����������� �������
void oneDimensionalArray() {
	const int size = 5;
	int arr[size];

	fillOneDimensionalArray(arr, size);
	printOneDimensionalArray(arr, size);

	int minVal, maxVal;
	findMinMax(arr, size, minVal, maxVal);

	int sum = sumArray(arr, size);

	cout << "̳�������� ��������: " << minVal << endl;
	cout << "����������� ��������: " << maxVal << endl;
	cout << "���� ��������: " << sum << endl;
}

// ������� ��� ������ � ���������� �������
void twoDimensionalArray() {
	const int rows = 3, cols = 3;
	int matrix[rows][cols];

	fillTwoDimensionalArray(matrix, rows, cols);
	printTwoDimensionalArray(matrix, rows, cols);

	int sum = sumMatrix(matrix, rows, cols);
	int maxVal = findMaxMatrix(matrix, rows, cols);

	cout << "���� ��� ��������: " << sum << endl;
	cout << "����������� �������� � �������: " << maxVal << endl;
}

/* ------  RESULT  -------


*/
