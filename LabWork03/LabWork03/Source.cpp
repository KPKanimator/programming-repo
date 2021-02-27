#include <iostream>
using namespace std;

class MyClass
{
public:
  int x;
  MyClass();
  ~MyClass();

private:

};

MyClass::MyClass()
{
}

MyClass::~MyClass()
{
}

void foo(MyClass *mc)
{
  mc->x = 10;
}

int main()
{
  MyClass *mc = new MyClass();
  cout << mc->x <<endl;
  mc->x = 0;
  foo(mc);
  cout << mc->x << endl;
  std::cout << "My name is Kirill Korobchinskiy";

  std::cout << ", 315 gr.";
  std::cout << std::endl;
  // оголошення заданих змінних
  int a = 12;
  float b = 13.4f;
  char c = 'y';
  bool d = true;
  // виведення на консоль
  std::cout << "int a=" << a << std::endl;
  std::cout << "float b=" << b << std::endl;
  std::cout << "char c=" << c << std::endl;
  std::cout << "bool d=" << d << std::endl;
  system("pause>null");
  return EXIT_SUCCESS;
}