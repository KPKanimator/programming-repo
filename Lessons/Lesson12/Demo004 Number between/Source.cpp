#include <iostream>
using namespace std;


int main()
{
  setlocale(LC_ALL, "");
  int number1 = 0, number2 = 0, sum = 0;
  cout << "Введите первое целое число: ";
  cin >> number1;
  bool flag = false; // Число введено правильно
  do
  {
    cout << "Введите второе целое число: ";
    cin >> number2;
    if (number2 < number1)
    {
      cout << "\n Первое число должно быть меньше второго!\n Повторите ввод.\n";
      flag = true; // ошибка, требуется повторный ввод
    }
    else
      flag = false; // Число введено правильно
  } while (flag);
  for (int i = number1; i <= number2; i++)
  {
    sum += i;
  }

  cout << "\n\nCумма целых от " << number1 << " до " << number2 << " равна " << sum << endl;
  system("pause");
  return EXIT_SUCCESS;
}