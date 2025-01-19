/* Copyright 2024 EgorGorshen */

// E. Таблица умножения - 2 C++
//
// Ограничение времени              1 секунда
// Ограничение памяти               64 Мб
// Ввод                             стандартный ввод или input.txt
// Вывод                            стандартный вывод или output.txt
//
// Когда-то давно на обороте школьных тетрадок печатали таблицу умножения. Для
// каждого ii от 1 до 10 был выписан свой набор произведений: для каждого jj от
// 1 до 10 было явно записано, чему равно произведение ii на jj (смотрите
// пример). Вам нужно напечатать таблицу умножения в таком же формате. Формат
// ввода
//
// Даны целые числа m1,m2m1​,m2​ и n1,n2n1​,n2​, по
// модулю не превосходящие 100, причём
// m1<m2m1​<m2​ и n1<n2n1​<n2​. Формат вывода
//
// Для всех целых mm из отрезка [m1,m2][m1​,m2​]
// напечатайте блок из произведений текущего числа mm на все целые числа из
// [n1,n2][n1​,n2​], как показано в примере.
// Соседние блоки разделяйте пустой строкой.
#include <iostream>
#include <ostream>

int main(int argc, char *argv[]) {
  int m1, m2, n1, n2;
  std::cin >> m1 >> m2 >> n1 >> n2;

  for (int m = m1; m <= m2; ++m) {
    for (int n = n1; n <= n2; ++n)
      std::cout << m << " x " << n << " = " << n * m << std::endl;
    std::cout << std::endl;
  }

  return 0;
}
