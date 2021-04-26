#include "String.hpp"

String::String()
{
  cout<< "\n====== ctor: String() ============ \n\n";
  _str = nullptr;
  _size_str = 0;
}

String::String(const char* str)
{
  cout << "\n====== ctor: String(const char* str) ============ \n\n";
  _size_str = strlen(str);
  _str = new char[_size_str];
  if (_size_str == 0 or str == nullptr) {
    throw "Exception";
  }
  strcpy(_str, str);   // копирование строки 
}

String::String(const char* str, int size) :  String(str)
{ 
  cout << "\n====== ctor: String(const char* str, int size) ============ \n\n";
  _size_str = size;
};
