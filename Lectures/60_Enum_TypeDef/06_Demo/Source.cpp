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
//���������� ������������
enum level { parking, supermarket, hardwareStores, boutiques, sportSpa, clubRestaurantBar };

int main()
{
#pragma region Ukranian
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Ukrainian");
#pragma endregion
  level floor = parking;//���������� ���� ������������ level
  //level floor = 0; //�� ��������������
  int fl = floor;//����� ����� ������������� 

  cout << "\n\t$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n\n";
  cout << "\t����� ���������� � ��� �������-��������������� ����� MALL!!!\n";
  cout << "\t���������� ��� ���������� � ����� � �������� ��� �����!\n\n";
  cout << "\t$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n\n";

  cout << "\n������� ������ � ������� ����� (�� 0 �� 5): ";
  cin >> fl;

  switch (fl)
  {
  case(parking):
    cout << "\a�� ���������� � �������!!!" << endl;
    break;

  case(supermarket):
    cout << "\a�� �� ������ �����!";
    cout << "\n����� �� ������ �������� ��� ����������� � ������ �������� � ������ ��� ����.\n\n";
    break;

  case(hardwareStores):
    cout << "\a�� �� ������ �����!";
    cout << "\n����� ������������� �������� ������� �������, IT  � ��������� ���������.\n\n";
    break;

  case(boutiques):
    cout << "\a�� �� ������� �����!";
    cout << "\n����� ��� ���� ������������ ������! ������, �����, �������� ���������.\n\n";
    break;

  case(sportSpa):
    cout << "\a�� �� ��������� �����!";
    cout << "\n����� �� ������ �������� �������, �����, ���������, spa-�����!\n\n";
    break;

  case(clubRestaurantBar):
    cout << "\a�� �� ����� �����!";
    cout << "\n��� �� ������ �������� ������ ����, ��� � ��������!\n\n";
    break;

  default: cout << "\a\a\a������! � ��� ������ 5 ������!\n\n";
  }
  
  system("pause>nul");
  return EXIT_SUCCESS;
}

/* ------  RESULT  -------

*/