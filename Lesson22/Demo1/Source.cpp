#include <iostream>
using namespace std;

static int x = 110;

int main()
{
  int const N = 2;
  int const M = 3;
  int **array = new int*[N];
  for (int i = 0; i < N; i++)
  {
    array[i] = new int[M];
  }
  int k = 0;
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < M; j++)
      array[i][j] = k++;
  }

//  int x = *(array + 2);

  system("pause");
  return 0;
}