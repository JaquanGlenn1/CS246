
#include "UniqueList.H"
#include "Util.h"
#include <iostream>

using namespace dsq;

UniqueList lottery() {
  UniqueList numbers(6);
  while (numbers.getSize() < 6) {
    int num = getRandom(20, 1);
    numbers.insert(num);
  }
  return numbers;
}

int main() {
  UniqueList winning_numbers = lottery();
  UniqueList ticket = lottery();

  std::cout << "Winning numbers: " << winning_numbers << std::endl;
  std::cout << "Your ticket: " << ticket << std::endl;

  if (ticket == winning_numbers) {
    std::cout << "Congratulations! You win!" << std::endl;
  } else {
    std::cout << "Sorry, you lose." << std::endl;
  }

  return 0;
}
