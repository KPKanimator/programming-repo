#pragma once
/*
  21. book: Автор, Название, Издательство, Год, Количество страниц.
            author, title, publisher, year, number_of_pages
  Создать массив объектов.
  Вывести:
  а) список книг заданного автора;
  б) список книг, выпущенных заданным издательством;
  в) список книг, выпущенных после заданного года.
*/
#include <string>
#include <iostream>
using namespace std;

class book
{
  private:
    string _author;
    string _title;
    string _publisher;
    int _year;
    int _number_of_pages;
  public:
    book(string author, string title, string publisher,int year,int number_of_pages);
    void show() const;
    inline string get_author() const { return _author; };
    void set_book(string author, string title, string publisher, int year, int number_of_pages);
};

