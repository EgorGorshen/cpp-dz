/* Copyright 2024 EgorGorshen */

// E. Минимальный делитель С++
//
// Ограничение времени      1 секунда
// Ограничение памят        256 Мб
// Ввод                     стандартный ввод или input.txt
// Вывод                    стандартный вывод или output.txt
//
// Найдите самый маленький натуральный делитель числа xx.
// Формат ввода
//
// Вводится натуральное число 2≤x≤1092≤x≤109.
// Формат вывода
//
// Выведите наименьший делитель числа xx, отличный от 1.

#include <cmath>
#include <iostream>

int main(int argc, char *argv[]) {
  int n;
  std::cin >> n;

  for (int i = 2; i < sqrt(n) + 1; ++i) {
    if (n % i == 0) {
      std::cout << i;
      return 0;
    }
  }
  std::cout << n;
  return 0;
}
