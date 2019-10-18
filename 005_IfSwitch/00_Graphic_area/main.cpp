#include <iostream>
using namespace std;

int main()
{
  setlocale(LC_ALL, "Russian");
  cout << "Input x, y:";
  double x = 0, y = 0;
  cin >> x >> y;

  if ((x >= -2) && (x <= 2) && (y >= -1) && (y <= 1))
  {
    cout << "The point inside the area";
  }
  else
  {
    cout << "The point outside area :(";
  }
  cout << endl;

  system("PAUSE");
  return EXIT_SUCCESS;
}