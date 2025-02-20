/* Copyright 2025 EgorGorshen */

// A. НОД n чисел с подпрограммой
//
// Ограничение времени          1 секунда
// Ограничение памяти           256Mb
// Ввод                         стандартный ввод или input.txt
// Вывод                        стандартный вывод или output.txt
//
// Напишите функцию для нахождения наибольшего общего делителя двух чисел с
// помощью алгоритма Евклида и используйте ее в программе для нахождения НОД уже
// n чисел. Формат ввода
//
// На вход программе сначала подается значение 2 ≤ n ≤ 100. В следующей строке
// находятся n целых неотрицательных чисел, не превосходящих 30000. Формат
// вывода
//
// Выведите НОД исходных чисел.
#include <iostream>

int EuclidAlgorithm(int a, int b) {
    if (a == 0) {
        return b;
    }
    return EuclidAlgorithm(b % a, a);
}

int main() {
    int n, old_v = -1, new_v;
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        std::cin >> new_v;
        if (old_v == -1) {
            old_v = new_v;
            continue;
        }
        old_v = EuclidAlgorithm(old_v, new_v);
    }

    std::cout << old_v;
    return 0;
}
