// 11. Create a program to find all the prime numbers between 1 and 100.

bool esPrimo(int n) {
  for (i = 1; i<n; i=i+1) {
    if (n % i) == 0 and (n!=i or i!=1)  {
        return false
      }
  }
  return true;
}

main {
for  n = 1 hasta 100 {
    bool esPrimo = esPrimo(n);
}
}





#include <cmath>
#include <iostream>

int main() {

  std::cout << " The prime numbers between 1 and 100 are: " << std::endl;

  for (double i = 1; i < 101; i++) {

    for (double j = 3; j < i; j++) {
    //   std::cout << i << std::endl;
    if (std::fmod(i, j)



        != 0) {
        break;
      } else {
        std::cout << i << " is a prime number" << std::endl;
              }
    }
  }

  return 0;
}

// if (i % 2 == 0) {
//   continue;
// }