#include <stdexcept>
#include <iostream>
#include <limits>
using namespace std;

void MyFunc(int c)
{
  if (c > numeric_limits< char> ::max())
    throw invalid_argument("MyFunc argument too large.");
  //...
}


int main()
{
  setlocale(LC_ALL, "");

  int num1;
  int num2;
  cout << "Введите значение num1: ";
  cin >> num1;
  cout << "Введите значение num2: ";
  cin >> num2;

  while (num2-- >=0)
  {
    cout << "num1 + num2 = " << num1 + num2 << endl;
    cout << "num1 / num2 = ";
    cout << "num1 - num2 = " << num1 - num2 << endl;
    try
    {
      if (num2 == 0)
        throw "Ошибка - на 0 делить нельзя!!!!"; //генерировать символьную строку
      cout << num1 / num2 << endl;
    }
    catch (const char* str)//сюда передастся строка
    {
      cerr << str << endl;
    }
    cout << "=================================" << endl << endl;
  }

  try
  {
    MyFunc(256); //cause an exception to throw
  }

  catch (invalid_argument& e)
  {
    cerr << e.what() << endl;
    return -1;
  }
  //...


  cout << "Программа завершила работу!" << endl << endl;

  system("pause>nul");
  return EXIT_SUCCESS;
}
