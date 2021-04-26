#include <iostream>
using namespace std;

enum progr 
{ 
   C, Pascal, Foxpro, Modula2, Basic, Fortran 
} lang;

int main()
{
  cout << " progr samples: " << lang << endl;
  system("pause");
  system("cls");

  lang = progr::Basic;
  cout << " progr samples: " << lang << endl;
  system("pause");
  system("cls");

  enum elements { elem1 = -1, elem2, elem3 = 5 };
  cout << " elements samples: " << elements::elem1 << endl;
  system("pause");
  system("cls");

  system("pause");
  return 0;
}