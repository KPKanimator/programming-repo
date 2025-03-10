/*
 * Author: Kirill Korobchinsky
 This C++ program works with binary files using only dynamic arrays to store numbers. It first tries to read a binary file (test.bin); if found, it loads up to 10 numbers into a dynamic array and checks their validity. If the file does not exist or contains invalid data, the user is prompted to generate random numbers and create a new file. The program then asks for an output file name to save the numbers, allowing the user to overwrite an existing file or choose a new name. It ensures efficient file handling, data integrity, and avoids dynamic memory allocation (new[], delete[]).
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

using namespace std;

const int DEFAULT_COUNT = 100; // ʳ������ ����� �� �������������

// ������� ��������� ���������� �����
void generateRandomNumbers(int* arr, int count, int min = 1, int max = 100) {
  for (int i = 0; i < count; i++) {
    arr[i] = rand() % (max - min + 1) + min;
  }
}

// ������� ������ ������ � ������� ����
void writeBinaryFile(const string& filename, const int* arr, int count) {
  ofstream file(filename, ios::binary);
  if (!file) {
    cerr << "������� �������� ����� ��� ������: " << filename << endl;
    return;
  }
  file.write(reinterpret_cast<const char*>(&count), sizeof(count)); // �������� ������� ��������
  file.write(reinterpret_cast<const char*>(arr), count * sizeof(int)); // �������� �����
  file.close();
  cout << "���� ������ �������� � ����: " << filename << endl;
}

// ������� ������� � �������� �����
bool readBinaryFile(const string& filename, int*& arr, int& count) {
  ifstream file(filename, ios::binary);
  if (!file) {
    return EXIT_FAILURE;
  }

  file.read(reinterpret_cast<char*>(&count), sizeof(count)); // ������ ������� ��������
  if (count <= 0) {
    cerr << "�������: ���������� ������� ����� � ����!" << endl;
    return EXIT_FAILURE;
  }

  arr = new int[count]; // �������� �������� ������ �� �����
  file.read(reinterpret_cast<char*>(arr), count * sizeof(int));

  // ����������, �� ��������� ������� �� �����
  if (!file) {
    cerr << "������� ������� �����. �������, ����������� ����!" << endl;
    delete[] arr;
    arr = nullptr;
    count = 0;
    return EXIT_FAILURE;
  }

  file.close();
  return true;
}

int main()
{
#pragma region Ukranian
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);
  setlocale(LC_ALL, "Ukrainian");
#pragma endregion
  srand(static_cast<unsigned int>(time(nullptr)));

  string inputFile = "test.bin";
  int* numbers = nullptr;
  int count = 0;

  // ������ ������� ����
  if (readBinaryFile(inputFile, numbers, count)) {
    cout << "���� ��������. ���������� ����������...\n";
    cout << "������� �����: ";
    for (int i = 0; i < count; i++) cout << numbers[i] << " ";
    cout << endl;
  }
  else {
    cout << "���� �� �������� ��� ������ ���������� ����.\n";
    cout << "�������� ����� ���� � ����������� ������? (y/n): ";
    char choice;
    cin >> choice;

    if (choice == 'y' || choice == 'Y') {
      count = DEFAULT_COUNT;
      numbers = new int[count];
      generateRandomNumbers(numbers, count);
      writeBinaryFile(inputFile, numbers, count);
    }
    else {
      cout << "�������� ��������� ������.\n";
      return EXIT_SUCCESS;
    }
  }

  // �������� ����������� ��� ���������� � ����� ����
  string outputFile;
  cout << "������ ����� ����� ��� ���������� ����� (��� 'output.bin' �� �������������): ";
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
  getline(cin, outputFile);

  if (outputFile.empty()) outputFile = "output.bin";

  // ����������, �� ���� ����
  ifstream checkFile(outputFile, ios::binary);
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
  checkFile.close();

  // �������� ���� � ����� ����
  writeBinaryFile(outputFile, numbers, count);

  // �������� �������� ���'��
  delete[] numbers;

  return EXIT_SUCCESS;
}
