// (1-cent coins), nickels (5-cent coins), dimes (10-cent coins), quarters
// (25-cent coins), half dollars (50-cent coins), and one-dollar coins (100-cent
// coins). Query the user separately for the number of each size coin, e.g.,
// “How many pennies do you have?” Then your program should print out something
// like this:
// You have 23 pennies. You have 17 nickels. You have 14 dimes. You
// have 7 quarters. You have 3 half dollars.
// The value of all of your coins is 573 cents.

#include <iostream>
#include <string>


// int main() {
//   int pennies = 1;
//   int nickels = 5;
//   int dimes = 10;
//   int quarters = 25;
//   int halfDollars = 50;
//   int oneDollars = 100;
//   int totalCents = 0;

//   std::cout << "How many pennies do you have?\n";
//   std::cin >> pennies;

//   std::cout << "How many nickels do you have?\n";
//   std::cin >> nickels;

//   std::cout << "How many dimes do you have?\n";
//   std::cin >> dimes;

//   std::cout << "How many quarters do you have?\n";
//   std::cin >> quarters;

//   std::cout << "How many halfDollars do you have?\n";
//   std::cin >> halfDollars;

//   std::cout << "How many oneDollars do you have?\n";
//   std::cin >> oneDollars;

//   totalCents = pennies + (nickels * 5) + (dimes * 10) + (quarters * 25) +
//                (halfDollars * 50) + (oneDollars * 100);
//   std::cout << "You have " <<totalCents << " cents" << "\n";

//   return 0;
// }

// Make some improvements: if only one of a coin is reported, make
// the output grammatically correct, e.g., 14 dimes and 1 dime (not 1 dimes).
// Also, report the sum in dollars and cents, i.e., $5.73 instead of 573 cents.

int main() {
  float pennies = 0;
  float nickels = 0;
  float dimes = 0;
  float quarters = 0;
  float halfDollars = 0;
  float oneDollars = 0;

  std::cout << "How many pennies do you have?\n";
  std::cin >> pennies;

  std::cout << "How many nickels do you have?\n";
  std::cin >> nickels;

  std::cout << "How many dimes do you have?\n";
  std::cin >> dimes;

  std::cout << "How many quarters do you have?\n";
  std::cin >> quarters;

  std::cout << "How many half dollars do you have?\n";
  std::cin >> halfDollars;

  std::cout << "How many one dollars do you have?\n";
  std::cin >> oneDollars;

  float dollars = (pennies + (nickels * 5) + (dimes * 10) + (quarters * 25) +
                   (halfDollars * 50) + (oneDollars * 100)) /
                  100;

  std::cout << "\nYou have " << pennies;
  if (pennies > 1) {
    std::cout << "pennies";
  } else {
    std::cout << "penny";
  }

  std::cout << "You have " << nickels << " nickel"
            << "\n";
  std::cout << "You have " << dimes << " dime"
            << "\n";
  std::cout << "You have " << quarters << " quarter"
            << "\n";
  std::cout << "You have " << halfDollars << " half dollar coins"
            << "\n";
  std::cout << "You have " << oneDollars << " one dollar coins"
            << "\n";
  std::cout << "You have $" << dollars << "\n";

  return 0;
}