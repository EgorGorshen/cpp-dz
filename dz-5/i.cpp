template <typename It, typename OutputIt>
OutputIt SidewaysMerge(It first1, It last1, It first2, It last2, OutputIt out) {
    last2--, first2--;

    while (first1 != last1 && first2 != last2) {
        if (*first1 < *last2) {
            *out = *first1;
            first1++;
        } else {
            *out = *last2;
            last2--;
        }
        out++;
    }
    if (first1 != last1 && first2 == last2) {
        while (first1 != last1) {
            *out = *first1;
            out++;
            first1++;
        }
    } else if (first1 == last1 && first2 != last2) {
        while (last2 != first2) {
            *out = *last2;
            last2--;
            out++;
        }
    }
    return out;
}
