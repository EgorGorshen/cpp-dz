/* Copyright 2024 EgorGorshen */

// C. Периметр треугольника
//
// Ограничение времени          1 секунда
// Ограничение памяти           256Mb
// Ввод                         стандартный ввод или input.txt
// Вывод                        стандартный вывод или output.txt
// Напишите функцию, вычисляющую длину отрезка по координатам его концов. С
// помощью этой функции напишите программу, вычисляющую периметр треугольника по
// координатам трех его вершин. Формат ввода На вход программе подается 6 целых
// чисел — координат x1,y1,x2,y2,x3,y3 вершин треугольника. Все числа по модулю
// не превосходят 109. Формат вывода Выведите значение периметра этого
// треугольника с точностью ровно 6 знаков после десятичной точки.
#include <cmath>
#include <iomanip>
#include <iostream>

long double Lenghth(long double x1, long double y1, long double x2,
                    long double y2) {
    long double xl = (x1 - x2);
    long double yl = (y1 - y2);
    return sqrtl(xl * xl + yl * yl);
}

int main() {
    long double x1, x2, x3, y1, y2, y3;
    std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    long double side1 = Lenghth(x1, y1, x2, y2);
    long double side2 = Lenghth(x2, y2, x3, y3);
    long double side3 = Lenghth(x3, y3, x1, y1);
    std::cout << std::fixed << std::setprecision(6) << side1 + side3 + side2;
    return 0;
}
