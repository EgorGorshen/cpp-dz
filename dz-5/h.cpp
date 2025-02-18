template <typename InIter, typename OutIter, typename Predicate,
          typename Action>
OutIter TransformIf(InIter first, InIter last, OutIter out, Predicate condition,
                    Action f) {
    last++;
    for (auto i = first; i != last; ++i) {
        if (condition(*first)) {
            *out = f(*first);
            out++;
        }
    }
    return out;
}
