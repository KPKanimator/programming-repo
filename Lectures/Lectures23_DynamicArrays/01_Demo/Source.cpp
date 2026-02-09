/*
 * Author: Kirill Korobchinsky
 * 
 * Dynamic Arrays
 */
#define _USE_MATH_DEFINES

#pragma region Includes
#include <iostream>
#include <fstream>
#include <math.h>
#include <stdlib.h>
#include <locale>
#include "windows.h"
using namespace std;
#pragma endregion
#define DEBUG

int main()
{
#pragma region Ukranian
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Ukrainian");
#pragma endregion
  int* p_arr;
  // считать из файла
  int size = 0;
  ifstream fin("input.txt");
  if (!fin.is_open())
  {
    cerr << "Фатальная ошибка файл не найден!!!" << endl;
    system("pause>nul");
    return EXIT_FAILURE;
  }
  fin >> size;
  p_arr = new int[size];
  for (int i = 0; i < size; i++)
  {
    fin >> p_arr[i];
#ifdef DEBUG
    cout << p_arr[i] << " ";
#endif // DEBUG
  }
  fin.close();

  // решить задачу 
  int imax = 0;
  for (int i = size; i > 1; i--)
  {
    if (p_arr[i] >= p_arr[imax])
      imax = i;
  }

  // записать в файл и вывести на экран
  ofstream fout("output.txt");
  fout << "Size is: " << size << endl;
  cout << "Size is: " << size << endl;
  fout << "Array are: ";
  cout << "Array are: ";
  for (int i = 0; i < size; i++)
  {
    fout << p_arr[i] << " ";
    cout << p_arr[i] << " ";
  }
  fout << "Max is: " << p_arr[imax] << endl;
  cout << "Max is: " << p_arr[imax] << endl;
  fout.close();

  delete[] p_arr;
 
  system("pause>nul");
  return EXIT_SUCCESS;
}

/* ------  RESULT  -------

*/