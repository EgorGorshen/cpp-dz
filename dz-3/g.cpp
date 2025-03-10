/* Copyright 2025 EgorGorshen */

// G. Треугольник Паскаля С++
//
// Ограничение времени      1 секунда
// Ограничение памяти       64 Мб
// Ввод                     стандартный ввод или input.txt
// Вывод                    стандартный вывод или output.txt
//
// Даны два числа nn и mm. Создайте двумерный массив [ nn][ mm] и заполните его
// по следующим правилам: Числа, стоящие в строке 0 или в столбце 0 равны 1
// (A[0][j]=1, A[i][0]=1). Для всех остальных элементов массива
// A[i][j]=A[i-1][j]+A[i][j-1], то есть каждый элемент равен сумме двух
// элементов, стоящих слева и сверху от него. Формат ввода
//
// Программа получает на вход два числа n<100n<100 и m<100m<100.
// Формат вывода
//
// Выведите данный массив.
#include <iostream>

int main(int argc, char *argv[]) {
  int n, m;
  std::cin >> n >> m;
  int **mat = new int *[n];

  for (int i = 0; i < n; ++i) {
    mat[i] = new int[m];
    if (i == 0) {
      for (int j = 0; j < m; ++j)
        mat[0][j] = 1;
    }
    mat[i][0] = 1;
  }

  for (int i = 1; i < n; ++i)
    for (int j = 1; j < m; ++j)
      mat[i][j] = mat[i - 1][j] + mat[i][j - 1];

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j)
      std::cout << mat[i][j] << ' ';
    std::cout << std::endl;
  }

  for (int i = 0; i < n; ++i)
    delete[] mat[i];

  delete[] mat;

  return 0;
}
