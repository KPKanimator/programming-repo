#include "Events.hpp"
#include <iostream>

// Ќайти: последнюю дату
Date Events::get_last_date()
{
  Date result{ 0,0,0 };
  for (int i = 0; i < m_events_count; i++)
  {
    if (result.m_year <= m_dates[i].m_year)
    {
      result = m_dates[i];
    }
    else
    {
      // сравнить мес€ц
      if (result.m_month <= m_dates[i].m_month)
      {
        result = m_dates[i];
      }
      else 
      {
        // сравнить дни
        if (result.m_day <= m_dates[i].m_day)
          result = m_dates[i];
      }
    }
  }
  return result;
};

// ¬се даты в заданном году
Date* Events::get_all_dates(int year, int &count)
{
  Date *result = new Date[MAX_EVENTS];
  count = 0;
  for (int i = 0; i < m_events_count; i++)
  {
    if (m_dates[i].m_year == year)
    {
      result[count++] = m_dates[i];
    }
  }

  return result;
};
// выводит все даты, которые хранит структура
void Events::show() const
{
  std::cout << "Dates:\n";
  for (int i = 0; i < m_events_count; i++)
  {
    std::cout << "Day: " << m_dates[i].m_day << std::endl;
    std::cout << "Month: " << m_dates[i].m_month << std::endl;
    std::cout << "Year: " << m_dates[i].m_year << std::endl;
  }
}
