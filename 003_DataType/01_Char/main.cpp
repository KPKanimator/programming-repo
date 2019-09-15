#include <iostream> // include lib for cout
using namespace std;

int main()
{
  char a = 'A';
  char b = '\x0041';
  char c = '\u0906';

#pragma region CHAR WCHAR_T
  char cc = 'd';
  wchar_t cd = 'c';
#pragma endregion

#pragma region wcout
  char wa = 'H';
  wchar_t wb = 'e';
  std::wcout << wa << wb << '\n';
  system("pause");
#pragma endregion

#pragma region Convertin DataType
  char a3 = 'H';
  wchar_t b3 = 'e';
  char16_t c3 = 'l';
  char32_t d3 = 'o';
  std::cout << a3 << (char)b3 << (char)c3 << (char)d3 << "\n";
  system("pause");
#pragma endregion


  system("pause");
  return EXIT_SUCCESS;
}