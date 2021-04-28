#include <iostream>
#include <string>
using namespace std;

int main()
{
  try
  {
    // Here we write lines that will throw an exception
    throw -1;
  }
  catch (int a)
  {
    cerr << "We caught an int exception with value: " << a << '\n';
  }
  catch (double)
  {
    cerr << "We caught an exception of type double" << '\n';
  }
  catch (const std::string& str)
  {
    std::cerr << "We caught an exception of type std::string" << '\n';
  }
  std::cout << "Continuing our way!\n";

  system("pause>nul");
  return EXIT_SUCCESS;
}