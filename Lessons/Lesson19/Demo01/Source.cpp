#include <iostream>
using namespace std;

int main()
{
  setlocale(LC_ALL, "");
  typedef int datatype;
  const int N = 5;
  datatype array[N] = { 0 };

  /* initialize random seed: */
  //srand(time(NULL));
  unsigned int rand_max = static_cast<unsigned int>(time(0)); //1000
  //unsigned int rand_max = 100;
  int a = 1, b = 11; // ???????? ?????????
  srand(rand_max);
  // ????????????? ????????? ???????
  for (int i = 0; i < N; ++i)
  {
    //array[i] = rand() % 11; /* 0..10 */
    // a + ((double)rand() / RAND_MAX) * (b - a);
    array[i] = a + rand() % b;  // [a;b-1]
  }

  // ????? ????????? ???????
  for (int i = 0; i < N; ++i)
  {
    cout << "A[" << i << "]= " << array[i] << endl;
  }

  datatype min = array[0], max = array[0];
  for (int i = 0; i < N; ++i)
  {
    if (min > array[i])
      min = array[i];
    if (max < array[i])
      max = array[i];
  }
  cout << "min = " << min << endl;
  cout << "max = " << max << endl;

  datatype item = 0;
  int pos_item = -1;
  cout << "??????? ???????: ";
  cin >> item;
  for (int i = 0; i < N; ++i)
  {
    if (array[i] == item)
    {
      pos_item = i;
      break;
    }
  }
  if(pos_item == -1)
    cout << "??????? ?? ??????\n";
  else
    cout << "??????? " <<item << " ??? ??????? " << pos_item << endl;

  system("pause");
  return EXIT_SUCCESS;
}