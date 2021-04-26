#include <cstring>
#include <iostream>
#include "Events.hpp"
using namespace std;

int main()
{
  setlocale(LC_ALL,"");
  Events events;
  events.m_events_count++;
  events.m_dates[0] = { 1,9,2020 };
  events.m_events_count++;
  events.m_dates[1] = { 12,4,2021 };
  events.m_events_count++;
  events.m_dates[2] = { 1,1,2021 };
  events.show();

  cout << endl;
  cout<<"Найти: последнюю дату\n";
  Date date = events.get_last_date();
  cout << "Day: " << date.m_day << endl;
  cout << "Month: " << date.m_month << endl;
  cout << "Year: " << date.m_year << endl;

  cout << endl;
  cout << "Введите год:";
  int y;
  cin >> y;
  cout << "Все даты в заданном году\n";
  int c;
  Date *dates = events.get_all_dates(y, c);
  for (int i = 0; i < c; i++)
  {
    cout << "Day: " << dates[i].m_day << endl;
    cout << "Month: " << dates[i].m_month << endl;
    cout << "Year: " << dates[i].m_year << endl;
  }

  cout << endl << endl;
  system("pause");
  return EXIT_SUCCESS;
}
