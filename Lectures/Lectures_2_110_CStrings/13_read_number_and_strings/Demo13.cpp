/*
 * Author: Kirill Korobchinsky
 *
 *
 */
#define _USE_MATH_DEFINES

#pragma region Includes
#include <iostream>
#include "windows.h"
using namespace std;
#pragma endregion

int main()
{
#pragma region Ukranian
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);
  setlocale(LC_ALL, "Ukrainian");
  using namespace std;
#pragma endregion

//char ch = ' ';
//while(ch != 'x')
//{
//  cout << "Input char: ";
//  cin.get(ch).get();
//  //cout << (char)10;
//  //cout << (char)10;
//  //cout << (char)10;
//  //cout << (char)10;
//  //cout << (char)10;
//  //cout << (char)10;
//  //cout << (char)10;
//  cout << "Was inputed:" << ch << endl;
//  cout << "Was inputed (num):" << (int)ch << endl;
//}

  cout << "В якому році побудували Ваш дім? \n";
  int year = 0;
  cin >> year;
  cin.ignore();
  cout << "За якою адресою він розташований? \n";
  char address[80] = {0};
  cin.getline(address, 80);
  cout << "Рік побудови: " << year << endl;
  cout << "Адреса: " << address << endl;
  cout << "Готово! \n";
  

  system("pause>nul");
  return EXIT_SUCCESS;
}

/* ------  RESULT  -------

*/

