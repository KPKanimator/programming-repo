#include <iostream>
using namespace std;

//typedef enum
//{
//  Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday
//} Weekday;

/*
enum Weekday
{
  Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday
};
*/
//
enum Weekday
{
  Weekday_First = 0,
  Sunday = 0, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Weekday_Last = Saturday
};

int main()
{
  setlocale(LC_ALL, "Russian");
  Weekday today = Monday;
  // или так
  enum Weekday current; // В C++ enum можно опустить

  current = (Weekday)10;

  if (current<Weekday_First || current>Weekday_Last)
  {
    // Обработка некорректного значения ...
    cout << "Вы ввели некорректное значение :(" << endl;
  }

  system("pause");
  system("cls");

  system("pause");
  return 0;
}