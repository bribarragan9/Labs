// Brianna Barragan
// CPSC 120-04
// 2023-02-13
// Bribarragan9@csu.fullerton.edu
//@Bribarragan9

// Lab 2
// Partners : @kneemai

// Part 2

#include <iostream>
#include <string>

int main(int argc, char const *argv[]) {
  std::string singular_noun{"singular noun"};

  std::string plural_noun{"plural noun"};
  std::string present_tense_verb{"present tense verb"};

  std::cout << "Please enter a singular noun: "
            << "\n";
  std::cin >> singular_noun;
  std::cout << "Please enter a plural noun: "
            << "\n";
  std::cin >> plural_noun;
  std::cout << "Please enter a present tense verb: "
            << "\n";
  std::cin >> present_tense_verb;
  std::cout << "\n";

  std::cout << "Computers are small enough to fit into a " << singular_noun
            << ".\n";
  std::cout << "Computers can add, multiply, divide, and " << present_tense_verb
            << ".\n";
  std::cout << "People can " << present_tense_verb
            << " too but computers do it better. "
            << "\n";
  std::cout << "Computers have many " << plural_noun
            << "which gives them the advantage "
            << "\n";
  std::cout << "over people for many computational tasks.\n";

  return 0;
}