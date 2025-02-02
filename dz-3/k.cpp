/* Copyright 2025 EgorGorshen */

// K. Кинотеатр С++
//
// Ограничение времени      1 секунда
// Ограничение памяти       64 Мб
// Ввод                     стандартный ввод или input.txt
// Вывод                    стандартный вывод или output.txt
//
// В кинотеатре nn рядов по mm мест в каждом. В двумерном массиве хранится
// информация о проданных билетах. Число 1 означает, что билет на данное место
// уже продан, число 0 означает, что место свободно. Поступил запрос на продажу
// kk билетов на соседние места в одном ряду. Определите, можно ли выполнить
// такой запрос. Формат ввода
//
// Программа получает на вход натуральные числа nn и mm, не превосходящие 100.
// Далее идет nn строк, содержащих mm чисел (0 или 1), разделенных пробелами.
// Затем дано число kk. Формат вывода
//
// Программа должна вывести номер ряда, в котором есть kk подряд идущих
// свободных мест. Если таких рядов несколько, то выведите номер наименьшего
// подходящего ряда. Если подходящего ряда нет, выведите число 0.
#include <algorithm>
#include <iostream>

int main(int argc, char *argv[]) {
  int n, m, k;
  std::cin >> n >> m;
  int *free_seats_row = new int[n];

  for (int i = 0; i < n; ++i) {
    bool flag = false;
    int count_free = 0;
    free_seats_row[i] = 0;
    for (int j = 0; j < m; ++j) {
      std::cin >> flag;
      if (!flag) {
        count_free++;
      } else {
        free_seats_row[i] = std::max(count_free, free_seats_row[i]);
        count_free = 0;
      }

      free_seats_row[i] = std::max(count_free, free_seats_row[i]);
    }
  }

  std::cin >> k;

  for (int i = 0; i < n; ++i) {
    if (free_seats_row[i] >= k) {
      std::cout << i + 1;
      delete[] free_seats_row;
      return 0;
    }
  }

  std::cout << 0;

  delete[] free_seats_row;

  return 0;
}
