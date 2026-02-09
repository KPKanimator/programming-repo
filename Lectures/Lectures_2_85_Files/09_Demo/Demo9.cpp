/*
 * Author: Kirill Korobchinsky
 * 
 *   Syntax of std:: getline() Function
 *   istream& getline (istream& is, string& str, char delim);
 */
#define _USE_MATH_DEFINES

#pragma region Includes
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <locale>
#include "windows.h"
#include <fstream>
#include <string>
using namespace std;
#pragma endregion

// How to use
void file_is_open();
int file_good();

int main()
{
#pragma region Ukranian
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Ukrainian");
#pragma endregion
  
  fstream new_file;

  // Open a file to perform a write operation using a file object.
  new_file.open("xyz.txt", ios::out);

  // Checking whether the file is open.
  if (new_file.is_open()) {
    new_file << "My Function \n"; // Inserting text.
    new_file.close(); // Close the file object.
  }

  // open a file to perform read operation using file object.
  new_file.open("xyz.txt", ios::in);

  // Checking whether the file is open.
  if (new_file.is_open()) {
    string sa;
    // Read data from the file object and put it into a string.
    while (getline(new_file, sa)) {
      // Print the data of the string.
      cout << sa << "\n";
    }

    // Close the file object.
    new_file.close();
  }
  file_is_open();
  int file_good();

  system("pause>nul");
  return EXIT_SUCCESS;
}

void file_is_open()
{
  fstream data_file;
  data_file.open("xyz.txt", ios::out);
  if (data_file.is_open()) {
    data_file << "This is 1 line\n";
    data_file << "This is 2 line\n";
    data_file << "This is 3 line\n";
    data_file << "This is 4 line\n";
    data_file << "This is 5 line\n";
    data_file.close();
  }
  string data;
  data_file.open("xyz.txt", ios::out);
  if (data_file.is_open()) {
    string data;
    while (getline(data_file, data)) {
      cout << data << endl;
    }
    data_file.close();
  }
}

int file_good()
{
  ofstream fout("test.dat");

  if (!fout) {
    cout << "Cannot open file.\n";
    return 1;
  }

  fout << 10 << " " << -20 << " " << 30.2 << "\n";
  fout << "This is a test.";

  fout.close();

  if (!fout.good()) {
    cout << "A file error occurred.";
    return 1;
  }
}

/* ------  RESULT  -------

*/