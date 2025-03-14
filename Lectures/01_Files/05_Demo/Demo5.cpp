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
const int MAX_NUMBERS = 10; // ����������� ������� ����� � ����

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
	int numbers[MAX_NUMBERS] = { 0 }; // ����� ��� ���������� �����
	int count = 0; // ˳������� ������� �����

	// ���� ���� ����, ������ ����
	if (inFile) {
		cout << "���� ��������. ���������� ����������...\n";
		while (count < MAX_NUMBERS && inFile >> numbers[count]) {
			count++;
		}

		// ����������, �� ���� ������� ��� ����������
		if (inFile.fail() && !inFile.eof()) {
			cerr << "�������: � ���� �������� ���������� ����!\n";
			return 1;
		}

		cout << "������� �����: ";
		for (int i = 0; i < count; i++) cout << numbers[i] << " ";
		cout << endl;

	}
	else { // ���� ���� �� ��������, ��������� ��������
		cout << "���� �� ��������. �������� ����� ���� � ����������� ������? (y/n): ";
		char choice;
		cin >> choice;

		if (choice == 'y' || choice == 'Y') {
			count = MAX_NUMBERS;
			int min = 1, max = 100;
			for (int i = 0; i < count; i++) {
				numbers[i] = rand() % (max - min + 1) + min;
			}
			// �������� ���� � ����� ����
			// writeToFile(inputFile, numbers, count);
			ofstream file(inputFile);
			if (!file) {
				cerr << "������� �������� ����� ��� ������: " << inputFile << endl;
				system("pause>nul");
				return EXIT_FAILURE;
			}
			for (int i = 0; i < count; i++) {
				file << numbers[i] << " ";
			}
			file.close();
			cout << "���� ������ �������� � ����: " << inputFile << endl;
		}
		else {
			cout << "�������� ��������� ������.\n";
			system("pause>nul");

			return EXIT_SUCCESS;
		}
	}

	// �������� ����������� ��� ���������� � ����� ����
	string outputFile;
	cout << "������ ����� ����� ��� ���������� ����� (��� 'test_output.txt' �� �������������): ";
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	getline(cin, outputFile);

	if (outputFile.empty()) outputFile = "test_output.txt";

	// ����������, �� ���� ����
	ifstream checkFile(outputFile);
	if (checkFile) {
		cout << "���� ��� ����. ������������ ����? (y/n): ";
		char overwriteChoice;
		cin >> overwriteChoice;

		if (overwriteChoice != 'y' && overwriteChoice != 'Y') {
			cout << "������ ���� ����� �����: ";
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			getline(cin, outputFile);
		}
	}

	// �������� ���� � ����� ����
	ofstream file(outputFile);
	if (!file) {
		cerr << "������� �������� ����� ��� ������: " << outputFile << endl;
		return EXIT_FAILURE;
		system("pause>nul");
	}
	for (int i = 0; i < count; i++) {
		file << numbers[i] << " ";
	}
	file.close();
	cout << "���� ������ �������� � ����: " << outputFile << endl;

	system("pause>nul");
	return EXIT_SUCCESS;
}
