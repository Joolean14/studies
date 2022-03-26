//  Write a program that performs as a very simple calculator.
// Your calculator should be able to handle the four basic math operations —
// add, subtract, multiply, and divide — on two input values.
// Your program should prompt the user to enter three arguments: two double
// values and a character to represent an operation. If the entry arguments
// are 35.6, 24.1, and '+', the program output should be The sum of 35.6
// and 24.1 is 59.7.

#include <iostream>
#include <string>
#include <typeinfo>

int main() {
  double firstValue = 0;
  double secondValue = 0;
  std::string operation = "";

  std::cout << "Simple Calculator\n\n"
            << "Please enter first value\n";
  std::cin >> firstValue;
  std::cout << "Please enter second value\n";
  std::cin >> secondValue;
  std::cout << "Please enter operand\n";
  std::cin >> operation;

  if (operation == "+") {
    std::cout << firstValue + secondValue;
  }
  if (operation == "-") {
    std::cout << firstValue - secondValue;
  }
  if (operation == "*") {
    std::cout << firstValue * secondValue;
  }
  if (operation == "/") {
    std::cout << firstValue / secondValue;
  }

  return 0;
}