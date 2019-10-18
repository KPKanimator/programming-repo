#include <iostream>
using namespace std;

int main()
{
  short a = 1, b = 2;
  bool result;

  cout.setf(ios::boolalpha);
  // > - operator greater than 
  result = a > b;
  cout << "a > b =" << result << endl;
  // >= - operator greater than or equal
  result = a >= b;
  cout << "a >= b =" << result << endl;
  // < - operator less
  result = a < b;
  cout << "a < b =" << result << endl;
  // <= - operator less than or equal to
  result = a <= b;
  cout << "a <= b =" << result << endl;
  // == - equality operator
  result = a == b;
  cout << "a == b =" << result << endl;
  // != - inequality operator
  result = a != b;
  cout << "a != b = " << result << endl;
  system("PAUSE");
  return 0;
}