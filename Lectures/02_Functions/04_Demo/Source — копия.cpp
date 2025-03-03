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
void writeToFile() {
  ofstream file("data.txt", ios::out | ios::trunc); // Відкриття з очищенням
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
  cout << "Текст успішно записано у файл!" << endl;
}

// Функція для читання файлу
void readFromFile() {
  ifstream file("data.txt"); // Відкриття для читання
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
void appendToFile() {
  ofstream file("data.txt", ios::app); // Відкриття у режимі дописування
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
  cout << "Текст успішно додано у файл!" << endl;
}

// Функція для читання та запису у файл (fstream)
void readWriteFile() {
  fstream file("data.txt", ios::in | ios::out);
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
void deleteFile() {
  if (remove("data.txt") == 0) {
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
  do {
		system("cls");
    switch (menu()) {
    case 0: exit(EXIT_SUCCESS);
    case 1: writeToFile(); break;
    case 2: readFromFile(); break;
    case 3: appendToFile(); break;
    case 4: readWriteFile(); break;
    case 5: deleteFile(); break;
    default: cout << "Невірний вибір! Спробуйте ще раз.\n";
    }
  } while (true);
 
  system("pause>nul");
  return EXIT_SUCCESS;
}

/* ------  RESULT  -------


*/

