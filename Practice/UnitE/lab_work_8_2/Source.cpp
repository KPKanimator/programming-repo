#include <iostream>
#include "MyString.hpp"

// Выбрать класс MyString
// << >>
//унарный +  str -> +str => +test 
//унарный -
//префиксный инкремент
//постфиксный инкремент
//префиксный декремент
//постфиксный декремент

int main()
{
  setlocale(LC_ALL, "");
  MyString mySting("префиксный инкремент");
  //cout << mySting.getData();
  cout << mySting;
  MyString str;
  cout << str;
  cin >> str;
  cout << str;
  // Унарные операторы
  cout << +str;
  cout << -str;
  // Бинарные операторы
  cout << str + mySting;
  //cout << str - mySting;
  // Инкременты
  cout << "Строка инкремента: " << ++str;
  cout << "Следующая "<< str;
  cout << "Строка инкремента: " << str++;
  cout << "Следующая " << str;



  system("pause>nul");
  return EXIT_SUCCESS;
}