#pragma once
#include <iostream>
using namespace std;

class String
{
private:
  char* _str;
  int _size_str;

public:
  String();
  String(const char* str);
  String(const char* str, int size);
  const char* get_string() const { return _str; };
};

