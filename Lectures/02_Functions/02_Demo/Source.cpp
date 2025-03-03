/*
 * Author: Kirill Korobchinsky
 * 
 * 
 */
#define _USE_MATH_DEFINES
#pragma region Includes
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <locale>
#include <string>
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
  
  string correct_value = "qwerty123";
  string user_input;

  cout << "Введіть значення: ";
  getline(cin, user_input);

  if (user_input == correct_value) {
    cout << "Введене значення правильне!" << endl;
  }
  else {
    cout << "Неправильне значення! Спробуйте ще раз." << endl;
  }
 
  system("pause>nul");
  return EXIT_SUCCESS;
}

/* ------  RESULT  -------


*/
