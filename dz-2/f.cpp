/* Copyright 2024 EgorGorshen */

// F. Послезавтра C++
//
// Ограничение времени              1 секунда
// Ограничение памяти               64 Мб
// Ввод                             стандартный ввод или input.txt
// Вывод                            стандартный вывод или output.txt
//
// По заданной дате требуется определить, какое число будет послезавтра.
//
// Считайте, что для всех годов действует григорианский календарь, то есть, год
// является високосным, если его номер кратен 4, но не кратен 100, а также если
// он кратен 400. Формат ввода
//
// Дано число, месяц и год (год  – число в промежутке от 1 до 10000).
// Формат вывода
//
// Требуется вывести, какое число будет послезавтра, в формате входных данных
#include <cassert>
#include <iostream>

int month_day_count(const int &month, const int &year) {
  switch (month) {
  case 1:
    return 31;
  case 2:
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
      return 29;
    else
      return 28;
  case 3:
    return 31;
  case 4:
    return 30;
  case 5:
    return 31;
  case 6:
    return 30;
  case 7:
    return 31;
  case 8:
    return 31;
  case 9:
    return 30;
  case 10:
    return 31;
  case 11:
    return 30;
  case 12:
    return 31;
  }
  return -1;
}

void convert(int &day, int &month, int &year) {
  int mc = month_day_count(month, year);
  assert(mc != -1);
  day += 2;

  if (day > mc) {
    day %= mc;
    month++;

    if (month > 12) {
      month %= 12;
      year++;
    }
  }
}

int main(int argc, char *argv[]) {
  int day, month, year;

  std::cin >> day >> month >> year;
  convert(day, month, year);
  std::cout << ' ' << day << ' ' << month << ' ' << year;

  return 0;
}
