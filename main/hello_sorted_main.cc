#include "lib/letter_sorter.h"
#include <iostream>
#include <string>

int main(int argc, char** argv) {
  std::string who = "world";
  if (argc > 1) {
    who = argv[1];
  }
  letter_sorter::LetterSorter sorter(who);
  std::cout << "Hello, " << sorter.GetSortedString() << std::endl;
  return 0;
}