#include <iostream>
using namespace std;

int main()
{
  setlocale(LC_ALL, "");

  int num1;
  int num2;
  int var = 2; //управл€юща€ переменна€ дл€ while

  while (var--) //пока var - истина (не равно 0)
  {
    cout << "¬ведите значение num1: ";
    cin >> num1;
    cout << "¬ведите значение num2: ";
    cin >> num2;

    cout << "num1 + num2 = " << num1 + num2 << endl;
    cout << "num1 / num2 = " << num1 / num2 << endl;
    cout << "num1 - num2 = " << num1 - num2 << endl;
    cout << "=================================" << endl << endl;
  }

  cout << "ѕрограмма завершила работу!" << endl << endl;


  system("pause>nul");
  return EXIT_SUCCESS;
}
