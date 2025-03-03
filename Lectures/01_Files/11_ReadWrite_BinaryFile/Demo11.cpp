/*
 * Author: Kirill Korobchinsky
 This C++ program works with binary files using only static arrays to store numbers. It first tries to read a binary file (test.bin); if found, it loads up to 10 numbers into a static array and checks their validity. If the file does not exist or contains invalid data, the user is prompted to generate random numbers and create a new file. The program then asks for an output file name to save the numbers, allowing the user to overwrite an existing file or choose a new name. It ensures efficient file handling, data integrity, and avoids dynamic memory allocation (new[], delete[]). 
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

// Функція генерації випадкових чисел
void generateRandomNumbers(int arr[], int count, int min = 1, int max = 100) {
  for (int i = 0; i < count; i++) {
    arr[i] = rand() % (max - min + 1) + min;
  }
}

// Функція запису масиву у бінарний файл
void writeBinaryFile(const string& filename, const int arr[], int count) {
  ofstream file(filename, ios::binary);
  if (!file) {
    cerr << "Помилка відкриття файлу для запису: " << filename << endl;
    return;
  }
  file.write(reinterpret_cast<const char*>(&count), sizeof(count)); // Записуємо кількість елементів
  file.write(reinterpret_cast<const char*>(arr), count * sizeof(int)); // Записуємо масив
  file.close();
  cout << "Дані успішно записано у файл: " << filename << endl;
}

// Функція читання з бінарного файлу
bool readBinaryFile(const string& filename, int arr[], int& count) {
  ifstream file(filename, ios::binary);
  if (!file) {
    return false;
  }

  file.read(reinterpret_cast<char*>(&count), sizeof(count)); // Читаємо кількість елементів
  if (count <= 0 || count > MAX_NUMBERS) {
    cerr << "Помилка: некоректна кількість чисел у файлі!" << endl;
    return false;
  }

  file.read(reinterpret_cast<char*>(arr), count * sizeof(int));

  // Перевіряємо, чи правильно зчитано всі числа
  if (!file) {
    cerr << "Помилка читання файлу. Можливо, пошкоджений файл!" << endl;
    count = 0;
    return false;
  }

  file.close();
  return true;
}

int main() {
#pragma region Ukranian
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);
  setlocale(LC_ALL, "Ukrainian");
#pragma endregion
  srand(static_cast<unsigned int>(time(nullptr)));

  string inputFile = "test.bin";
  int numbers[MAX_NUMBERS] = { 0 }; // Масив для збереження чисел
  int count = 0;

  // Спроба зчитати файл
  if (readBinaryFile(inputFile, numbers, count)) {
    cout << "Файл знайдено. Виконується зчитування...\n";
    cout << "Зчитані числа: ";
    for (int i = 0; i < count; i++) 
      cout << numbers[i] << " ";
    cout << endl;
  }
  else {
    cout << "Файл не знайдено або містить некоректні дані.\n";
    cout << "Створити новий файл з випадковими даними? (y/n): ";
    char choice;
    cin >> choice;

    if (choice == 'y' || choice == 'Y') {
      count = MAX_NUMBERS;
      generateRandomNumbers(numbers, count);
      writeBinaryFile(inputFile, numbers, count);
    }
    else {
      cout << "Програма завершила роботу.\n";
      return 0;
    }
  }

  // Запитуємо користувача про збереження у новий файл
  string outputFile;
  cout << "Введіть назву файлу для збереження даних (або 'output.bin' за замовчуванням): ";
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
  getline(cin, outputFile);

  if (outputFile.empty()) outputFile = "output.bin";

  // Перевіряємо, чи існує файл
  ifstream checkFile(outputFile, ios::binary);
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
  checkFile.close();

  // Записуємо дані в новий файл
  writeBinaryFile(outputFile, numbers, count);
	system("pause>nul");
  return 0;
}
