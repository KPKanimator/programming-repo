/*
 * Author: Kirill Korobchinsky
 * 
 * Reading & Writing data
 */
#define _USE_MATH_DEFINES

#pragma region Includes
#include <iostream>
#include <iomanip>
#include <fstream>
#include <math.h>
#include <stdlib.h>
#include <locale>
#include "windows.h"
using namespace std;
#pragma endregion


void binary_reader()
{
  // open file for reading in binary form
  ifstream fromfile("binary_file.bin", ios::in | ios::binary);
  int i = 0;
  float f = 0.f;
  // read integer variable
  fromfile.read((char*)&i, sizeof(i));
  fromfile.read((char*)&f, sizeof(float));
  fromfile.close();
  cout << "i = " << setw(10) << i << endl;
  cout << "f = " << setw(10) << f << endl;
}

void binary_writer()
{
  int a = 125;
  float f = 123.123f;
  ofstream tofile("binary_file.bin", ios::binary);
  //cout << "Input number:";
  //cin >> a;
  tofile.write((char*)&a, sizeof(int));
  tofile.write((char*)&f, sizeof(float));
  tofile.close();
}

void text_writer()
{
  int i = 99;
  float f = 5.375;
  char c1 = '*';
  double d = 3.2;
  string s = "something";
  ofstream to_file("text_file1.txt");
  to_file << i << ' ' << f << ' ' << c1 << ' ' << d << ' ' << s;
  cout << i << ' ' << f << ' ' << c1 << ' ' << d << ' ' << s << endl;
  to_file.close();
}

void text_reader_writer()
{
  string s2 = "Some string";
  ofstream tofile("text_file1.txt", ios::trunc);
  for (int i = 0; i < s2.size(); i++)
    tofile.put(s2[i]);
  tofile.close();

  //file.getline(line, 256, '\n');

  char c = 0;
  ifstream fromfile("text_file1.txt", ios::beg);
  tofile.open("text_file2.txt", ios::app);
  while (!fromfile.eof()) {
    fromfile.get(c);
    cout << c;
    tofile << c;
  }
  fromfile.close();
  tofile.close();
}

int main()
{
#pragma region Ukranian
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Ukrainian");
#pragma endregion

  text_writer();
  text_reader_writer();
  binary_writer();
  binary_reader();

  system("pause>nul");
  return EXIT_SUCCESS;
}

/* ------  RESULT  -------

*/