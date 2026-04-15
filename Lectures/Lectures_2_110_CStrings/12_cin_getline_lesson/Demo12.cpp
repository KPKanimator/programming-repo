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

unsigned int c_in_str(const char* str, char ch);

static void slide1()
{
  const int N = 20;
  char name[N];
  char dessert[N];
  cout << "Введіть Ваше ім'я: ";
  // зчитати до символу нового рядка
  cin.getline(name, N);
  cout << "Введіть Ваш улюблений десерт: ";
  // зчитати до символу нового рядка
  cin.getline(dessert, N);
  cout << "У мене є смачний " << dessert;
  cout << "для Вас, " << name << ".\n";
}

static void slide2()
{
  cout << "В якому році побудували Ваш дім? \n";
  int year;
  cin >> year;
  cout << "За якою адресою він розташований? \n";
  char address[80];
  cin.getline(address, 80);
  cout << "Рік побудови: " << year << endl;
  cout << "Адреса: " << address << endl;
  cout << "Готово! \n";
}

static void slide3() {

}
static void slide4() {

}
static void slide5() {

}
static void slide6() {

}
int main()
{
#pragma region Ukranian
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);
  setlocale(LC_ALL, "Ukrainian");
  using namespace std;
#pragma endregion
  slide1();
  //slide2();



  system("pause>nul");
  return EXIT_SUCCESS;
}

/* ------  RESULT  -------

*/

