/*
 * Author: Kirill Korobchinsky
 *
 * Введення трьох чисел та обмін значеннями
 */
//#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h> // C in-out
#include <stdlib.h> // system()
#include <locale.h>

int main() 
{
#pragma region Ukranian
  setlocale(LC_ALL, "Ukrainian");
#pragma endregion
  int a, b, c;
  int temp; // Тимчасова змінна для зберігання значення під час обміну

  // 1. Введення трьох чисел
  // printf - це функція (оператор) виведення
  printf("Введiть три цiлих числа (a, b, c) через пробiл: ");

  // scanf - це функція (оператор) введення
  scanf("%d %d %d", &a, &b, &c);

  // 2. Виведення початкових значень
  printf("\n--- Початковi значення ---\n");
  printf("a = %d\n", a);
  printf("b = %d\n", b);
  printf("c = %d\n", c);

  // 3. Виконання циклічного обміну
  // Щоб не втратити початкове значення 'a', ми зберігаємо його в 'temp'
  temp = a;

  // Тепер 'a' може безпечно прийняти значення 'b'
  a = b;

  // 'b' приймає значення 'c'
  b = c;

  // 'c' приймає збережене початкове значення 'a' з 'temp'
  c = temp;

  // 4. Виведення нових (обміняних) значень
  printf("\n--- Значення пiсля обмiну (a=b, b=c, c=a) ---\n");
  printf("a = %d\n", a);
  printf("b = %d\n", b);
  printf("c = %d\n", c);

  system("pause>nul");
  return 0;
}

/* ------  RESULT  -------
Введiть три цiлих числа (a, b, c) через пробiл: 1 2 3

--- Початковi значення ---
a = 1
b = 2
c = 3

--- Значення пiсля обмiну (a=b, b=c, c=a) ---
a = 2
b = 3
c = 1


*/


