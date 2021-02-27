#include <iostream>
using namespace std;

//определяем перечисление и объявляем переменную
enum  weddingAnn { chintz = 1, paper, leather, linen, wooden } year;

int main()
{
  setlocale(LC_ALL, "rus");
  cout << "Олег с Ольгой отмечают\t" << chintz << "-ю годовщину со дня свадьбы!!!";
  cout << "\n";
  cout << "Андрей с Анной отмечают\t" << paper << "-ю годовщину со дня свадьбы!!!";
  cout << "\n";
  cout << "Марк с Ириной отмечают\t" << leather << "-ю годовщину со дня свадьбы!!!";
  cout << "\n";
  cout << "Игорь с Юлией отмечают\t" << linen << "-ю годовщину со дня свадьбы!!!";
  cout << "\n";
  cout << "Олег с Аллой отмечают\t" << wooden << "-ю годовщину со дня свадьбы!!!";
  cout << "\n\n";

  system("pause");
  return 0;
}