#include <iostream>
#include <fstream>
using namespace std;

int main()
{
#pragma region Console
  cout << "Write to screen tms" << endl;
  int b = 0;
  cin >> b;
  cout << "b is " << b << endl;
#pragma endregion

#pragma region File
  // чтение из файла
  ifstream fin("input.txt");
  fin >> b;
  cout << "Data from file is " << b << endl;
  fin.close();
  // запись в файл
  ofstream fout("file_name.txt");
  fout << "Write to screen tms" << endl;
  fout.close();
#pragma endregion

  system("pause");
  return EXIT_SUCCESS;
}