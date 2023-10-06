/*
 * Author: Kirill Korobchinsky
 * 
 * A manipulator is a special type of object that manages input/output 
 * streams to format the information passed to the stream.
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

int main()
{
#pragma region Ukranian
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Ukrainian");
#pragma endregion
  cout << endl;									// Перехід на новий рядок під час виведення
  cout << boolalpha << true << endl;			// Висновок логічних величин у текстовому вигляді
  cout << noboolalpha << false << endl;			// Висновок логічних величин у числовому вигляді
  cout << oct << 16 << endl;					// Виведення величин у восьмеричній системі числення
  cout << dec << 10 << endl;					// Виведення величин у десятковій системі числення (за умовчанням)
  cout << hex << 255 << endl;					// Виведення величин у шістнадцятковій системі числення
  cout << showbase << 10 << endl;				// Виводити індикатор основи системи числення
  cout << noshowbase << 10 << endl;				// Не виводити індикатор основи системи числення (за умовчанням).
  cout << uppercase << 255 << endl;				// У шістнадцятковій системі числення використовувати літери верхнього регістру
  cout << nouppercase << 255 << endl;			// У шістнадцятковій системі числення використовувати літери нижнього регістру
  cout << dec << showpos << 1 << endl;			// Висновок знака плюс + для позитивних чисел
  cout << noshowpos << 1 << endl;				// Не виводити знак плюс + для позитивних чисел (за умовчанням).
  cout << scientific << 1.234561944 << endl;	// Виведення чисел з плаваючою точкою в експоненційній формі
  cout << fixed << 1.234567 << endl;			// Виведення чисел з плаваючою точкою у фіксованій формі
  cout.width(40);
  cout << right << "Test string!" << endl;		// Вирівнювання по правій границі (за умовчанням).
  cout.width(40);
  cout.fill('*');
  cout << left << "Test string!" << endl;		// Вирівнювання по лівій межі.
  
  
  system("pause>nul");
  return EXIT_SUCCESS;
}

/* ------  RESULT  -------

true
0
20
10
ff
0xa
a
FF
ff
+1
1
1.234562e+00
1.234567
                            Test string!
Test string!****************************

*/