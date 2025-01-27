/* Copyright 2025 EgorGorshen */

// C. Карандаши С++
//
// Ограничение времени      1 секунда
// Ограничение памяти       64 Мб
// Ввод                     стандартный ввод или input.txt
// Вывод                    стандартный вывод или output.txt
//
// Миша нашел дома коробку с карандашами и решил разложить их на столе по длине
// в порядке невозрастания. Напишите программу, которая определит на какое место
// Мише нужно положить следующий карандаш, чтобы не нарушить порядок, если
// известна длина каждого карандаша, который уже находится на столе и длина
// каждого следующего карандаша не больше длины предыдущего. Если на столе есть
// несколько карандашей с такой же длиной, как у того, который Миша собирается
// положить, программа должна поместить его после них. Формат ввода
//
// Сначала вводится число nn — количество карандашей, которые уже лежат на
// столе. В следующей строке через пробел записано nn целых положительных чисел
// — длины этих карандашей в сантиметрах. В последней строке вводится длина
// карандаша, который собирается положить Миша. Формат вывода
//
// Необходимо вывести одно число – порядковый номер положенного Мишей карандаша.
// Нумерация карандашей на столе начинается с единицы. Пример Ввод Вывод
//
// 8
// 15 13 10 10 7 7 5 4
// 12
#include <iostream>

int main(int argc, char *argv[]) {
  int n, v;
  std::cin >> n;
  int ls[n];
  for (int i = 0; i < n; ++i)
    std::cin >> ls[i];

  std::cin >> v;

  for (int i = 0; i < n; ++i)

    if (ls[i] < v) {
      std::cout << i + 1;
      return 0;
    }

  std::cout << n + 1;

  return 0;
}
