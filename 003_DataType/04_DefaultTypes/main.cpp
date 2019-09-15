#include <iostream> // include lib for cout
using namespace std;

int main()
{
  int a = 5;
  char b;
  double c;

  // Error	C4700	uninitialized local variable 'b' used	
  cout << b;

  system("pause");
  return EXIT_SUCCESS;
}