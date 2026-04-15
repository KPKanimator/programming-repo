/*
 * Author: Kirill Korobchinsky
 *
 *
 */
#define _USE_MATH_DEFINES
//#define _CRT_SECURE_NO_WARNINGS

#pragma region Includes
#include <iostream>
#include <cstring>
#include "windows.h"
using namespace std;
#pragma endregion

int main()
{
#pragma region Ukranian
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);
  setlocale(LC_ALL, "Ukrainian");
  using namespace std;
#pragma endregion
  const int MAX_LEN = 500;
  char input[MAX_LEN];
  char result[MAX_LEN * 2] = ""; // Буфер для результату

  const char* search = "Вася";
  const char* replace = "Василь";
  size_t searchLen = strlen(search);

  cout << "Введіть речення: " << endl;
  cin.getline(input, MAX_LEN);

  char* currentPos = input;
  char* findPtr;

  // Цикл пошуку та заміни
  while ((findPtr = strstr(currentPos, search)) != nullptr) { // засторілий варіант NULL
    // Копіюємо частину тексту ДО знайденого імені
    strncat_s(result, currentPos, findPtr - currentPos);

    // Додаємо нове ім'я
    strcat_s(result, replace);

    // Пересуваємо вказівку далі за знайдене слово
    currentPos = findPtr + searchLen;
  }

  // Додаємо залишок рядка після останньої заміни
  strcat_s(result, currentPos);

  cout << "\nРезультат:" << endl;
  cout << result << endl;
  


  system("pause>nul");
  return EXIT_SUCCESS;
}

/* ------  RESULT  -------
Введіть речення:
Вася, Вася, Вася та Вася!??

Результат:
Василь, Василь, Василь та Василь!??



*/

