/*
 * Author: Kirill Korobchinsky
 * 
 * enum level
 */
#define _USE_MATH_DEFINES

#pragma region Includes
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <locale>
#include "windows.h"
using namespace std;
#pragma endregion
//определяем перечисление
enum level { parking, supermarket, hardwareStores, boutiques, sportSpa, clubRestaurantBar };

int main()
{
#pragma region Ukranian
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Ukrainian");
#pragma endregion
  level floor = parking;//переменная типа перечисления level
  //level floor = 0; //не скомпилируется
  int fl = floor;//выбор этажа пользователем 

  cout << "\n\t$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n\n";
  cout << "\tДобро пожаловать в наш торгово-развлекательный центр MALL!!!\n";
  cout << "\tПредлагаем Вам проехаться в лифте и посетить все этажи!\n\n";
  cout << "\t$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n\n";

  cout << "\nНажмите кнопку с номером этажа (от 0 до 5): ";
  cin >> fl;

  switch (fl)
  {
  case(parking):
    cout << "\aВы спустились в паркинг!!!" << endl;
    break;

  case(supermarket):
    cout << "\aВы на первом этаже!";
    cout << "\nЗдесь вы можете посетить наш супермаркет и купить продукты и товары для дома.\n\n";
    break;

  case(hardwareStores):
    cout << "\aВы на втором этаже!";
    cout << "\nЗдесь расположились магазины бытовой техники, IT  и мобильных телефонов.\n\n";
    break;

  case(boutiques):
    cout << "\aВы на третьем этаже!";
    cout << "\nЗдесь вас ждет незабываемый шопинг! Одежда, обувь, магазины косметики.\n\n";
    break;

  case(sportSpa):
    cout << "\aВы на четвертом этаже!";
    cout << "\nЗдесь вы можете посетить бассейн, каток, спортзалы, spa-салон!\n\n";
    break;

  case(clubRestaurantBar):
    cout << "\aВы на пятом этаже!";
    cout << "\nТут вы можете посетить ночной клуб, бар и ресторан!\n\n";
    break;

  default: cout << "\a\a\aОшибка! У нас только 5 этажей!\n\n";
  }
  
  system("pause>nul");
  return EXIT_SUCCESS;
}

/* ------  RESULT  -------

*/