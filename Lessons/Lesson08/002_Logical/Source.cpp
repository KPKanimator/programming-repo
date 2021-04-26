#include <iostream>
//#include <cmath>
//using namespace std;
//int main() {
//  long long s = -1;
//  long long k = -1;
//  cin >> s;
//  k = sqrt(-2 * s + 1);
//  cout << k; cin >> s;
//  return 0;
//}

#include <iostream>
using namespace std;

int main()
{
  setlocale(LC_ALL, "");
  //A = B = true; C = false X = 1.5 Y = 2.5
  bool z, a = 1, b = 1, c = false;
  float x = 1.5f, y = 2.5f;
  cout << "A = " << boolalpha << a;
  cout << "\tB = " << boolalpha << b;
  cout << "\tC = " << boolalpha << c << endl;

  cout << "X = " << x;
  cout << "\t\tY = " << y << endl;

  z = !a or x + y < 0 and b or c and (x >= y) or (x >= 5.5) and a or !b;
  cout << "Answer: " << boolalpha << z << endl;

  system("pause");
  return EXIT_SUCCESS;
}




