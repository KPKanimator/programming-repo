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


// Overloaded functions can differ in type and number of arguments
void function();
void function(string s);
void function(int i);
void function(double d);
void function(string s, int i);
void function(int i, string s);
//void function(string);				// Так робити не можна!

int main()
{
#pragma region Ukranian
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Ukrainian");
#pragma endregion
  
	function();                  // 1-й overload.
	function("AAAA");            // 2-й overload.
	function(1);                 // 3-й overload.
	function(3.14);              // 4-й overload.
	function("B ", 2);           // 5-й overload.
	function(3, " C");           // 6-й overload.
  
  system("pause>nul");
  return EXIT_SUCCESS;
}


void function()
{
	cout << "Hello" << endl;
}

void function(string s)
{
	cout << s << endl;
}

void function(int i)
{
	cout << i << endl;
}

void function(double d)
{
	cout << d << endl;
}

void function(string s, int i)
{
	cout << "s = " << s << ", i = " << i << endl;
}

void function(int i, string s)
{
	cout << "i = " << i << ", s = " << s << endl;
}

/* ------  RESULT  -------

*/