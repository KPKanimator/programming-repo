#include <iostream>
using namespace std;

int main()
{
  setlocale(LC_ALL, "");
  cout << "Введите координаты точки: \n";
  int x, y;
  cout << " x = ";
  cin >> x;
  cout << " y = ";
  cin >> y;

  bool s = -y >= x and y >= x * x + 1 or y > 0;

  cout << (s ? "Вы попали в заданную область!\n" : "Вы промазали. Увы ((\n");


  int num = 0;
  cout << " Введите целое число num = ";
  cin >> num;
  if (num % 2 == 0)
  {
    cout << "Число чётное" << endl;
  }
  else
    cout << "Число не чётное" << endl;


  system("pause");
  return EXIT_SUCCESS;
}