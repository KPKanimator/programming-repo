/*
 * Author: Kirill Korobchinsky
 * 
 * if_else_example
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
  

  string name = "Kirill";
  string password = "SuperP@ss321";

  string user_name;
  string user_pass;

  // вводим имя пользователя
  cout << "Введите имя: ";
  cin >> user_name;

  if (user_name == name)
  {
    // If the name is entered correctly, the user is asked to enter a password
    cout << "Enter your password: ";
    cin >> user_pass;

    if (user_pass == password)
    {
      cout << "Hello " << user_name << ". You are logged in!" << endl;
    }
    else
    {
      cout << "The password is incorrect!" << endl;
    }
  }
  else
  {
    cout << "Wrong user name!" << endl;
  }
  
  system("pause>nul");
  return EXIT_SUCCESS;
}

/* ------  RESULT  -------

*/