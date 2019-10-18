#include <iostream>
using namespace std;

int main()
{
  short a = 1, b = 2;
  bool result;

  cout.setf(ios::boolalpha);
  // > - больше
  result = a > b;
  cout << "a > b = " << result << endl;
  // >= - больше или равно
  result = a >= b;
  cout << "a >= b = " << result << endl;
  // < - меньше
  result = a < b;
  cout << "a < b = " << result << endl;
  // <= - меньше или равно
  result = a <= b;
  cout << "a <= b = " << result << endl;
  // == - оператор равенства
  result = a == b;
  cout << "a == b = " << result << endl;
  // != - оператор неравенства
  result = a != b;
  cout << "a != b = " << result << endl;
  system("PAUSE");
  return 0;
}