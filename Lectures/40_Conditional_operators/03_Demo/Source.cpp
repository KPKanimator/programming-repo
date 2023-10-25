/*
 * Author: Kirill Korobchinsky
 * 
 * 
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
	int selector = 20;
	switch (selector)
	{
	case 1:
		cout << "1 - \"погано\"" << endl;
		break;
	case 2:
		cout << "2 - \"незадов≥льно\"" << endl;
		break;
	case 3:
		cout << "3 - \"задов≥льно\"" << endl;
		break;
	case 4:
		cout << "4 - \"добре\"" << endl;
		break;
	case 5:
		cout << "5 - \"в≥дм≥нно\"" << endl;
		break;
	default:
		cerr << "¬ведено помилкове значенн€" << endl;

		break;
	}
  
  
  system("pause>nul");
  return EXIT_SUCCESS;
}

/* ------  RESULT  -------

*/