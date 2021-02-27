#include <iostream>
using namespace std;

void menu()
{
  cout << "Выберете элемент меню: \n";
  cout << "\t1. Задача №1 \n";
  cout << "\t2. Задача №2 \n";
  cout << "\t3. Задача №3 \n";
  cout << "Ваш выбор:";
}

// Задача №1 
void task1()
{
  double y, x = 0, a = 0;
  cout << "Введите а:";
  cin >> a;
  cout << "Введите х:";
  cin >> x;
  if (x == 0 && a == 0)
    cout << "\nДеление на 0\n";
  else
  {
    if (x <= 0)
      y = -8 * a * a * a / (x * x + 4 * a * a);
    else
      y = 2 * a * sqrt(1 - x * x / a * a) - 4 * a;
    cout << "y = " << y << endl;
  }
}

// Задача №2
void task2()
{
  double r, s = 0;
  int k = 0;

  cout << "Введите k:";
  cin >> k;
  cout << "Введите r:";
  cin >> r;

  switch (k)
  {
  case 1: s = 1; break;
  case 2: s = 2; break;
  case 3: s = 3; break;
  case 4: s = 4; break;
  default:
    break;
  }
  cout << "S = " << s << endl;
}

// Задача №3
void task3()
{
  double x = 0, y = 0;
  cout << "Input x: ";
  cin >> x;
  cout << "Input y: ";
  cin >> y;

  if ((x <= 2) and (x >= -2) and (y <= 1) and (y >= -1))
  {
    cout << "\nThe piont inside the area\n\n";
  }
  else
  {
    cout << "\nThe piont not in the area\n\n";
  }
}

int main()
{
  setlocale(LC_ALL, "");
  menu();
  int selecetor = 0;
  cin >> selecetor;
  switch (selecetor)
  {
  case 1: task1(); break;
  case 2: task2(); break;
  case 3: task3(); break;
  default:
    cout << "\nВведите правильное значение\n\n";
    break;
  }
  system("pause");
  return EXIT_SUCCESS;
}