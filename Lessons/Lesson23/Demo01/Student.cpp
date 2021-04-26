#include "Student.hpp"
#include <iostream>

void show(Student student)
{
  cout << "Имя:" << student.name << endl;
  cout << "Группа:";
  switch (student.group)
  {
  case 315: cout << "Прикладная математика"; break;
  case 3151:cout << "Комьютерниые науки"; break;
  case 413: cout << "Системные аналитики"; break;
  }
  cout <<endl << "Возраст:" << student.age<< endl;
}