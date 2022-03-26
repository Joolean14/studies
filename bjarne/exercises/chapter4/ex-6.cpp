// 6. Make a vector holding the ten string values "zero", "one", . . . "nine".
// Use that in a program that converts a digit to its corresponding spelled-out
// value; e.g., the input 7 gives the output seven. Have the same program, using
// the same input loop, convert spelled-out numbers into their digit form; e.g.,
// the input seven gives the output 7.

#include <algorithm>
#include <cmath>
#include <iostream>
#include <ostream>
#include <sstream>
#include <string>
#include <vector>

int main() {
  std::vector<int> numericValues;
  std::vector<std::string> stringValues = {"one",  "two", "three", "four",
                                           "five", "six", "seven", "eight",
                                           "nine", "ten"};
  std::string userInput = "";
  int userInputNumeric = 0;

  for (int i = 1; i < 11; i++) {
    numericValues.push_back(i);
  }

  std::cout << "Please enter a number between one and ten either as digit or "
               "spelling it out: \n";
  std::cin >> userInput;
  
  if (userInput.size() == 1) {
    userInputNumeric = std::stoi(userInput);
  }

  for (int i = 1; i < 11; i++) {
    if (userInput == stringValues[i]) {
      std::cout << userInput << " is the number " << i + 1 << std::endl;
    }

    if (userInputNumeric == i) {
      std::cout << "The number " << userInputNumeric << " is "
                << stringValues[i - 1] << std::endl;
    }
  }

  return 0;
}