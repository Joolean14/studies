// 8 Write a program to test an integer value to determine if it is odd or even.
// As always, make sure your output is clear and complete. In other words, don’t
// just output yes or no. Your output should stand alone, like The value 4 is an
// even number. Hint: See the remainder (modulo) operator in §3.4.

#include <iostream>

int main() {
  int num = 0;
  std::cout << "Ingrese un numero\n";
  std::cin >> num;

  if ((num % 2) == 0) {
    std::cout << "El numero " << num << " es par\n";
  } else {
    std::cout << "El numero " << num << " es impar\n";
  }

  return 0;
}