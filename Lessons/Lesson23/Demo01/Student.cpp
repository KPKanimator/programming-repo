#include "Student.hpp"
#include <iostream>

void show(Student student)
{
  cout << "???:" << student.name << endl;
  cout << "??????:";
  switch (student.group)
  {
  case 315: cout << "?????????? ??????????"; break;
  case 3151:cout << "???????????? ?????"; break;
  case 413: cout << "????????? ?????????"; break;
  }
  cout <<endl << "???????:" << student.age<< endl;
}