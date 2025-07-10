#ifndef LIB_LETTER_SORTER_H_
#define LIB_LETTER_SORTER_H_

#include <string>

namespace letter_sorter {
class LetterSorter {
 public:
  // Constructor that initializes the sorter with the input string.
  explicit LetterSorter(const std::string& input);
  
  // Returns the sorted string.
  std::string GetSortedString() const { return sorted_input_; }

 private:
  // Helper function to compare two characters for sorting.
  static bool Compare(char a, char b);
  std::string sorted_input_;
  std::string input_;
};
}  // namespace letter_sorter

#endif