/* Copyright 2025 EgorGorshen */

// C. AnyOf
//
// Ограничение времени      1 секунда
// Ограничение памяти	    64 Мб
// Ввод                     стандартный ввод или input.txt
// Вывод                    стандартный вывод или output.txt
//
// Вам надо написать свою реализацию стандартного алгоритма any_of. Заголовок
// функции должен быть таким:
//
// template <typename It, typename Pred>
// bool AnyOf(It first, It last, Pred f);
//
// Функция должна вернуть true, если в последовательности [first; last)
// существует элемент, для которого функция f возвращает истину. В противном
// случае функция должна вернуть false. Примечания
//
// В вашем решении должен быть только код этой шаблонной функции и не должно
// быть функции main. При проверке наша программа test.cpp будет использовать
// ваш алгоритм AnyOf.
template <typename It, typename Pred>
bool AnyOf(It first, It last, Pred f) {
    for (int i = 0; i < (last - first); ++i) {
        if (f(first[i])) {
            return true;
        }
    }

    return false;
};
