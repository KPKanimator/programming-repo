#pragma once
#include <string>
#include <iostream>
using namespace std;

class MyString
{
  private:
    string m_data;
  public:
    MyString(string data) { m_data = data; };
    MyString() : MyString ("default string") {  };
    string getData() const { return m_data; };
    friend ostream& operator << (ostream&, const MyString);
    friend istream& operator >> (istream&, MyString&);
    friend MyString operator+(const MyString&);
    friend MyString operator-(const MyString&);
    friend MyString operator+(const MyString& lsh, const MyString& rsh);
    MyString& operator ++();    // префиксный ++
    MyString operator ++(int);    // постфиксный ++
};

