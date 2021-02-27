#include <iostream>
using namespace std;

/*
  Задача: ввести с клавиатуры массив из 5 элементов,
  умножить все элементы на 2 и вывести полученный массив на экран.
*/
int main()
{
  const int N = 5;
  int a[N] = { 0 };

  cout << "Pz input 5 items for array a:\n";
  for (int i = 0; i < N; ++i)
  {
    cout << "a[" << i << "]=";
    cin >> a[i];
    a[i] *= 2;
  }

  cout << "Result array a:\n";
  for (int i = 0; i < N; ++i)
  {
    cout << "a[" << i << "]=" << a[i] << endl;
  }

  system("pause");
  return EXIT_SUCCESS;
}