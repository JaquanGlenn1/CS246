
#ifndef UTIL_H
#define UTIL_H

#include <cstdlib>
#include <ctime>
#include <iostream>
#include <sstream>
#include <string>

namespace dsq {

void Swap(int &a, int &b) {
  int temp = a;
  a = b;
  b = temp;
}

int getRandom(int max, int min = 0) {
  if (max < min) {
    Swap(max, min);
  }

  static bool seeded = false;
  if (!seeded) {
    srand(time(0));
    seeded = true;
  }

  return rand() % (max - min + 1) + min;
}
}

#endif
