/* Copyright 2025 EgorGorshen */

// F. Заполнение диагоналями с использованием массивов С++
//
// Ограничение времени      1 секунда
// Ограничение памяти       64 Мб
// Ввод                     стандартный ввод или input.txt
// Вывод                    стандартный вывод или output.txt
//
// Числа по модулю не превышают 231−1231−1. Даны числа nn и mm. Выведите таблицу
// размера n×mn×m, как показано на примере. Формат ввода
//
// Программа получает на вход два числа nn и mm ( 1≤n,m≤1001≤n,m≤100).
// Формат вывода
//
// Программа должна вывести числа таблицей. Числа разделяйте одним пробелом.
#include <iostream>

int main(int argc, char *argv[]) {
  int n, m;
  std::cin >> n >> m;

  int **mat = new int *[n];
  for (int i = 0; i < n; ++i)
    mat[i] = new int[m];

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      // TODO: continue from this plase
    }
  }

  for (int i = 0; i < n; ++i)
    delete[] mat[i];

  delete[] mat;

  return 0;
}
