#pragma once

#include <fstream>
#include <algorithm>
#include <iterator>

#include "matrix.hpp"

template <std::size_t N, std::size_t M>
void MatrixWrite(const Matrix& matrix, std::ofstream& file) {
    std::for_each(matrix.begin(), matrix.end(), [&file](const auto& row) {
        std::copy(row.begin(), row.end(), std::ostream_iterator<int>(file, " "));
        file << "\n";
    });
}
