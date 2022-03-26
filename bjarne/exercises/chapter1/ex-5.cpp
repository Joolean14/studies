// Modify the program above to ask the user to enter floating-point values and
// store them in double variables. Compare the outputs of the two programs for
// some inputs of your choice. Are the results the same? Should they be? What’s
// the difference?

#include <iostream>
#include <string>
#include <typeinfo>

int main() {

  float val1 = 0;
  float val2 = 0;
  float add = val1 + val2;
  float subtract = val1 - val2;
  float multiply = val1 * val2;
  float ratio;

  std::cout << "Ingrese el primer número entero\n";
  std::cin >> val1;
  std::cout << "Ingrese el segundo número entero\n";
  std::cin >> val2;

  if (val1 > val2) {
    std::cout << "El primer entero es mayor y el segundo entero menor\n";
    ratio = val1 / val2;
  } else if (val2 > val1) {
    std::cout << "El segundo entero es mayor y el primer entero es menor\n";
    ratio = val2 / val1;
  }

  std::cout << ratio << " Es el ratio de los dos valores\n";
  std::cout << add << " Es la suma de los dos valores\n";
  std::cout << subtract << " Es la resta de los dos valores\n";
  std::cout << multiply << " Es la multiplicacion de los dos valores\n";

  return 0;
}

// The results are not the same, this program is more precise. I guess there
// should be, because they are different data types.
