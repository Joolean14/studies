// 9. Try to calculate the number of rice grains that the inventor asked for in
// exercise 8 above. You’ll find that the number is so large that it won’t fit
// in an int or a double. Observe what happens when the number gets too large to
// represent exactly as an int and as a double. What is the largest number of
// squares for which you can calculate the exact number of grains (using an
// int)? What is the largest number of squares for which you can calculate the
// approximate number of grains (using a double)?

#include <iostream>
#include <limits>

int main() {
  double currentRiceCount = 1;

  for (int currentSquare = 1; currentSquare <= 64; currentSquare++) {
    std::cout << currentSquare << "\tCurrent rice count: " << currentRiceCount
              << "\n";
    currentRiceCount *= 2;

    if (currentSquare == 11) {
      std::cout << "On the 11th square you give the inventor at least 1000 "
                   "grains of rice\n";
    } else if (currentSquare == 21) {
      std::cout << "On the 21th square you give the inventor at least "
                   "1,000,000 grains of rice\n";
    } else if (currentSquare == 31) {
      std::cout << "On the 31th square you give the inventor at least "
                   "1,000,000,000 grains of rice\n";
    }
  }

  std::cout << "Minimum value for int: " << std::numeric_limits<int>::min()
            << '\n';
  std::cout << "Maximum value for unsigned long: " << std::numeric_limits<unsigned long>::max()
            << '\n';
  std::cout << "Minimum value for double: " << std::numeric_limits<double>::min()
            << '\n';
  std::cout << "Maximum value for double: " << std::numeric_limits<double>::max()
            << '\n';

  return 0;
}

// Noto que me enredo muy facil en la documentacion algo tan secillo como esto
// de numeric limits si la documentacion es demasiado 'axiomatica'? Cuando
// encuentro una documentacion mas sencilla es mas facil. Sera el camino
// aprender a leer esa documentacion 'axiomatica'? Como la de cppreference?


// double:  64	Current rice count: 9.22337e+18 = 2507189,90681543
// Minimum value for double: 2.22507e-308
// Maximum value for double: 1.79769e+308 = 488970,806020254


// int: 31	Current rice count: 1073741824
// Minimum value for int: -2147483648
// Maximum value for int: 2147483647

