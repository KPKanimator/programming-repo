#include "Student.hpp"
#include <iostream>

int main()
{
  setlocale(LC_ALL, "");
  Student student = {"Шевченко Тарас", Group::csience, 19};
  show(student); 

  Student *students = new Student[5];
  for (int i = 0; i < 5; i++)
  {
    show(students[i]); // ????????
  }
  delete[] students;
  system("pause");
  return EXIT_SUCCESS;
}