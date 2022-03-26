// Write a program to solve quadratic equations. A quadratic equation is of the
// form ax 2 + bx + c = 0 If you don’t know the quadratic formula for solving
// such an expression, do some research. Remember, researching how to solve a
// problem is often necessary before a programmer can teach the computer how to
// solve it. Use doubles for the user inputs for a, b, and c. Since there are
// two solutions to a quadratic equation, output both x1 and x2.

#include <cmath>
#include <iostream>

int main() {
  std::cout << "Ingrese el valor de a:\n";
  double a = 0;
  std::cin >> a;
  std::cout << "Ingrese el valor de b:\n";
  double b = 0;
  std::cin >> b;
  std::cout << "Ingrese el valor de c:\n";
  double c = 0;
  std::cin >> c;

  double minusB = -(b);
  double insideSQRTfirstOperand = std::pow(b, 2);
  double insideSQRTsecondOperand = 4 * a * c;
  double squareRoot =
      std::sqrt(std::fabs(insideSQRTfirstOperand - insideSQRTsecondOperand));
  double twoTimesA = 2 * a;

  // this is just for testing
  //   std::cout << "\nb = " << minusB << "\n";
  //   std::cout << "sqrt( " << insideSQRTfirstOperand - insideSQRTsecondOperand
  //   << " )\n"; std::cout << "Divisor = " << twoTimesA << "\n";

  if (std::pow(b, 2) - (4 * a * c) == 0) {
    std::cout << "There is one real root\n";
    std::cout << (minusB + squareRoot) / twoTimesA << "\n";
  } else if (std::pow(b, 2) - (4 * a * c) < 0) {
    std::cout << "There are two complex roots\n";
    std::cout << minusB / twoTimesA << " + " << squareRoot / twoTimesA << "i"
              << "\n";
    std::cout << minusB / twoTimesA << " - " << squareRoot / twoTimesA << "i"
              << "\n";
  } else if (std::pow(b, 2) - (4 * a * c) > 0) {
    std::cout << "There are two real roots\n";
    std::cout << (minusB + squareRoot) / twoTimesA << "\n";
    std::cout << (minusB - squareRoot) / twoTimesA << "\n";
  }

  return 0;
}

// How to break it up into steps? I would say 3 steps work best.

// When b2−4ac = 0     there is one real root. (a = -4, b = 12, c= -9)
// When b2−4ac>0      there are two real roots. (a = 2, b = 45, c= 3)
// When b2−4ac<0      there are two complex roots. (a = 1, b = 2, c= 3)

// first option
//   double result = 0;
//   double result = (-b * std::sqrt(std::pow(b, 2) + (4 * a * c )))/ (2 * a);
//   std::cout << "\n" << result << "\n";

// I think the program works but:
// I don't know how to test the first if statement When b2−4ac = 0     there is
// one real root.
