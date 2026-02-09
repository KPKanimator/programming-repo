/*
 * Author: Kirill Korobchinsky
 *    C++ program to demonstrate 
 *    appending of a string using fstream & ofstream
 */
#define _USE_MATH_DEFINES

#pragma region Includes
#include <iostream>
#include <fstream>
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
  
  ofstream of;
  fstream f;

  // opening file using ofstream
  of.open("data.txt", ios::app);
  if (!of)
    cout << "No such file found";
  else {
    of << " String";
    cout << "Data appended successfully\n";
    of.close();
    string word;

    // opening file using fstream
    f.open("data.txt");
    while (f >> word) {
      cout << word << " ";
    }
    f.close();
  }
  
  system("pause>nul");
  return EXIT_SUCCESS;
}

/* ------  RESULT  -------

*/