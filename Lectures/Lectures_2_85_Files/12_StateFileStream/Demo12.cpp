/*
 * Author: Kirill Korobchinsky
 *
 * Files States
 */
#define _USE_MATH_DEFINES

#pragma region Includes
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <locale>
#include "windows.h"
#include <fstream>
#include <string>
using namespace std;
#pragma endregion


// Функція з вашого зображення
void print_state(const ios& stream) {
  cout << " good()=" << boolalpha << stream.good();
  cout << " eof()=" << boolalpha << stream.eof();
  cout << " fail()=" << boolalpha << stream.fail();
  cout << " bad()=" << boolalpha << stream.bad();
}

int main()
{
#pragma region Ukranian
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);
  setlocale(LC_ALL, "Ukrainian");
#pragma endregion
  // 1. Створюємо тестовий файл для роботи
  ofstream outfile("test.txt");
  outfile << "42\nApple\n";
  outfile.close();

  // 2. Відкриваємо файл для читання
  ifstream file("test.txt");

  cout << "1. Щойно вiдкритий файл:       ";
  print_state(file);
  cout << "\n";

  // 3. Успішне зчитування правильного типу даних
  int number;
  file >> number; // Зчитуємо число 42
  cout << "2. Пiсля зчитування числа 42:  ";
  print_state(file);
  cout << "\n";

  // 4. Моделювання помилки (fail)
  // Намагаємося зчитати рядок "Apple" у змінну типу int
  int wrong_type;
  file >> wrong_type;
  cout << "3. Помилка типу даних (fail):  ";
  print_state(file);
  cout << "\n";

  // Щоб продовжити роботу з файлом після помилки, потрібно очистити прапорці
  file.clear();

  // 5. Зчитування рядка
  string word;
  file >> word; // Тепер успішно зчитуємо "Apple"
  cout << "4. Пiсля очищення та читання:  ";
  print_state(file);
  cout << "\n";

  // 6. Досягнення кінця файлу (eof)
  string no_data;
  file >> no_data; // Спроба читання, коли даних більше немає
  cout << "5. Досягнуто кiнець файлу:     ";
  print_state(file);
  cout << "\n";

  file.close();
  system("pause>nul");
  return EXIT_SUCCESS;
}

/* ------  RESULT  -------
1. Щойно вiдкритий файл:        good()=1 eof()=0 fail()=0 bad()=0
2. Пiсля зчитування числа 42:   good()=1 eof()=0 fail()=0 bad()=0
3. Помилка типу даних (fail):   good()=0 eof()=0 fail()=1 bad()=0
4. Пiсля очищення та читання:   good()=1 eof()=0 fail()=0 bad()=0
5. Досягнуто кiнець файлу:      good()=0 eof()=1 fail()=1 bad()=0

*/