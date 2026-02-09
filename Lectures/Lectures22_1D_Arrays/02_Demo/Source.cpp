/*
 * Author: Kirill Korobchinsky
 *
 * Задача: ввести с клавиатуры массив из 5 элементов,
 * умножить все элементы на 2 и вывести полученный массив на экран.
 * Сгенерировать начальные данные.
 */
#define _USE_MATH_DEFINES

#pragma region Includes
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <locale>
#include "windows.h"
using namespace std;
#pragma endregion

int main()
{
#pragma region Ukranian
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);
  setlocale(LC_ALL, "Ukrainian");
#pragma endregion
  const int N = 5;
  int a[N] = { 0 };

  cout << "Pz input 5 items for array a:\n";
  for (int i = 0; i < N; ++i)
  {
    cout << "a[" << i << "]=";
    cin >> a[i];
    a[i] *= 2;
  }

  cout << "Result array a:\n";
  for (int i = 0; i < N; ++i)
  {
    cout << "a[" << i << "]=" << a[i] << endl;
  }


  system("pause>nul");
  return EXIT_SUCCESS;
}

/* ------  RESULT  -------

*/