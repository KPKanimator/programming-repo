//#define DEBUG 0
#include<fstream>
#include<iostream>
using namespace std;
typedef float arr_type;
int menu();
// Input file name
char* input_filname();
// задача 1
int task1(char*, double*, int&);
// задача 2
int* validate_file(char*);

int main()
{
  setlocale(LC_ALL, "");
  char* fname = nullptr;
  double* array1 = nullptr;
  int size_array1 = 0;
  while (int ch = menu())
  {
    switch (ch)
    {
    case 1:
      task1(fname, array1, size_array1);
      break;
    case 3:
      fname = input_filname();
      break;
    default:
      cout << "Нет такого элемента меню";
      break;
    }
    system("pause>nul");
    system("cls");
  }
  return EXIT_SUCCESS;
}

void read_from_file(char* filename, double* x, int& n)
{
  ifstream ifile(filename);
  ifile >> n;
  x = new double[n];
  for (int i = 0; i < n; i++)
  {
    ifile >> x[i];
#ifdef DEBUG
    cout << x[i] <<endl;
#endif // DEBUG
  }
  ifile.close();
}


int task1(char* filename, double* x, int &n)
{
  if(!filename)
  {
    cerr << "Не введено имя файла\n";
    return EXIT_FAILURE;
  }
  int result = EXIT_SUCCESS;
  if (validate_file(filename))
  {
    cerr << "Валидация файла не пройдена\n";
    return EXIT_FAILURE;
  }
  read_from_file(filename, x, n);

  return result;
}

int* validate_file(char* fn)
{
  ifstream ifile(fn);
  if(!ifile)
    cerr<<"Файл не получается открыть ("<<endl;
  return EXIT_SUCCESS;
}


char* input_filname()
{
  const int SIZEFN = 50;
  char* filename = new char[SIZEFN];
  cout << "Please input filename: ";
  cin.getline(filename, SIZEFN);

  return filename;
}



// меню
int menu()
{
  int choise = 0;
  cout << "Press 1. Task 1" << endl;
  cout << "Press 2. Task 2" << endl;
  cout << "Press 3. Input file name" << endl;
  cout << "Press 0. Exit" << endl;
  cout << "===============" << endl;
  cout << "Your choise is ";
  cin >> choise;
  cin.clear();
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  return choise;
}

