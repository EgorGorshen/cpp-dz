/* Copyright 2025 EgorGorshen */

// E. Квадратичная сортировка
//
// Ограничение времени          1 секунда
// Ограничение памяти           256Mb
// Ввод                         стандартный ввод или input.txt
// Вывод                        стандартный вывод или output.txt
//
// Требуется отсортировать массив любой квадратичной сортировкой.
//
// Необходимо написать функцию, прототип которой выглядит как Sort(int* begin,
// int* end)
//
// Где begin - указатель на начало сортируемого отрезка. end - указатель на
// конец сортируемого отрезка. Формат ввода
//
// Требуется отсортировать массив по неубыванию квадратичной сортировкой.
// Формат вывода
//
// Вывести получившийся массив.
#include <iostream>

void Sort(int* begin, int* end) {
    int length = end - begin;
    int swap;
    for (int i = 0; i < length - 1; ++i) {
        for (int j = i + 1; j < length; ++j) {
            if (begin[i] > begin[j]) {
                swap = begin[i];
                begin[i] = begin[j];
                begin[j] = swap;
            }
        }
    }
}

int main() {
    int n;
    std::cin >> n;
    int* arr = new int[n];

    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    Sort(arr, arr + n);

    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << ' ';
    }
    delete[] arr;
    return 0;
}
