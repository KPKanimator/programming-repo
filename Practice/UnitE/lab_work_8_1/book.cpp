#include "book.hpp"

book::book(string author, string title, string publisher, int year, int number_of_pages)
{
  _author = author;
  _title = title;
  _publisher = publisher;
  _year = year;
  _number_of_pages = number_of_pages;
}

void book::show() const
{
  cout << _author << endl;
  cout << _title << endl;
  cout << _publisher << endl;
  cout << _year << endl;
  cout << _number_of_pages << endl;
}

void book::set_book(string author, string title, string publisher, int year, int number_of_pages)
{
  _author = author;
  _title = title;
  _publisher = publisher;
  _year = year;
  _number_of_pages = number_of_pages;
}