#include <iostream>
using namespace std;

int main()
{
  int* ptr_int = nullptr;
  cout << "Address of prt_int " << ptr_int << endl;
  cout << "Address of &prt_int " << &ptr_int << endl;

  int* ptr_int3;
  int* ptr_int2 = new int;
  cout << "Address of &prt_int2 " << &ptr_int2 << endl;
  delete ptr_int2;
  cout << "Address of &prt_int2 " << &ptr_int2 << endl;

  int x = 7;
  int& ref_x = x;
  ref_x++;
  x++;
  cout << " x is " << x << endl; // 8
  cout << " reference x is " << ref_x << endl; // ?


  /*
  *
  **
  ***
  ****
  *****
  */
  for (int i = 1; i <= 5; ++i)
  {
    for (int j = 1; j <= i; ++j)
    {
      cout << "*";
    }
    cout << endl;
  }

  system("pause");
  return EXIT_SUCCESS;
}

