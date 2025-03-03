/*
 * Author: Kirill Korobchinsky
 *
 * Робота з одновимірними та двовимірними масивами
 */
#define _USE_MATH_DEFINES

#pragma region Includes
#include "my_function.hpp"
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <cstdlib> // Для rand()
#include <ctime>   // Для генерації випадкових чисел
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
		cout << "\nМеню:\n";
		cout << "1. Робота з одновимірним масивом\n";
		cout << "2. Робота з двовимірним масивом\n";
		cout << "3. Вихід\n";
		cout << "Оберіть опцію: ";
		cin >> choice;

		switch (choice) {
		case 1: oneDimensionalArray(); break;
		case 2: twoDimensionalArray(); break;
		case 3: cout << "Вихід з програми...\n"; break;
		default: cout << "Невірний вибір! Спробуйте ще раз.\n";
		}
	} while (choice != 3);

	system("pause>nul");
	return EXIT_SUCCESS;
}

// Function definitions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

// Функція для заповнення одновимірного масиву
void fillOneDimensionalArray(int arr[], int size) {
	cout << "Введіть " << size << " елементів масиву:\n";
	for (int i = 0; i < size; i++) {
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}
}

// Функція для виведення одновимірного масиву
void printOneDimensionalArray(const int arr[], int size) {
	cout << "Масив: ";
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

// Функція для пошуку мінімального та максимального значення
void findMinMax(const int arr[], int size, int& minVal, int& maxVal) {
	minVal = arr[0];
	maxVal = arr[0];
	for (int i = 1; i < size; i++) {
		if (arr[i] < minVal) minVal = arr[i];
		if (arr[i] > maxVal) maxVal = arr[i];
	}
}

// Функція для обчислення суми елементів масиву
int sumArray(const int arr[], int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}
	return sum;
}

// Функція для заповнення двовимірного масиву випадковими числами
void fillTwoDimensionalArray(int matrix[][3], int rows, int cols) 
{
	// Встановлюємо початкове значення для генерації випадкових чисел
	srand(static_cast<unsigned int>(time(0))); 
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			matrix[i][j] = rand() % 10; // Заповнюємо числами 0-9
		}
	}
}

// Функція для виведення двовимірного масиву
void printTwoDimensionalArray(const int matrix[][3], int rows, int cols) {
	cout << "\nМатриця (" << rows << "x" << cols << "):\n";
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}

// Функція для обчислення суми всіх елементів двовимірного масиву
int sumMatrix(const int matrix[][3], int rows, int cols) {
	int sum = 0;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			sum += matrix[i][j];
		}
	}
	return sum;
}

// Функція для знаходження максимального елемента в матриці
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

// Функція для роботи з одновимірним масивом
void oneDimensionalArray() {
	const int size = 5;
	int arr[size];

	fillOneDimensionalArray(arr, size);
	printOneDimensionalArray(arr, size);

	int minVal, maxVal;
	findMinMax(arr, size, minVal, maxVal);

	int sum = sumArray(arr, size);

	cout << "Мінімальне значення: " << minVal << endl;
	cout << "Максимальне значення: " << maxVal << endl;
	cout << "Сума елементів: " << sum << endl;
}

// Функція для роботи з двовимірним масивом
void twoDimensionalArray() {
	const int rows = 3, cols = 3;
	int matrix[rows][cols];

	fillTwoDimensionalArray(matrix, rows, cols);
	printTwoDimensionalArray(matrix, rows, cols);

	int sum = sumMatrix(matrix, rows, cols);
	int maxVal = findMaxMatrix(matrix, rows, cols);

	cout << "Сума всіх елементів: " << sum << endl;
	cout << "Максимальне значення у матриці: " << maxVal << endl;
}

/* ------  RESULT  -------


*/
