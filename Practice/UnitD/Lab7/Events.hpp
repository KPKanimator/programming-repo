#pragma once
#include "Data.hpp"
const int MAX_EVENTS = 100;

struct Events
{
  Date m_dates[MAX_EVENTS];
  int m_events_count = 0;
  // Найти: последнюю дату; 
  Date get_last_date();
  // Все даты в заданном году
  Date* get_all_dates(int year, int& count);
  // выводит все даты, которые хранит структура
  void show() const;
};