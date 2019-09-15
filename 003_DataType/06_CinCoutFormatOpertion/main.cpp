#include <iostream> // include lib for cout
#include <iomanip>
using namespace std;

int main()
{
  setlocale(LC_ALL, "Russian");

  int a = 12;            //4 bytes
  char с = 'f';          //1 byte
  double d = 10.0 / 3;   //8 bytes
  cout.setf(ios_base::fixed, ios_base::floatfield);
  cout.precision(12);
  cout << "\t d=" << d << endl;
  /*
  short b;  //2 bytes
  long c;   //4 bytes
  long long d;//8 bytes
  a = 23;
  b = 12;
  */

  // объ€вление переменных
  int x = 10, y = -2, z = 3;
  cout << " ~~~~~~~ ќбъ€влены переменные ~~~~~~ " << endl;
  cout << "\t x=" << setw(3) << x << endl;
  cout << "\t y=" << setw(3) << y << endl;
  cout << "\t z=" << setw(3) << z << endl;
  cout << " ~~~~~~~ –езультат вычислений ~~~~~ " << endl;
  cout << "\t 2 * x + 5 = " << 2 * x + 5 << endl;
  x = y % z;
  cout << "\t x= " << x << endl;
  cout << "\t x >= 2 = " << (x >= 2) << endl;
  x = 3219;
  cout << "\t x= " << x << endl;
  cout << "\t x == 3219 = " << (x == 3219) << endl;
  cout << "\t y / z * 3 = " << y / z * 3 << endl;
  cout << "\t y || z = " << (y || z) << endl;
  cout << "\t !(x + 1) = " << !(x + 1) << endl;

  system("pause");
  return EXIT_SUCCESS;
}