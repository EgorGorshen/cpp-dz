/* Copyright 2024 EgorGorshen */

// B. Сумма с корнями C++
//
// Ограничение времени              1 секунда
// Ограничение памяти               64 Мб
// Ввод                             стандартный ввод или input.txt
// Вывод                            стандартный вывод или output.txt
//
// По данным натуральным числам n и a вычислите сумму
// √a+√2a+...+√(n−1)a+√naa+2a+...+(n−1)a+na ​ ​ ​
//
// ​
// Формат ввода
//
// Вводятся два натуральных числа.
// Формат вывода
//
// Выведите ответ на задачу.
#include <cmath>
#include <iostream>

int main(int argc, char *argv[]) {
  double a, res = 0, n;
  std::cin >> n >> a;

  for (; n > 0; --n) {
    res = a * n + sqrt(res);
  }

  std::cout << sqrt(res);
  return 0;
}
