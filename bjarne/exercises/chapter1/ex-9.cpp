// 9 Write a program that converts spelled-out numbers such as “zero” and “two”
// into digits, such as 0 and 2. When the user inputs a number, the program
// should print out the corresponding digit. Do it for the values 0, 1, 2, 3,
// and 4 and write out not a number I know if the user enters something that
// doesn’t correspond, such as stupid computer!.

#include <iostream>
#include <string>

int main() {
  std::cout << "Ingrese el nombre de un numero del cero al cuatro\n";
  std::string numInput = "";
  std::cin >> numInput;

  if (numInput == "cero") {
    std::cout << "0\n";
  } else if (numInput == "uno") {
    std::cout << "1\n";
  } else if (numInput == "dos") {
    std::cout << "2\n";
  } else if (numInput == "tres") {
    std::cout << "3\n";
  } else if (numInput == "cuatro") {
    std::cout << "4\n";
  } else {
    std::cout << "No conozco ese numero\n";
  }

  return 0;
}

//   C/C++ doesn't really support strings as a type. It does support the idea of
//   a constant char array but it doesn't really fully understand the notion of
//   a string. In order to generate the code for a switch statement the compiler
//   must understand what it means for two values to be equal.