#include <iostream>
#include "Header.hpp"
#include <string>
using namespace std;

bool check_pass(string password)
{
  const string VALID_PASS = "qwerty123";
  bool check = false;
  if(password == VALID_PASS)
    check = true;
  return check;
}

int main()
{
  setlocale(LC_ALL,"");
  output_number(); // גûחמג פ-טי
  int i = funci();
  cout << "Âגוהטעו ןאנמכü: ";
  string user_pass;
  getline(cin, user_pass);
  if(!check_pass(user_pass))
  { 
    cerr<< "Fatal ERROR!!\n";
    system("pause");
    return EXIT_FAILURE;
  }
  cout << "Freandly code\n\n";

  system("pause");
  return EXIT_SUCCESS;
}
