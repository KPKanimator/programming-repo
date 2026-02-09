/*
 * Author: Kirill Korobchinsky
 * 
 * Задача: сгенерировать 1 мерный массив, найти минимум и максимум. 
 * Найти элемент в масииве.
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
  
  setlocale(LC_ALL, "");
  typedef int datatype;
  const int N = 5;
  datatype array[N] = { 0 };



  /* initialize random seed: */
  //srand(time(NULL));
  unsigned int rand_max = static_cast<unsigned int>(time(0)); //1000
  //unsigned int rand_max = 100;
  int a = 1, b = 11; // диапазон генерации
  srand(rand_max);
  // Инициализация элементов массива
  for (int i = 0; i < N; ++i)
  {
    //array[i] = rand() % 11; /* 0..10 */
    // a + ((double)rand() / RAND_MAX) * (b - a);
    array[i] = a + rand() % b;  // [a;b-1]
  }

  // Вывод элементов массива
  for (int i = 0; i < N; ++i)
  {
    cout << "A[" << i << "]= " << array[i] << endl;
  }

  datatype min = array[0], max = array[0];
  for (int i = 0; i < N; ++i)
  {
    if (min > array[i])
      min = array[i];
    if (max < array[i])
      max = array[i];
  }
  cout << "min = " << min << endl;
  cout << "max = " << max << endl;

  datatype item = 0;
  int pos_item = -1;
  cout << "Введите элемент: ";
  cin >> item;
  for (int i = 0; i < N; ++i)
  {
    if (array[i] == item)
    {
      pos_item = i;
      break;
    }
  }
  if (pos_item == -1)
    cout << "Элемент не найден\n";
  else
    cout << "Элемент " << item << " под номером " << pos_item << endl;

  
  system("pause>nul");
  return EXIT_SUCCESS;
}

/* ------  RESULT  -------

*/

