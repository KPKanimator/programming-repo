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
//���������� ������������ � ��������� ����������
enum  weddingAnn { chintz = 1, paper, leather, linen, wooden } year;

int main()
{
#pragma region Ukranian
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Ukrainian");
#pragma endregion


  cout << "���� � ������ ��������\t" << chintz << "-� ��������� �� ��� �������!!!";
  cout << "\n";
  cout << "������ � ����� ��������\t" << paper << "-� ��������� �� ��� �������!!!";
  cout << "\n";
  cout << "���� � ������ ��������\t" << leather << "-� ��������� �� ��� �������!!!";
  cout << "\n";
  cout << "����� � ����� ��������\t" << linen << "-� ��������� �� ��� �������!!!";
  cout << "\n";
  cout << "���� � ����� ��������\t" << wooden << "-� ��������� �� ��� �������!!!";
  cout << "\n\n";
  
  
  system("pause>nul");
  return EXIT_SUCCESS;
}

/* ------  RESULT  -------

*/