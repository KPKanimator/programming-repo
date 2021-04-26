#include <iostream>
using namespace std;

void task1()
{
  const int N = 9;
  const double X = 0.6;
  double b1 = 1, b2, s = b1, q;
  cout << "i: 1" << "\t b: " << b1 << "\t S: " << s << endl;
  for (int i = 1; i < N; ++i)
  {
    q = -X / i;
    b2 = b1 * q;
    s += b2;
    b1 = b2;
    cout << "i: " << i+1 << "\t b: "<<b2 << "\t S: " << s << endl;
  }
  cout << "\nСумма равна s = " << s << endl;
}

void task2()
{
  const int N = 9;
  double x = 0.1;
  const double XLAST = 1;
  const double XSTEP = 0.1;
  const double EPS = 1e-6;
  double b1 = 1, b2, s = b1, q;
  int count;
  while (x <= XLAST)
  {
    b1 = 1;
    s = b1;
    count = 1;
    do
    {
      q = -x / count;
      b2 = b1 * q;
      s += b2;
      b1 = b2;
      count++;
    } while (abs(b1) > EPS);
    cout << "Количество слагаемых: " << count << "\t x: " << x << "\t S: " << s << endl;
    x+=XSTEP;
  }
}

void menu()
{
  cout << "Введите элемент меню:" << endl;
  cout << "\t1. Задача 1" << endl;
  cout << "\t2. Задача 2" << endl;
  cout << "\t0. Выход" << endl;
  cout << "Ваш выбор:";
}


int main()
{
  // TODO: Начало программы
  setlocale(LC_ALL, "");
  int selection = 0;
  while (true)
  {
    system("cls");
    menu();
    cin >> selection;
    switch (selection)
    {
    case 1:
      task1();
      system("pause");
      break;
    case 2:
      task2();
      system("pause");
      break;
    case 0:
      exit(EXIT_SUCCESS);
      break;
    default:
      break;
    }

  }



  system("pause");
  return EXIT_SUCCESS;
}