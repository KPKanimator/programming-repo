
#include <iostream>
using namespace std;

int main()
{
  setlocale(LC_ALL, "");

  short m_short = 0xFFFF;
  unsigned short n_short = 0xFFFF;
  int m_int = m_short;
  int n_int = n_short;

  cout << "m_short = " << m_short << endl;
  cout << "m_int = " << m_int << endl;
  cout << "n_short = " << n_short << endl;
  cout << "n_int = " << n_int << endl;

  system("pause>nul");
  return EXIT_SUCCESS;
}
/*
m_short = -1
m_int = -1
n_short = 65535
n_int = 65535
*/

