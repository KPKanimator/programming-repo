#include <iostream>
using namespace std;

int main()
{
  setlocale(LC_ALL, "");
  unsigned int n, q;
  cout << "??????? ?????????? ?????: ";
  cin >> n;
  int rest;
  for (int i = 0; i < n; ++i)
  {
    cout << "??????? q: ";
    cin >> q;
    cout << endl;
    // Task3: ???????? ??? ?????????, ??? ????? ????????? x2 + 3qi ? 5 ????????????? ? ????????????.
    if (5 - 3 * q > 0)
      cout << "???????? q ????? ????????????? ? ?????????????? ??????? ??-??\n";
    // Task2: ??? ??????? ?? 7 ???? ??????? 1, 2 ??? 5;
    rest = q % 7;
    if (rest == 1 or rest == 2 or rest == 5)
      cout << "???????? q ??? ??????? ?? 7 ???? ??????? 1, 2 ??? 5\n";
    // Task1: ???????? ?????????? ????????? ???????;
    rest = q / 2;
    if(rest % 2 != 0 )
      cout << "???????? q ????e??? ????????? ???????? ????o?\n";
  }

  system("pause");
  return EXIT_SUCCESS;
}