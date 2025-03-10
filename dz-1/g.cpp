/* Copyright 2024 EgorGorshen */

// G. Второй максимум - 2 С++
//
// Ограничение времени      1 секунда
// Ограничение памят        256 Мб
// Ввод                     стандартный ввод или input.txt
// Вывод                    стандартный вывод или output.txt
//
// Последовательность состоит из натуральных чисел и завершается числом 0.
// Определите значение второго по величине элемента в этой последовательности,
// то есть элемента, который будет наибольшим, если из последовательности
// удалить наибольший элемент.
//
// Числа, следующие за числом 0, считывать не нужно.
// Формат ввода
//
// Вводится последовательность целых чисел от 11 до 109109, оканчивающаяся
// числом 0 (само число 0 в последовательность не входит). Формат вывода
//
// Выведите ответ на задачу.
#include <iostream>

int main() {
  int mx1 = 0, mx2 = 0, num;

  while (true) {
    std::cin >> num;
    if (num == 0)
      break;

    if (num > mx1) {
      mx2 = mx1;
      mx1 = num;
    } else if (num > mx2) {
      mx2 = num;
    }
  }

  std::cout << mx1 << mx2 << std::endl;
  return 0;
}
