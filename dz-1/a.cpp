/* Copyright 2024 EgorGorshe */

// A. МКАД C++
// Ограничение времени          1 секунда
// Ограничение                  памяти 64 Мб
// Ввод                         стандартный ввод или input.txt
// Вывод                        стандартный вывод или output.txt
//
// Длина Московской кольцевой автомобильной дороги — 109 километров. Байкер Вася
// стартует с нулевого километра МКАД и едет со скоростью vv километров в час.
// На какой отметке он остановится через tt часов?
//
// Формат ввода
//
// Программа получает на вход значение vv и tt. Если v>0v>0, то Вася движется в
// положительном направлении по МКАД, если же значение v<0v<0, то в
// отрицательном. (Гарантируется, что исходные числа — целые и находятся в
// промежутке от -1000 до +1000).
//
// Формат вывода
//
// Программа должна вывести целое число от 0 до 108 — номер отметки, на которой
// остановится Вася.
#include <iostream>

int main(int argc, char *argv[]) {
  short roud_length = 109;
  short v, t;
  std::cin >> v >> t;

  std::cout << ((v * t) % roud_length + roud_length) % roud_length;
  return 0;
}
