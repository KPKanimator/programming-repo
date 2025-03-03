/*
 * Author: Kirill Korobchinsky
 *
 * check_value
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

bool check_value(string user_input, string correct_value) {
	return user_input == correct_value;
}

int main()
{
#pragma region Ukranian
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);
  setlocale(LC_ALL, "Ukrainian");
#pragma endregion

  string correct_value = "qwerty123";
  string user_input;

  cout << "������ ��������: ";
  getline(cin, user_input);


  if (check_value(user_input, correct_value)) 
  {
    cout << "������� �������� ���������!" << endl;
  }
  else {
    cout << "����������� ��������! ��������� �� ���." << endl;
  }

  system("pause>nul");
  return EXIT_SUCCESS;
}

/* ------  RESULT  -------


*/
