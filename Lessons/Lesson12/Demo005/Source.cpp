#include <iostream>
using namespace std;


int main()
{
  int sum, a, b, c, d;
  cin >> a;
  sum = a;
  d = a % 10; a /= 10;
  c = a % 10; a /= 10;
  b = a % 10; a /= 10;
  sum += d * 1000 + c * 100 + b * 10 + a;
  sum += a * 1000 + c * 100 + b * 10 + d;
  sum += b * 1000 + a * 100 + d * 10 + c;
  cout<<sum;
  return EXIT_SUCCESS;
}