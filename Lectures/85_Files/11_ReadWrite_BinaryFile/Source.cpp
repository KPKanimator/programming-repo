/*
 * Author: Kirill Korobchinsky
 *
 * Read and Write to a Binary File
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
#include <vector>
using namespace std;
#pragma endregion

typedef double Employee;
const int N = 100;

int main()
{
#pragma region Ukranian
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Ukrainian");
#pragma endregion
	ofstream bin_out_file_handler;
	ifstream bin_in_file_handler;

	// Declare
	Employee emp_obj_w, emp_obj_r;
	double objs_w[N] {0};
	double objs_r[N] {0};

	// File Open
	bin_out_file_handler.open("information.dat", ios::out | ios::binary);

	// Check if the file has opened
	if (!bin_out_file_handler)
	{
		cout << "File did not open!";
		exit(1);
	}

	// Initialize emp_obj_w
	emp_obj_w = 1512;
	objs_w[10] = 1111;
	cout << " objs[10]: " << objs_w[10] << endl;

	// Write to the file
	bin_out_file_handler.write((char*)&emp_obj_w, sizeof(Employee));
	bin_out_file_handler.write((char*)&objs_w, sizeof(double) * N);
	bin_out_file_handler.close();

	if (!bin_out_file_handler.good())
	{
		cout << "Error occured during writing the binary file!" << endl;
		exit(2);
	}

	// Now, let's read the employee.dat file
	bin_in_file_handler.open("information.dat", ios::in | ios::binary);
	// Check if the file has opened
	if (!bin_in_file_handler)
	{
		cout << "File did not open!";
		exit(3);
	}

	//for (size_t i = 0; i < N; i++) objs[i] = 0;
	// Read the content of the binary file
	bin_in_file_handler.read((char*)&emp_obj_r, sizeof(Employee));
	bin_in_file_handler.read((char*)&objs_r, sizeof(double) * N);
	bin_in_file_handler.close();

	if (!bin_in_file_handler.good())
	{
		cout << "Error occured during reading the binary file!" << endl;
		exit(4);
	}

	// Print the output of emp_obj_r
	cout << "Details of the Employee: " << endl;
	cout << "\tEmployee ID : " << emp_obj_r << endl;
	cout << "\tobjs[ 9]: " << objs_r[9] << endl;
	cout << "\tobjs[10]: " << objs_r[10] << endl;
	cout << "\tobjs[11]: " << objs_r[11] << endl;


	system("pause>nul");
	return EXIT_SUCCESS;
}

/* ------  RESULT  -------

*/

