#include <iostream> // Для введення-виведення на консоль
#include <string>
//#include "windows.h";
#include <locale>
#include <codecvt>   // для роботи з Unicode (UTF-8)
using namespace std;

int main()
{
#pragma region Вмикає локаль системи, щоб C-функції знали про національне кодування. 
  setlocale(LC_ALL, "Ukrainian");
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);
#pragma endregion
#pragma region wcout wcin L 
//  setlocale(LC_ALL, "uk_UA.UTF-8");
//#ifdef _WIN32
//  system("chcp 65001"); // Увімкнути UTF-8 в консолі
//#endif
//  std::wcout.imbue(std::locale("uk_UA.UTF-8"));
//  std::wcin.imbue(std::locale("uk_UA.UTF-8"));
//  wcout << "One row as text" << endl;
//  wcout << L"Ще один рядок українською, для тесту з ' іііі їїїї єєє ????" << endl;
//  wstring line;
//  getline(wcin, line);
//  wcout << line << endl;
#pragma endregion
#pragma region Integers 

  //----------------- 16 bit ----------------- 
  // Типу short відповідають типи short int, signed short, signed short int 
  // Ціле зі знаком 

  short short_a = -32768;
  short int short_b = +32767;
  cout << sizeof(short_a) << ' ' << sizeof(short_b) << endl;

  // Ціле без знаку 

  unsigned short ushort_c = 0;
  unsigned short int ushort_d = 65535;

  //----------------- 32 bit ----------------- 
  // Типу int відповідають типи signed, signed int 
  // Ціле зі знаком 

  int int_e = -2147483648;
  int int_f = 2147483647;
  cout << sizeof(int_e) << ' ' << sizeof(int_f) << endl;

  // Типу unsigned відповідають типи unsigned int, unsigned, unsigned int 
  // Ціле без знаку 

  unsigned uint_g = 0;
  unsigned int uint_h = 4294967295;

  //----------------- 64 bit ----------------- 
  // Типу long long відповідають типи long int, signed long, signed long int 
  // Ціле зі знаком 

  long long_i = 2147483647999; // 9223372036854775; 
  int size_long = sizeof(long);
  long int long_int_i = +9223372036854775807;
  int size_long_int = sizeof(long int);
  long long long_long_i = 214748364799; //9223372036854775; 
  int size_long_long = sizeof(long long);

  // Ціле без знаку 

  unsigned long ulong_k = 0;
  unsigned long int ulongint_l = 18446744073709551615;

#pragma endregion
#pragma region Float numbers 

  //----------------- 32 bit ----------------- 

  float m = 1.8E-38f;
  float n = 3.4E+38f;

  //----------------- 64 bit ----------------- 

  double o = 2.2E-308;
  double p = 1.8E+307;

#pragma endregion
#pragma region Boolean 
  //----------------- 8 bit ----------------- 

  bool s = true; // 0000 0001 
  bool t = false; // 0000 0000

#pragma endregion
#pragma region Char 
  //----------------- 8 bit ----------------- 

  char u = 'A';
  char a = 'A';
  char b = '\x0041';
  char c = '\u0906';
  cout << a << endl;
  cout << b << endl;
  cout << c << endl;
#pragma endregion
#pragma region string 

  string w = "Hello world!";

#pragma endregion 
  system("pause>nul");
  return EXIT_SUCCESS;
}