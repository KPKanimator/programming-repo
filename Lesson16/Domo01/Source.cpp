#include <iostream>
using namespace std;

int main()
{
  int v = 10;
  int *pv = &v;
  cout << "v = " << v << "\t &v = " << &v << endl;
  cout << "*pv = " << *pv << "\t &pv = " << &pv << "\t pv = " << pv << endl;

  cout << "(&v == pv) " << boolalpha << (&v == pv) << endl; 


  system("pause");
  return EXIT_SUCCESS;
}