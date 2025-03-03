/*
 * Author: Kirill Korobchinsky
 * 
 * 
 */
#define _USE_MATH_DEFINES

#pragma region Includes
#include <iostream>
#include <fstream>
//#include <math.h>
//#include <stdlib.h>
//#include <locale>
#include "windows.h"
using namespace std;
#pragma endregion

int main()
{
#pragma region Ukranian
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Ukrainian");
#pragma endregion

	//ofstream outfile("clients.txt",ios::app);
	//int account;  
	//char name[10]; 
	//float balance;
	//
	//while (cin >> account >> name >> balance)
	//{
	//	outfile << account << " " << name << " " << balance << endl;
	//}
	//
	//outfile.close();

	const int N = 10;
	int mas[N] = {}; // масив, у який будемо зчитувати дані з файлу
	int k = 0;	// лічильник символів
	ifstream file_in; // створюємо потік уведення
	file_in.open("file_in.txt"); // відкриваємо файл
	// поки не кінець файлу й масив не заповнено
	for (int і = 0; і < N && !file_in.eof(); і++, k++)
	{
		file_in >> mas[і]; // зчитуємо дані з файлу
		cout << mas[і] << " ";	//	виводимо	дані на консоль
	}
	file_in.close(); // закриваємо файл
	cout << "\nЗ файлу зчитано " << k;
	cout << " елементів масиву з " << N << endl;
  
  
  system("pause>nul");
  return EXIT_SUCCESS;
}

/* ------  RESULT  -------

*/