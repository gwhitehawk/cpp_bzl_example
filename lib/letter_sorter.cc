#include "letter_sorter.h"
#include <algorithm>
#include <string>

namespace letter_sorter {

LetterSorter::LetterSorter(const std::string& input) : input_(input) {
    sorted_input_ = input;
    std::sort(sorted_input_.begin(), sorted_input_.end(), Compare);
}

bool LetterSorter::Compare(char a, char b) {
    // Compare characters in a case-insensitive manner
    return std::tolower(a) < std::tolower(b);
}
}  // namespace letter_sorter