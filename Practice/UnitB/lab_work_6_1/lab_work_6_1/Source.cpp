/* Дана строка, состоящая из групп нулей и единиц.
    Подсчитать общее количество единиц в группах с четным количеством символов.
    Группы разделены пробелом. */

#include "strings_header.hpp"
using namespace std;

int main()
{
  setlocale(LC_ALL, "Russian");
  about_info();
  const char
    IN_FILE_NAME[] = "input.txt",
    OUT_FILE_NAME[] = "output.txt";
  // Verify data
  if (!check_file(IN_FILE_NAME))
  {
    cerr << "\nПроверка не пройдена \n\n";
    system("pause>nul");
    exit(1); //выход из программы в следствии ошибки <-------- должен быть в main()
  }
  int size = get_file_size(IN_FILE_NAME);	// размер массива 

  // Do the task
  char* string = new char[size] {0};
  read_file(IN_FILE_NAME, string, size); // считываем строку с файла
  int num_of_units = group_counter(string, size); //количество едениц в четных группах
  write_to_file(OUT_FILE_NAME, string, num_of_units);
  write_to_screen(string, num_of_units);
  delete[] string;
  system("pause>nul");

  return EXIT_SUCCESS;
}

#pragma region Do the task

void read_file(const char INP[], char* str, int size)
{
  ifstream in(INP);
  in.getline(str, size);//считываем строку из файла
  in.close();
}

int group_counter(const char* str, int size)
{
  char* string = new char[strlen(str)];
  strcpy(string, str); // копируем содержимое
  string = strcat(string, " "); // добавляем пробел
  int one_counter = 0;
  char* curent_space = nullptr;
  char* previus_space = nullptr;
  int item_size = 0;
  curent_space = strchr(string, ' ');
  previus_space = string;
  while (curent_space != nullptr)
  {
    item_size = curent_space - previus_space;
    if (item_size % 2 == 0)
    {
      for (int i = 0; i < item_size; i++)
      {
        if (previus_space[i] == '1')
          one_counter++;
      }
    }
    do // если прбелов несколько, то пропускием всех их
    { // хотя бы один точно есть 
      curent_space++;
    } while (*curent_space == ' ');
    previus_space = curent_space;
    curent_space = strchr(curent_space, ' ');
  }

  // ************    Не правильное решение    *************************
  //  if (str[i] == ' ') //проверка на окончание групп символов
  //  {
  //    if (group_count % 2 != 0) //если группа закончилась, проверка на её нечётность
  //      count += unit_count; //добовляем количество едениц нечётных групп
  //    unit_count = 0;
  //    group_count = 0;
  //  }
  //  group_count++;//количество символов в группе
  //  if (str[i] == '1')
  //    unit_count++;//количество едениц в группе
  //}
  // ******************************************************************
  //delete[] previus_space;
  //delete[] curent_space;
  //delete[] string;
  return one_counter;
}

void write_to_file(const char out[], const char data[], const int RES)
{
  ofstream outp(out);
  outp << "Исходная строка: " << data << endl;
  outp << "Количество единиц в чётных группах равно: " << RES;
  outp.close();
}
void write_to_screen(const char data[], const int RES)
{
  cout << "Исходная строка: " << data << endl;
  cout << "Количество единиц в чётных группах равно: " << RES;
}

#pragma endregion

#pragma region Function with files
// https://ci-plus-plus-snachala.ru/?p=6041

bool check_file(const char FILE_NAME[])
{
  bool result = true; // успешно пройден
  ifstream in(FILE_NAME);
  if (!error_open(in)) //проверка открыя файла
  {
    in.close();
    return false;
    //return;
  }
  if (!error_eof(in))
  {
    in.close();
    return false;
  }
  if (get_file_size(in) == 0)
  {
    cerr << "Файл нулевой длинны\n";
    in.close();
    return false;
  }
  in.close();
  return result;
}

bool error_eof(ifstream& in)
{
  bool result = true; // в файле есть данные
  in.seekg(0, SEEK_END);
  if (in.tellg() > 0)
    return true; //если в файле есть данные, функция продолжает работу
  cout << "Ошибка наличия данных!";
  return false; // в файле нет данных
}

bool error_open(ifstream& in)
{
  bool result = true; // c файлом можно работать
  if (in.is_open())
    return true; //если файл открыт, функция прекращантся
  cerr << "Ошибка открытия!";
  return false;
}

int get_file_size(ifstream& in)
{
  int size = 0;
  in.seekg(0, SEEK_END); //перемещаем курсор в конец файла
  size = static_cast<int>(in.tellg()); //присваиваем size значения номеру положения курсора
  return size; //возвращаем значение количества символов в файле
}

int get_file_size(const char FILE_NAME[])
{
  ifstream in(FILE_NAME);
  int size = 0;
  error_open(in);
  error_eof(in);
  in.seekg(0, SEEK_END); //перемещаем курсор в конец файла
  size = static_cast<int>(in.tellg()); //присваиваем size значения номеру положения курсора
  in.close();
  return size; //возвращаем значение количества символов в файле
}

#pragma endregion 

#pragma region Information

void about_info()
{
  cout << "Выполнил студент 315 группы Коробчинский Кирилл\n";
  cout << "\tЛабораторная работа №6-1(13) \"Си строки\"\n";
  cout << "Вариант №135\n";
  cout.fill('_');
  cout << setw(60) << ' ';
  cout.fill(' ');
  cout << endl << endl;
}

#pragma endregion
