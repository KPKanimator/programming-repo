#include <iostream>
using namespace std;


int main()
{
  const double A = 0.5;
  const double X = 10.4;
  const double BT = 1.65;
  double y, numerator, denumerator;
  numerator = acos(1.5e-8 * fabs(1.9e3 * X - exp(A * X)));
  numerator += acos(1.5e-8 * fabs(1.9e3 * X - exp(A * X)));
  numerator += acos(1.5e-8 * fabs(1.9e3 * X - exp(A * X)));
  denumerator = pow(A * X - 4.72, 2. / 5);
  y = numerator / denumerator;


  cout << "\ty=" << y << endl;

  system("pause");
  return EXIT_SUCCESS;
}