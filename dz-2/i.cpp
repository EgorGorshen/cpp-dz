/* Copyright 2024 EgorGorshen */

// I. Наибольший общий делитель С++
//
// Ограничение времени              1 секунда
// Ограничение памяти               64 Мб
// Ввод                             стандартный ввод или input.txt
// Вывод                            стандартный вывод или output.txt
//
// Даны два числа. Найти их наибольший общий делитель.
// Формат ввода
//
// Одна строка с двумя целыми положительными числами, разделенными пробелом.
// Формат вывода
//
// Одно число - наибольший общий делитель введенных чисел.
#include <iostream>

int gcd(int a, int b) {
  if (a == 0)
    return b;
  return gcd(b % a, a);
}

int main(int argc, char *argv[]) {
  int a, b;
  std::cin >> a >> b;
  std::cout << gcd(a, b);

  return 0;
}
