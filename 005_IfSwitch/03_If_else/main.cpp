#include <iostream>
using namespace std;

int main()
{
  setlocale(LC_ALL, "Russian");

  int a = 3, b = 2;
  if (a < b)
  {
    cout << "a < b" << endl;
  }
  else
  {
    cout << "a not less b" << endl;
  }
  cout << "This line is always executed!" << endl;

  system("PAUSE");
  return EXIT_SUCCESS;
}
