#include <iostream>
using namespace std;

int main()
{
  setlocale(LC_ALL, "rus");

  int a = 3, b = 2;
  if (a < b)
  {
    cout << "a < b" << endl;
  }
  else
  {
    cout << "a не меньше b" << endl;
  }
  cout << "Эта строка выполнится всегда!" << endl;

  system("PAUSE");
  return EXIT_SUCCESS;
}
