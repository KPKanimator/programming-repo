/*
 * Author: Kirill Korobchinsky
 * 
 * ������������� ������������� ������ enum � ��� int
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
  enum class Colors
  {
    PINK,
    GRAY
  };

  Colors color = Colors::GRAY;

  //std::cout << color; // ��������� ��� �������� �������������� � ��� int
  std::cout << static_cast<int>(color); // ����������� ����� 1
  
  
  system("pause>nul");
  return EXIT_SUCCESS;
}

/* ------  RESULT  -------
1
*/