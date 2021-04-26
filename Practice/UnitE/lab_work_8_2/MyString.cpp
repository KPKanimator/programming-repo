#include "MyString.hpp"


ostream& operator << (ostream& out, const MyString instance)
{
  out << "Данные: " << instance.m_data << endl;
  return out;
}

istream& operator >> (istream& in, MyString& instance)
{
  cout << "Введите данные: ";
  string data;
  in >> data;
  instance.m_data = data;
  return in;
}

MyString operator+(const MyString& str)
{
  string s = "+";
  s += str.m_data;
  return s;
}

MyString operator-(const MyString& str)
{
  string s = "------";
  s += str.m_data;
  return s;
}

MyString operator+(const MyString& lsh, const MyString& rsh)
{
  MyString result;
  result.m_data = lsh.m_data + " " + rsh.m_data;
  return result;
}


MyString& MyString::operator++()    // префиксный ++
{
  m_data += "++";
  return  *this;
}

MyString MyString::operator++(int)    // постфиксный ++
{
  MyString result(m_data);
//  MyString result(*this);
  m_data += "<>";
  return result;
}