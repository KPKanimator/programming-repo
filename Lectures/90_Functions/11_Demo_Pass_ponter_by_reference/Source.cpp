/*
 * Author: Kirill Korobchinsky
 *
 * Pass_by_reference
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

const int N = 3;

// �������, ��� ���� �������� ��� �������� ������ ���������
void change_values(int* (&ptrArray)[N], int newValue) {
  for (int i = 0; i < N; ++i) {
    *ptrArray[i] = newValue; // ���� �������� �� �������, �� ��� ����� ����� ��������
  }
}

void print_array(int* (&ptrArray)[N])
{
  for (int i = 0; i < N; ++i) {
    cout << *ptrArray[i] << " ";
  }
  cout << endl;
}

int main()
{
#pragma region Ukranian
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);
  setlocale(LC_ALL, "Ukrainian");
#pragma endregion

  int num1 = 10, num2 = 20, num3 = 30;
  int* ptrArray[N] = { &num1, &num2, &num3 };

  cout << "�� ������� �������: ";
  print_array(ptrArray);

  // ������ �������, �������� ������ ��������� ����� ���������
  change_values(ptrArray, 100);

  cout << "ϳ��� ������� �������: ";
  print_array(ptrArray);

  system("pause>nul");
  return EXIT_SUCCESS;
}

/* ------  RESULT  -------
�� ������� �������: 10 20 30
ϳ��� ������� �������: 100 100 100


*/