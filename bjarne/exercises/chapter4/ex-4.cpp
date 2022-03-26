// 4. Write a program to play a numbers guessing game. The user thinks of a
// number between 1 and 100 and your program asks questions to figure out what
// the number is (e.g., “Is the number you are thinking of less than 50?”). Your
// program should be able to identify the number after asking no more than seven
// questions. Hint: Use the < and <= operators and the if-else construct.

#include <cmath>
#include <iostream>
#include <ostream>
#include <string>
#include <math.h>

int main() {

  float prediction = 0;
  float pivot = 50;
  float userSelectedNumber = 0;
  std::string isLessThan = "";
  float delimiter = 25;

  std::cout << "Please enter a number between 1 and 100" << std::endl;
  std::cin >> userSelectedNumber;

  for (int i = 0; i < 7; i++) {

    std::cout << "Is your number less than " << pivot
              << " please enter ===> t for true or f for false" << std::endl;
    std::cin >> isLessThan;
    std::cout << "delimiter = " << ceil(delimiter) << std::endl;

    if (isLessThan == "t") {
      pivot -= delimiter;
    } else {
      pivot += delimiter;
    }
    delimiter = ceil(delimiter /= 2);


  }


  if (userSelectedNumber == pivot) {
    std::cout << "Guess OK" << std::endl;
  } else {
    std::cout << "Guess NOT OK" << std::endl;
  }

  return 0;
}

