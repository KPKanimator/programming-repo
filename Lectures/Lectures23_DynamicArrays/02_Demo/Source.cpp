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
#include <vector>
using namespace std;
#pragma endregion

int main()
{
#pragma region Ukranian
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Ukrainian");
#pragma endregion
  const float D = 1.5F;
  // ” масив≥ Ќ = (Ц0.5, 2.8, 9.1, Ц0.3, 10, Ц1, 2.1, 8.2)
  vector<float> array{ -0.5F, 2.8F, 9.1F, -0.3F, 10.F, -1.F, 2.1F, 8.2F };
  
  cout << "Array is: ";
  for (auto const& element : array)
    cout << element << "; ";
  cout << endl;
  float sum = 0;
  for (size_t i = 0; i < array.size() - 1; i++)
  {
    sum = array.at(i) + array.at(i + 1);
    if (sum < D)
    {
      cout << "Num first item less then " << D << " : " << i << endl;
      cout << "Sum is " << sum << endl;
      break;
    }
  }
  
  system("pause>nul");
  return EXIT_SUCCESS;
}

/* ------  RESULT  -------
  Array is: -0.5; 2.8; 9.1; -0.3; 10; -1; 2.1; 8.2;
  Num first item less then 1.5 : 5
  Sum is 1.1

*/