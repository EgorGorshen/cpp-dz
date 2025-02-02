/* Copyright 2024 EgorGorshen */

// B. Проверить, является ли символ цифрой
//
// Ограничение времени          1 секунда
// Ограничение памяти           256Mb
// Ввод                         стандартный ввод или input.txt
// Вывод                        стандартный вывод или output.txt
//
// Напишите функцию `bool IsDigit(unsigned char c)`, определяющую, является ли
// данный символ цифрой или нет.
//
// Естественно, программа должна считывать данные, вызывать эту функцию и
// выдавать ответ. Формат ввода
//
// Задан единственный символ c.
// Формат вывода
//
// Необходимо вывести строку yes, если символ является цифрой, и строку no в
// противном случае.
#include <iostream>

bool IsDigit(unsigned char c) {
    return (48 <= c && c <= 57);
}

int main() {
    unsigned char c;
    std::cin >> c;
    if (IsDigit(c)) {
        std::cout << "yes";
    } else {
        std::cout << "no";
    }

    return 0;
}
