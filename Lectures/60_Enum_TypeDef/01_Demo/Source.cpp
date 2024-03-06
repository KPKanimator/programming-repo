/*
 * Author: Kirill Korobchinsky
 * 
 * Demonstrate random number seeding and generation
 */
#define _USE_MATH_DEFINES

#pragma region Includes
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <locale>
#include "windows.h"
 // Need to include the following to use the system clock for seeding
#include <time.h>
#include <sys/timeb.h>
using namespace std;
#pragma endregion

int main()
{
#pragma region Ukranian
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Ukrainian");
#pragma endregion
	int seed, num_randoms;
	cout << "Enter the random seed >";
	cout.flush();
	cin >> seed;
	srand(seed); // 1
	cout << "How many random numbers?  >";
	cin >> num_randoms;
	for (int count = 0; count < num_randoms; count++)
		cout << count + 1 << "\t:" << rand() << endl; // 2

	cout << "Gosh, some (or all) of those were big!";
	cout << " How about randoms between one and 25?\n";
	cout << "Note that the same seed was used... ";
	cout << "Remove the %25 and see what numbers come up\n";
	srand(seed);
	for (int count = 0; count < num_randoms; count++)
		cout << count + 1 << "\t:" << rand() % 25 << endl;

	cout << "Now, get a seed from the milliseconds value of the system clock:\n";
	//struct _timeb time_buffer;
	//_ftime_s(&time_buffer);
	//srand(time_buffer.millitm);
	srand(static_cast<unsigned int>(time(nullptr)));
	for (int count = 0; count < num_randoms; count++)
		cout << count + 1 << "\t:" << rand() % 25 << endl;
 
  system("pause>nul");
  return EXIT_SUCCESS;
}

/* ------  RESULT  -------

*/