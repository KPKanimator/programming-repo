/*
 * Author: Kirill Korobchinsky
 * 
 *   C++ program to demonstrate Read and Write to a File
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

int main()
{
#pragma region Ukranian
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Ukrainian");
#pragma endregion
	fstream file_handler;
	string line;

	// File Open
	file_handler.open("File_1.txt", ios::in | ios::out);

	// Check if the file has opened
	if (!file_handler)
	{
		cout << "File did not open!";
		exit(1);
	}
	// Write to the file
	file_handler << "1. This is another sample test File. " << endl;
	file_handler << "2. This is the second line of the file. " << endl;

	file_handler.seekg(ios::beg);
	// Read the File
	if (file_handler.is_open())
	{
		// Keep reading the file
		while (getline(file_handler, line))
		{
			// print the line on the standard output
			cout << line << endl;
		}
	}
	else
	{
		cout << "Unable to open the file!";
		file_handler.clear();
	}

	// Close File
	file_handler.close();

	system("pause>nul");
	return EXIT_SUCCESS;
}

/* ------  RESULT  -------



*/