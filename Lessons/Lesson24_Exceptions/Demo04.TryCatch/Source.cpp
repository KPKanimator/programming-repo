#include <stdexcept>
#include <iostream>
#include <limits>
using namespace std;

void MyFunc(int c)
{
  //cerr<< "numeric_limits<char>::max()" << (int) numeric_limits<char>::max() << endl;
  if (c > numeric_limits<char>::max())
    throw invalid_argument("MyFunc argument too large.");
  //...
}

// 3 4
int main()
{
  setlocale(LC_ALL, "");

  int num1;
  int num2;
  cout << "Введите значение num1: ";
  cin >> num1;
  cout << "Введите значение num2: ";
  cin >> num2;

  while (num2-- >= 0)
  {
    cout << "num1 + num2 = " << num1 + num2 << endl;
    cout << "num1 / num2 = ";
    cout << "num1 - num2 = " << num1 - num2 << endl;
    try
    {
      if (num2 == 0)
        throw "Ошибка - на 0 делить нельзя!!!!"; //генерировать символьную строку
      cout << num1 / num2 << endl;
      // А что если...
      MyFunc(127 - num2); //cause an exception to throw
    }
    catch (const char* str)//сюда передастся строка
    {
      cerr << str << endl;
    }
    catch (invalid_argument& e)
    {
      cerr << e.what() << endl;
      //    return -1;
    }
    //...    
    cout << "=================================" << endl << endl;
  }
  cout << "Программа завершила работу!" << endl << endl;

  system("pause>nul");
  return EXIT_SUCCESS;
}
