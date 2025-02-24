#include <cstddef>
#include <vector>

std::vector<std::vector<int>> Transpose(
    const std::vector<std::vector<int>>& matrix) {
    std::vector<std::vector<int>> ret;
    for (size_t i = 0; i < matrix.at(0).size(); ++i) {
        std::vector<int> ln;

        for (size_t j = 0; j < matrix.size(); ++j) {
            ln.push_back(matrix[j][i]);
        }
        ret.push_back(ln);
    }

    return ret;
}
