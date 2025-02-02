/* Copyright 2025 EgorGorshen */

// D. Проверка на простоту
//
// Ограничение времени          1 секунда
// Ограничение памяти           256Mb
// Ввод                         стандартный ввод или input.txt
// Вывод                        стандартный вывод или output.txt
//
// Напишите функцию, проверяющая является ли число простым.
// Формат ввода
// Вводится одно натуральное число не превышающее 2000000000 и не равное 1.
// Формат вывода
// Необходимо вывести строку prime, если число простое, или composite, если
// число составное.
#include <cmath>
#include <iostream>
bool IsPrime(int num) {
    if (num == 2) {
        return true;
    }
    for (int i = 2; i < sqrt(num) + 1; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int num;
    std::cin >> num;
    if (IsPrime(num)) {
        std::cout << "prime";
    } else {
        std::cout << "composite";
    }
    return 0;
}
