/* Copyright 2025 EgorGorshen */
//
// D. RemoveCopyIf
//
// Ограничение времени      1 секунда
// Ограничение памяти	    64 Мб
// Ввод                     стандартный ввод или input.txt
// Вывод                    стандартный вывод или output.txt
//
// Вам надо написать свою реализацию стандартного алгоритма remove_copy_if.
// Заголовок функции должен быть таким:
//
// template <typename InIter, typename OutIter, typename Predicate>
// OutIter RemoveCopyIf(InIter first, InIter last, OutIter out, Predicate f);
//
// Функция должна копировать из подпоследовательности [first; last) в
// последовательность, начинающуюся с out, те элементы, которые не удовлетворяют
// предикату f. Функция возвращает итератор, указывающий за последний
// скопированный элемент. Примечания
//
// В вашем решении должен быть только код этой шаблонной функции и не должно
// быть функции main. При проверке наша программа test.cpp будет использовать
// ваш алгоритм RemoveCopyIf.
template <typename InIter, typename OutIter, typename Predicate>
OutIter RemoveCopyIf(InIter first, InIter last, OutIter out, Predicate f) {
    for (InIter ptr = first; ptr != last; ++ptr) {
        if (!f(*ptr)) {
            *out = *ptr;
            out++;
        }
    }
    return out;
}
