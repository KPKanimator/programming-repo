/*
 * Author: Kirill Korobchinsky
 *
 * Виведення у рамкі числа
 */
#define _USE_MATH_DEFINES

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  const char SYMBOL = '-';
  const int WIDTH = 5;

  double x = 0;
  cin >> x;

  cout << setfill(SYMBOL) << setw(WIDTH) << "" << endl;
  cout << SYMBOL << x<< SYMBOL << endl;
  cout << setfill(SYMBOL) << setw(WIDTH) << "" << endl;

  system("pause>nul");
  return EXIT_SUCCESS;
}

/* ------  RESULT  -------

*/