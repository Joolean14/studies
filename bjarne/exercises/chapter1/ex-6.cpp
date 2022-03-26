// Write a program that prompts the user to enter three integer values, and then
// outputs the values in numerical sequence separated by commas. So, if the user
// enters the values 10 4 6, the output should be 4, 6, 10. If two values are
// the same, they should just be ordered together. So, the input 4 5 4 should
// give 4, 4, 5.

#include <iostream>

int main() {
  int num1 = 0;
  int num2 = 0;
  int num3 = 0;

  std::cout << "Ingrese el primer numero\n";
  std::cin >> num1;
  std::cout << "Ingrese el segundo numero\n";
  std::cin >> num2;
  std::cout << "Ingrese el tercer numero\n";
  std::cin >> num3;

  if (num1 < num2 && num2 < num3) {
    std::cout << num1 << ", " << num2 << ", " << num3 << "\n";
  } else if (num1 < num3 && num3 < num2) {
    std::cout << num1 << ", " << num3 << ", " << num2 << "\n";
  } else if (num2 < num1 && num1 < num3) {
    std::cout << num2 << ", " << num1 << ", " << num3 << "\n";
  } else if (num2 < num3 && num3 < num1) {
    std::cout << num2 << ", " << num3 << ", " << num1 << "\n";
  } else if (num3 < num1 && num1 < num2) {
    std::cout << num3 << ", " << num1 << ", " << num2 << "\n";
  } else if (num3 < num2 && num2 < num1) {
    std::cout << num3 << ", " << num2 << ", " << num1 << "\n";
  }

  return 0;
}
