/*
 * Author: Kirill Korobchinsky
 *
 * Shows a dialogue between the user and the program with verification
 */
#define _USE_MATH_DEFINES
#define NOMINMAX

#pragma region Includes
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <limits>
#include <math.h>
#include <stdlib.h>
#include <locale>
#include "windows.h"
#include <string>
using namespace std;
#pragma endregion
const int MAX_NUMBERS = 10; // Максимальна кількість чисел у файлі

int main()
{
#pragma region Ukranian
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Ukrainian");
#pragma endregion

	srand(static_cast<unsigned int>(time(nullptr)));
	string inputFile = "test.txt";
	ifstream inFile(inputFile);
	int numbers[MAX_NUMBERS] = { 0 }; // Масив для збереження чисел
	int count = 0; // Лічильник кількості чисел

	// Якщо файл існує, читаємо дані
	if (inFile) {
		cout << "Файл знайдено. Виконується зчитування...\n";
		while (count < MAX_NUMBERS && inFile >> numbers[count]) {
			count++;
		}

		// Перевіряємо, чи була помилка при зчитуванні
		if (inFile.fail() && !inFile.eof()) {
			cerr << "Помилка: у файлі містяться некоректні дані!\n";
			return 1;
		}

		cout << "Зчитані числа: ";
		for (int i = 0; i < count; i++) cout << numbers[i] << " ";
		cout << endl;

	}
	else { // Якщо файл не знайдено, пропонуємо створити
		cout << "Файл не знайдено. Створити новий файл з випадковими даними? (y/n): ";
		char choice;
		cin >> choice;

		if (choice == 'y' || choice == 'Y') {
			count = MAX_NUMBERS;
			int min = 1, max = 100;
			for (int i = 0; i < count; i++) {
				numbers[i] = rand() % (max - min + 1) + min;
			}
			// Записуємо дані в новий файл
			// writeToFile(inputFile, numbers, count);
			ofstream file(inputFile);
			if (!file) {
				cerr << "Помилка відкриття файлу для запису: " << inputFile << endl;
				system("pause>nul");
				return EXIT_FAILURE;
			}
			for (int i = 0; i < count; i++) {
				file << numbers[i] << " ";
			}
			file.close();
			cout << "Дані успішно записано у файл: " << inputFile << endl;
		}
		else {
			cout << "Програма завершила роботу.\n";
			system("pause>nul");

			return EXIT_SUCCESS;
		}
	}

	// Запитуємо користувача про збереження у новий файл
	string outputFile;
	cout << "Введіть назву файлу для збереження даних (або 'test_output.txt' за замовчуванням): ";
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	getline(cin, outputFile);

	if (outputFile.empty()) outputFile = "test_output.txt";

	// Перевіряємо, чи існує файл
	ifstream checkFile(outputFile);
	if (checkFile) {
		cout << "Файл вже існує. Перезаписати його? (y/n): ";
		char overwriteChoice;
		cin >> overwriteChoice;

		if (overwriteChoice != 'y' && overwriteChoice != 'Y') {
			cout << "Введіть нову назву файлу: ";
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			getline(cin, outputFile);
		}
	}

	// Записуємо дані в новий файл
	ofstream file(outputFile);
	if (!file) {
		cerr << "Помилка відкриття файлу для запису: " << outputFile << endl;
		return EXIT_FAILURE;
		system("pause>nul");
	}
	for (int i = 0; i < count; i++) {
		file << numbers[i] << " ";
	}
	file.close();
	cout << "Дані успішно записано у файл: " << outputFile << endl;

	system("pause>nul");
	return EXIT_SUCCESS;
}
