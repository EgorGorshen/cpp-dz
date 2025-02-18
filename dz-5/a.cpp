/* Copyright 2025 EgorGorshen */

// A. Сортировка точек
//
// Ограничение времени      1 секунда
// Ограничение памяти	    64 Мб
// Ввод                     стандартный ввод или input.txt
// Вывод                    стандартный вывод или output.txt
//
// Выведите все исходные точки в порядке возрастания их расстояний от начала
// координат. Создайте структуру Point и сохраните исходные данные в массиве
// структур Point. Формат ввода
//
// Программа получает на вход набор точек на плоскости. Сначала задано
// количество точек n, затем идет последовательность из n строк, каждая из
// которых содержит два числа: координаты точки. Величина n не превосходит 100,
// все исходные координаты – целые числа, не превосходящие 103103. Формат вывода
//
// Необходимо вывести все исходные точки в порядке возрастания их расстояний от
// начала координат. Пример
//
// Ввод
//
// 2
// 1 2
// 2 3
//
// Вывод
//
// 1 2
// 2 3
#include <algorithm>
#include <iostream>
#include <vector>

struct Point {
    int x;
    int y;
    Point() : x(0), y(0) {};
    Point(int x, int y) : x(x), y(y) {};

    double module() const {
        return x * x + y * y;
    }
};

bool operator<(const Point& a, const Point& b) {
    return a.module() < b.module();
}

bool operator==(const Point& a, const Point& b) {
    return a.module() == b.module();
}

bool operator>(const Point& a, const Point& b) {
    return b < a;
}

bool operator<=(const Point& a, const Point& b) {
    return (a < b) || (a == b);
}

bool operator>=(const Point& a, const Point& b) {
    return (a > b) || (a == b);
}

int main() {
    int n;
    std::vector<Point> points_vec;
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        Point p = Point();
        std::cin >> p.x >> p.y;
        points_vec.push_back(p);
    }

    std::sort(points_vec.begin(), points_vec.end());

    for (Point p : points_vec) {
        std::cout << p.x << ' ' << p.y << std::endl;
    }

    return 0;
}
