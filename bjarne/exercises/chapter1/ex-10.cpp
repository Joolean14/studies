// 10 Write a program that takes an operation followed by two operands and
// outputs the result. For example:
// + 100 3.14
// * 4 5
// Read the operation into a string called operation and use an if-statement to
// figure out which operation the user wants, for example, if (operation=="+").
// Read the operands into variables of type double. Implement this for
// operations called +, –, *, /, plus, minus, mul, and div with their obvious
// meanings.

#include <iostream>
#include <string>

int main() {
  std::string operation = "";
  double operand1 = 0;
  double operand2 = 0;
  double result = 0;

  std::cout << "Escribe una operacion(+, -, *. /)\n";
  std::cin >> operation;
  std::cout << "Escribe el primer operando: \n";
  std::cin >> operand1;
  std::cout << "Escribe el primer operando: \n";
  std::cin >> operand2;

  if (operation == "+") {
   result = operand1 + operand2;
    std::cout << "El resultado es: " << result << "\n";
  } else if (operation == "-") {
   result = operand1 - operand2;
    std::cout << "El resultado es: " << result << "\n";
  } else if (operation == "*") {
   result = operand1 * operand2;
    std::cout << "El resultado es: " << result << "\n";
  } else if (operation == "-") {
   result = operand1 - operand2;
    std::cout << "El resultado es: " << result << "\n";
  } else if (operation == "/") {
   result = operand1 / operand2;
    std::cout << "El resultado es: " << result << "\n";
  }

  return 0;
}

// string operation
// double operand1
// double operand2

// if statement with 4 operation possibilities
// print each operator