#include <iostream>
using namespace std;

namespace new_std
{
  double s;
}

double s = 0;
int main()
{
  const int N = 3;
  new_std::s = 0;
  double s = 1;
  for (int i = 0; i < N; ++i)
  {
    double s = 0;
    new_std::s += 1 / 2.;
  }
  cout << new_std::s;
  system("pause");
  return EXIT_SUCCESS;
}
/*
double s = 0;
Чему будет равна переменная s?
0
0.5
1
1.5
*/