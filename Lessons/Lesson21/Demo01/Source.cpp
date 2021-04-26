// Даны три массива разной размерности.
// Определить в каком массиве больше сумма элементов.
#define DEBUG
#include <iostream>
using namespace std;

int main()
{
  srand(static_cast<int>(time(0)));
  const int SIZE = 5;
  const int MINV = -10;
  const int MAXV = 20;
  int x[SIZE] = { 0 };
  int y[SIZE][SIZE] = { 0 };
  int z[SIZE][SIZE][SIZE] = { 0 };
  int sum1 = 0, sum2 = 0, sum3 = 0;
#ifdef DEBUG
  cout << "One Dim Array:\n";
#endif // DEBUG
  for (int i = 0; i < SIZE; i++)
  {
    x[i] = MINV + rand() % (MAXV + 1);
    sum1 += x[i];
#ifdef DEBUG
    cout << x[i] << " ";
#endif // DEBUG
    for (int j = 0; j < SIZE; j++)
    {
      y[i][j] = MINV + rand() % (MAXV + 1);
      sum2 += y[i][j];
      for (int k = 0; k < SIZE; k++)
      {
        z[i][j][k] = MINV + rand() % (MAXV + 1);
        sum3 += z[i][j][k];
      }
    }
  }
#ifdef DEBUG
  // Show data to screen
  cout << "\n\nTwo Dim Array:\n";
  for (int i = 0; i < SIZE; i++)
  {
    for (int j = 0; j < SIZE; j++)
    {
      cout << y[i][j] << "\t";
    }
    cout << endl;
  }
#endif // DEBUG

  cout << endl;
  cout << " S1 = " << sum1 << " S2 = " << sum2 << " S3 = " << sum3 << endl;
  if (sum1 > sum2 and sum1 > sum3)
    cout << "Max S is " << sum1 << endl;
  if (sum2 > sum1 and sum2 > sum3)
    cout << "Max S is " << sum2 << endl;
  if (sum3 > sum1 and sum3 > sum2)
    cout << "Max S is " << sum3 << endl;
  cout << endl;

  system("pause");
  return EXIT_SUCCESS;
}
