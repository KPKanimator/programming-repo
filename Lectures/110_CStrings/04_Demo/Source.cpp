/*
 * Author: Kirill Korobchinsky
 * 
 * cin / getline() 
 */
#pragma region Includes
#include <iostream>
#include <limits>
//#include "windows.h"
using namespace std;
#pragma endregion

void flush_stdin()
{
	// Option 1
	cin.clear();
	while (cin.get() != '\n');

	// Option 2
	//cin.clear(); // на случай, если предыдущий ввод завершился с ошибкой
	//cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

int main()
{
#pragma region Ukranian
	//SetConsoleCP(1251);
	//SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Ukrainian");
#pragma endregion

	const int N = 10;
#pragma region Problem
	char name[N] = {};
	int age = 0;
	cout << "Enter you name: ";
	cin >> name;
	cout << "Enter your age: ";
	cin >> age;
	cout << "Your name is " << name << ", and you are " << age << " years old" << endl;
	//system("pause");

#pragma endregion
	flush_stdin();
#pragma region Solution
	// The getline() function reads the entire line up to the moment a newline character 
	// is entered (pressing the Enter key), discarding the null character
	cout << "Enter you name: ";
	cin.getline(name, N); //, '\n'
	//cin.clear();
	//cin.ignore(numeric_limits<streamsize>::max(), '\n');
	flush_stdin();
	cout << "Enter your age: ";
	cin >> age;
	cout << "Your name is " << name << ", and you are " << age << " years old" << endl;
#pragma endregion
	flush_stdin();
#pragma region Solution 2
	// The get() function reads the entire line until a newline character is entered,
	// but unlike the getline method, this method does not discard the end-of-line character
	cout << "Enter you name: ";
	//cin.get(name, N);	// The end-of-line character remains in the input queue.
	cin.get(name, 20).get();  // Uncomment
	cout << "Enter your age: ";
	cin >> age;
	cout << "Your name is " << name << ". Your address : " << age << endl;
#pragma endregion
  
  system("pause>nul");
  return EXIT_SUCCESS;
}

/* ------  RESULT  -------

*/