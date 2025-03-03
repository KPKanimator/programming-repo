/*
 * Author: Kirill Korobchinsky
 * 
 * 
 */
#define _USE_MATH_DEFINES

#pragma region Includes
#include <iostream>
#include <fstream>
#include <string>
#include <math.h>
#include <stdlib.h>
#include <locale>
#include "windows.h"
using namespace std;
#pragma endregion

// Функція для встановлення кольору тексту
void setConsoleColor(int color) {
  HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
  SetConsoleTextAttribute(hConsole, color);
}

// Функція для запису тексту у файл (перезапис)
void writeToFile(const char* fileName) {
  ofstream file(fileName, ios::out | ios::trunc); // Відкриття з очищенням
  if (!file) {
    cout << "Помилка відкриття файлу!" << endl;
    return;
  }
  string text;
  cout << "Введіть текст для запису у файл: ";
  cin.ignore();
  getline(cin, text);
  file << text << endl;
  file.close();
  setConsoleColor(14); // Жовтий колір
  cout << "Текст успішно записано у файл!" << endl;
  setConsoleColor(7); // Повернення стандартного кольору
}

// Функція для читання файлу
void readFromFile(const char* fileName) {
  ifstream file(fileName); // Відкриття для читання
  if (!file) {
    cout << "Файл не знайдено!" << endl;
    return;
  }
  string line;
  cout << "Вміст файлу:\n";
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
  setConsoleColor(14); // Жовтий колір
  while (getline(file, line)) {
    cout << line << endl;
  }
  setConsoleColor(7); // Повернення стандартного кольору
  cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
  file.close();
}

// Функція для додавання тексту у файл
void appendToFile(const char* fileName) {
  ofstream file(fileName, ios::app); // Відкриття у режимі дописування
  if (!file) {
    cout << "Помилка відкриття файлу!" << endl;
    return;
  }
  string text;
  cout << "Введіть текст для додавання у файл: ";
  cin.ignore();
  getline(cin, text);
  file << text << endl;
  file.close();
  setConsoleColor(14); // Жовтий колір
  cout << "Текст успішно записано у файл!" << endl;
  setConsoleColor(7); // Повернення стандартного кольору
}

// Функція для читання та запису у файл (fstream)
void readWriteFile(const char* fileName) {
  fstream file(fileName, ios::in | ios::out);
  if (!file) {
    cout << "Файл не знайдено або помилка відкриття!" << endl;
    return;
  }
  cout << "Читання першого рядка файлу:\n";
  string line;
  if (getline(file, line)) {
    cout << line << endl;
  }
  else {
    cout << "Файл порожній!" << endl;
  }
  file.clear(); // Скидання помилки кінця файлу
  file.seekp(0, ios::end); // Переміщення в кінець файлу
  string text;
  cout << "Введіть текст для дописування у файл: ";
  cin.ignore();
  getline(cin, text);
  file << text << endl;
  file.close();
  cout << "Операція виконана!" << endl;
}

// Функція для видалення файлу
void deleteFile(const char* fileName) {
  if (remove(fileName) == 0) {
    cout << "Файл успішно видалено!\n";
  }
  else {
    setConsoleColor(12); // Червоний колір
    cout << "Помилка: файл не знайдено або не вдалося видалити!\n";
		setConsoleColor(7); // Повернення стандартного кольору
  }
}

// Меню програми
int menu() {
  int choice;
  cout << "\nМеню:\n";
  cout << "0. Вихід\n";
  cout << "1. Запис у файл (перезапис)\n";
  cout << "2. Читання файлу\n";
  cout << "3. Додавання у файл\n";
  cout << "4. Читання та запис у файл\n";
  cout << "5. Видалення файлу\n";
  cout << "Оберіть опцію: ";
  cin >> choice;

  return choice;
}

int main()
{
#pragma region Ukranian
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Ukrainian");
#pragma endregion
	const char* fileName = "data.txt";
  do {
		system("cls");
    switch (menu()) {
    case 0: exit(EXIT_SUCCESS);
    case 1: writeToFile(fileName); system("pause>nul"); break;
    case 2: readFromFile(fileName); system("pause>nul"); break;
    case 3: appendToFile(fileName); system("pause>nul"); break;
    case 4: readWriteFile(fileName); system("pause>nul"); break;
    case 5: deleteFile(fileName); system("pause>nul"); break;
    default: cout << "Невірний вибір! Спробуйте ще раз.\n";
    }
  } while (true);
 
  system("pause>nul");
  return EXIT_SUCCESS;
}

/* ------  RESULT  -------


*/

