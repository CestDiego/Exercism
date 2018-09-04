// -*- firestarter: (compile "(cd build/; make)") -*-
#if !defined(HELLO_WORLD_H)
#define HELLO_WORLD_H

#include "stdio.h"
#include <iostream>
#include <map>
#include <string>

std::map<char, int> points_table{
    {'a', 1}, {'e', 1}, {'i', 1}, {'o', 1},  {'u', 1}, {'l', 1}, {'n', 1},
    {'r', 1}, {'s', 1}, {'t', 1}, {'d', 2},  {'g', 2}, {'b', 3}, {'c', 3},
    {'m', 3}, {'p', 3}, {'f', 4}, {'h', 4},  {'v', 4}, {'w', 4}, {'y', 4},
    {'k', 5}, {'j', 8}, {'x', 8}, {'q', 10}, {'z', 10}};

namespace scrabble_score {

int score(std::string word) {
  if (word.length() == 0)
    return 0;

  int sum = 0;
  for (char &c : word) {
    sum += points_table[tolower(c)];
  }
  return sum;
}

} // namespace scrabble_score

#endif
