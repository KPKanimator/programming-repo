#include <iostream>
using namespace std;

int main()
{
  int lower, upper, step;
  char c;
  //bool success;

  const int MAXLINE = 80;
  char esc = '\\';
  int i = 0;
  int limit = MAXLINE + 1;
  float eps = 1.0e-5f;
  bool success = true;

  unsigned short a = 65535;
  std::cout << "a = " << a << endl;
  a = a + 2;
  cout << "a + 2 = " << a << endl; // -65536 65537 65539
  a += 2;
  cout << "a + 2 = " << a << endl;



  system("pause");
  return EXIT_SUCCESS;
}