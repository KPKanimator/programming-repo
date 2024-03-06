/*
 * Author: Kirill Korobchinsky
 * 
 * преобразовать перечислитель класса enum в тип int
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

  //std::cout << color; // поскольку нет неявного преобразования в тип int
  std::cout << static_cast<int>(color); // результатом будет 1
  
  
  system("pause>nul");
  return EXIT_SUCCESS;
}

/* ------  RESULT  -------
1
*/