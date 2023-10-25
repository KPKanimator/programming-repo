/*
 * Author: Kirill Korobchinsky
 * 
 * Initials
 */
#define _USE_MATH_DEFINES

#pragma region Includes
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <locale>
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
	//  Инициализация это первое присвоение значения переменной
	// На 10-й строке объявляем переменную max и инициализируем ее значением константы INT_MAX
	int max = INT_MAX;

	char ch = 'A';			// переменную ch инициализиируем символом А
	ch = 'B';				// переменной ch присваиваем (изменяем) значение
	
	int b;					// обьявляем переменную b типа int
	b = 10;					// переменную b инициализируем значением 10

	int c(255);				// создаем переменную с типа int  и инициализируем ее значением 255

	// В С++11 появился новый способ инициализации переменных, такой способ инициализации предоставляет лучшую защиту от ошибок преобразования типов

	int d = { 2 };			// обьевляем переменную d и инициализируем ее значением 2
	// int d = { }			// обьявляем переменную d и инициализируем ее значением по умолчинию
		
	int e { 3 };			// обьевляем переменную e и инициализируем ее значением 2
	//int e { }				// обьявляем переменную e и инициализируем ее значением по умолчинию  
  
  
  system("pause>nul");
  return EXIT_SUCCESS;
}

/* ------  RESULT  -------

*/