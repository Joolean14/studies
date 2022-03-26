// Write a program that prompts the user to enter two integer values . Store
// these values in int variables  named val1 and val2. Write your program to
// determine the smallest, largest, sum, difference, product and ratio of these
// values and report them to the user.

#include <iostream>
#include <string>
#include <typeinfo>

int main() {

  int val1 = 0;
  int val2 = 0;

  std::cout << "Ingrese el primer número entero\n";
  std::cin >> val1;
  std::cout << "Ingrese el segundo número entero\n";
  std::cin >> val2;

  int add = val1 + val2;
  int subtract = val1 - val2;
  int multiply = val1 * val2;
  float ratio = 0;

  if (val1 > val2) {
    std::cout << "El primer entero es mayor y el segundo entero menor\n";
    float val1Float = val1;
    float val2Float = val2;
    ratio = val1Float / val2Float;
  } else if (val2 > val1) {
    std::cout << "El segundo entero es mayor y el primer entero es menor\n";
    ratio = (float)val2 / (float)val1;
  }

  std::cout << ratio << " Es el ratio de los dos valores\n";
  std::cout << add << " Es la suma de los dos valores\n";
  std::cout << subtract << " Es la resta de los dos valores\n";
  std::cout << multiply << " Es la multiplicacion de los dos valores\n";

  return 0;
}