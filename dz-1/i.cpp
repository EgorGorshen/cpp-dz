/* Copyright 2024 EgorGorshen */

// I. Разрезание на квадраты С++
//
// Ограничение времени      1 секунда
// Ограничение памят        256 Мб
// Ввод                     стандартный ввод или input.txt
// Вывод                    стандартный вывод или output.txt
//
// Полоска бумаги имеет размеры A×BA×B. Каждый раз от нее отрезается квадрат
// максимального размера до тех пор, пока не получится квадрат. Сколько
// квадратов получится? Формат ввода
//
// Программе даны числа 1≤A,B≤1091≤A,B≤109.
// Формат вывода
//
// Требуется вывести количество квадратов.
#include <iostream>

int main(int argc, char *argv[]) {
  int A, B, nm = 0;
  std::cin >> A >> B;

  while (A != B) {
    if (A > B) {
      A -= B;
    } else {
      B -= A;
    }
    nm += 1;
  }

  std::cout << nm + 1;

  return 0;
}
