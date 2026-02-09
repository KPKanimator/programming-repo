/*
 * Date: //2025
 * Author: Kirill Korobchinsky
 * Знайти величини й індекси максимального за модулем мінімального елементів масиву В = (-1.5, 6.9, 13, 6.2, -17, 8, 6.6).
 *
 */
#define _USE_MATH_DEFINES

#pragma region Includes
#include <iostream>
#include <iomanip>
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
  const int N = 7; // Кількість елементів
  double b[N]; // = { -1.5, 6.9,13, 6.2, -17, 8, 6.6 };

  srand(static_cast<unsigned int>(time(nullptr)));
  cout << "Значення елементів масива: {";
  for (size_t i = 0; i < N; i++)
  {
    b[i] = rand() % 100 - 50; // -50..50
    cout << b[i] << ';';
  }
  cout << "}" << endl;

  int iMin = 0, iMax = 0;
  double min = abs(b[0]), max = abs(b[0]);

  for (size_t i = 1; i < N; i++)
  {
    if (abs(b[i]) < min)
    {
      min = abs(b[i]);
      iMin = i;
    }
    if (abs(b[i]) > max)
    {
      max = abs(b[i]);
      iMax = i;
    }
  }

  cout << "\nMin = " << min << "     \tIndex MinValue = " << iMin;
  cout << "\nMax = " << max << "     \tIndex MaxValue = " << iMax << endl;

  system("pause>nul");
  return EXIT_SUCCESS;
}

/* ------  RESULT  -------
Псевдокод:
    min_val = b[0]
    max_val = b[0]

    Для кожного елемента x в b (починаючи з b[1]):
        Якщо x < min_val:
            min_val = x
        Якщо x > max_val:
            max_val = x

    Повернути min_val, max_val


Значення елементів масива: {-1.5;6.9;13;6.2;-17;8;6.6;}

Min = 1.5       Index MinValue = 0
Max = 17        Index MaxValue = 4
*/

