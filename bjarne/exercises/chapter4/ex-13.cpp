// 13. Create a program to find all the prime numbers between 1 and 100. There
// is a classic method for doing this, called the “Sieve of Eratosthenes.” If
// you don’t know that method, get on the web and look it up. Write your program
// using this method.

#include <iostream>

int main() {
  int p = 2;
  std::string mark = "";


  for (int i = 1; i < 101; i++) {
    if (i % p == 0) {
    mark = " not prime";
    std::cout << i << "" << mark << "\n";
    } else {
      mark = "";
    std::cout << i << "" << mark << "\n";
    }
  }
  return 0;
}

// Hacer un loop que vaya el nested loop?

// Create a list of consecutive integers from 2 through n: (2, 3, 4, ..., n).

// Initially, let p equal 2, the smallest prime number.

// Enumerate the multiples of p by counting in increments of p from 2p to n,
// and mark them in the list (these will be 2p, 3p, 4p, ...; the p itself should
// not be marked).

// Find the smallest number in the list greater than p that is not marked.
// If there was no such number, stop.
// Otherwise, let p now equal this new number (which is the next prime), and
// repeat from step 3.

// When the algorithm terminates,
// the numbers remaining not marked in the list are all the primes below n.

// mini sieve of eratosthenes
// 10 total numbers
// p = 2

// 2
// 3           // Este nuevo numero debe ser > p %% !% == 0
// 4 not prime
// 5           // este sera el proximo numero primo
// 6 not prime // este numero ya esta marcado, si contiene marca ignorarlo
// 7
// 8 not prime
// 9           // este numero se marcara con el nested loop
// 10 not prime
//
//Hay 2 tipos de numeros: p y nop ...quiza con un booleano mejor?
// 
// Distribuir lógica en diferentes funciones
//
//
//