#include <string>
#include <iostream>
#include <fstream>
using namespace std;

ifstream open(const char* fname)
{
  ifstream is(fname);
  if (!is)
    throw fname;
  return is;
}

int main()
{
  //...
  try
  {
    ifstream f1 = open("in1.txt");
    ifstream f2 = open("in2.txt");
    char c = f2.get();
    while (f2.good())
    {
      std::cout << c;
      c = f2.get();
    }
    f1.close();
    f2.close();
  }
  catch (const char* str)
  {
    cerr << "Impossible to open file " << str << "!\n";
    system("pause");
    return EXIT_FAILURE;
  }
  //...
  system("pause");
  return EXIT_SUCCESS;
}