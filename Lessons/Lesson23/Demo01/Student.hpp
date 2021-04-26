#pragma once
#include <string>
#include "Group.hpp"
using namespace std;

struct Student
{
  string name;
  Group group;
  int age;
};

void show(Student student);