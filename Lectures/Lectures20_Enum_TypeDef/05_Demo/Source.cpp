/*
 * Author: Kirill Korobchinsky
 * 
 * 
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
//определяем перечисление и объявляем переменную
enum  weddingAnn { chintz = 1, paper, leather, linen, wooden } year;

int main()
{
#pragma region Ukranian
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Ukrainian");
#pragma endregion


  cout << "Олег с Ольгой отмечают\t" << chintz << "-ю годовщину со дня свадьбы!!!";
  cout << "\n";
  cout << "Андрей с Анной отмечают\t" << paper << "-ю годовщину со дня свадьбы!!!";
  cout << "\n";
  cout << "Марк с Ириной отмечают\t" << leather << "-ю годовщину со дня свадьбы!!!";
  cout << "\n";
  cout << "Игорь с Юлией отмечают\t" << linen << "-ю годовщину со дня свадьбы!!!";
  cout << "\n";
  cout << "Олег с Аллой отмечают\t" << wooden << "-ю годовщину со дня свадьбы!!!";
  cout << "\n\n";
  
  
  system("pause>nul");
  return EXIT_SUCCESS;
}

/* ------  RESULT  -------

*/