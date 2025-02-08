/* Copyright 2025 EgorGorshen */

// B. Сортировка списка структур
//
// Ограничение времени      1 секунда
// Ограничение памяти	    64 Мб
// Ввод                     стандартный ввод или input.txt
// Вывод                    стандартный вывод или output.txt
//
// Определите структуру "Студент" с полями имя, фамилия, дата, месяц и год
// рождения. Создайте вектор из таких структур, заполните его из входных данных,
// отсортируйте по возрастанию даты рождения либо по фамилии и имени в
// лексикографическом порядке и выведите отсортированный список.
//
// При сортировке по дате рождения при равенстве года, месяца и числа рождения,
// сравнивайте лексикографически фамилии и имена.
//
// При сортировке по фамилии и имени, сравнивайте сначала фамилии, затем имена
// при равенстве - даты рождения. Формат ввода
//
// Первая строка содержит одно целое число NN от 00 до 104104 - число студентов.
//
// Далее идут NN строк, каждая из которых содержит две строки длиной от 11 до
// 1515 символов - имя и фамилию очередного студента, и три целых числа от 00 до
// 109109 - день, месяц и год рождения.
//
// Следующая строка содержит способ сортировки - "name" или "date".
// Формат вывода
//
// Выведите список студентов в формате "имя фамилия день.месяц.год".
#include <iostream>
#include <istream>
#include <ostream>
#include <string>
#include <vector>

struct Date {
    unsigned short day;
    unsigned short monthe;
    unsigned int year;

    bool operator==(const Date&) const = default;
};

bool operator>(const Date& obj1, const Date& obj2) {
    if (obj1.year != obj2.year) {
        return obj1.year > obj2.year;
    }
    if (obj1.monthe != obj2.monthe) {
        return obj1.monthe > obj2.monthe;
    }
    return obj1.day > obj2.day;
};

bool operator<(const Date& obj1, const Date& obj2) {
    return obj2 > obj1;
};

bool operator<=(const Date& obj1, const Date& obj2) {
    return (obj1 < obj2) || (obj1 == obj2);
};

bool operator>=(const Date& obj1, const Date& obj2) {
    return (obj1 > obj2) || (obj1 == obj2);
};
std::ostream& operator<<(std::ostream& os, const Date& obj) {
    return os << obj.day << '.' << obj.monthe << '.' << obj.year;
}

std::istream& operator>>(std::istream& is, Date& obj) {
    return is >> obj.day >> obj.monthe >> obj.year;
}

struct Student {
    std::string name;
    std::string firstName;

    Date birthday;
};

std::ostream& operator<<(std::ostream& os, const Student& obj) {
    return os << obj.name << ' ' << obj.firstName << ' ' << obj.birthday;
}

std::istream& operator>>(std::istream& is, Student& obj) {
    return is >> obj.name >> obj.firstName >> obj.birthday;
}

int main() {
    int N;
    std::cin >> N;
    std::vector<Student> student_list;
    std::string sort_type;
    for (int i = 0; i < N; ++i) {
        Student new_student;
        std::cin >> new_student;
        student_list.push_back(new_student);
    }
    std::cin >> sort_type;

    if (sort_type == "date") {
        std::sort(student_list.begin(), student_list.end(),
                  [](const Student& obj1, const Student& obj2) -> bool {
                      return obj1.birthday < obj2.birthday;
                  });
    } else {
        std::sort(student_list.begin(), student_list.end(),
                  [](const Student& obj1, const Student& obj2) -> bool {
                      if (obj1.firstName != obj2.firstName) {
                          return obj1.firstName < obj2.firstName;
                      } else if (obj1.name != obj1.name) {
                          return obj1.name < obj1.name;
                      }
                      return obj1.birthday < obj2.birthday;
                  });
    }

    for (Student stud : student_list) {
        std::cout << stud << std::endl;
    }
    return 0;
}
