#include <iostream>
using namespace std;


int main()
{
  setlocale(LC_ALL, "");
  string str;
  string str1 = "значение";
  string str2{ "The string!" };
  string str3("The string!");
  string str4 = str1;
  string str5(str1);


  str = "Это строка!";

  cout << str << endl;
  cout << str1 << endl;
  cout << str2 << endl;
  cout << str3 << endl;
  cout << str4 << endl;
  cout << str5 << endl;

  for (int i = 0; i < str5.length(); i++)
  {
    cout << str5[i];
  }
  cout << endl;
  for (int i = 0; i < str5.length() + 5; i++)
  {
    try
    {
      cout << str5.at(i);
    }
    catch (const std::exception& ex)
    {
      cerr << endl << ex.what();
    }
  }
  cout << endl;
  string str6(str5);
  cout << "str6 size is " << str6.size() << endl;
  cout << "str6 lenght is " << str6.length() << endl;
  cout << endl;
  str6 += " more";
  cout << "str6 size is " << str6.size() << endl;
  cout << "str6 lenght is " << str6.length() << endl;


  cout << endl << endl;
  system("pause");
  return EXIT_SUCCESS;
}