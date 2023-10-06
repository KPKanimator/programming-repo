/*
 * Author: Kirill Korobchinsky
 * 
 * Output in different number systems
 */
#define _USE_MATH_DEFINES

#pragma region Includes
#include <iostream>
//#include <string>
#include <math.h>
#include <stdlib.h>
#include <locale>
#include "windows.h"
using namespace std;
#pragma endregion

int main()
{
#pragma region Ukranian
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Ukrainian");
#pragma endregion

  //cout << boolalpha << (1.f == 1.f) << endl; //> < <= >= ==

  cout << boolalpha << (16777215.f == 16777216.f) << endl; 
  cout << boolalpha << (16777216.f == 16777217.f) << endl; 


  cout << boolalpha << (16777215. == 16777216.) << endl;
  cout << boolalpha << (16777216. == 16777217.) << endl;


	int hexNumber = 0xa159b;
	cout << "hexNumber = " << hex << hexNumber << endl << dec;

	int octNumber = 0111;
	cout << "octNumber = " << oct << octNumber << endl << dec;

	double index = 1e+2; // 1*10^2 = 100
	cout << "\n«наченн€ \tindex = "
		<< index << endl;

	int a = 1, b = 2, c = 3;
	cout << "\na*b+c=" << a * b + c << endl;

	string name = "";
	cout << "¬вед≥ть ваше ≥м'€: ";
	cin >> name;
	cout << "Hi :) ";
	cout << name;

  system("pause>nul");
  return EXIT_SUCCESS;
}

/* ------  RESULT  -------
false
true
false
false
hexNumber = a159b
octNumber = 111

«наченн€        index = 100

a*b+c=5
¬вед≥ть ваше ≥м'€: Kir
Hi :) Kir




*/