// 7 Do exercise 6, but with three string values. So, if the user enters the
// values Steinbeck, Hemingway, Fitzgerald, the output should be Fitzgerald,
// Hemingway, Steinbeck.

// Hacer la implementacion con if-else y comparaciones, igual que mi
// implementacion del ejercicio 5 y 6. Aproveche que los operadores < > == etc. funcionan con strings. 


#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>

void printToConsole(std::vector<std::string> names) {
  for (int i = 0; i < names.size(); i++) {
    std::cout << names[i] << "\n";
  }
}

bool compare(std::string a, std::string b) {
  // returns 1 if string a is alphabetically less than string b
  return a < b;
}

std::vector<std::string> alphabeticallySort(std::vector<std::string> a) {
  int n = a.size();

  return a;
}

int main() {
  std::vector<std::string> names;
  std::string inputName1 = "";
  std::string inputName2 = "";
  std::string inputName3 = "";

  std::cout << "Ingrese un nombre\n";
  std::cin >> inputName1;
  names.push_back(inputName1);
  std::cout << "Ingrese segundo nombre\n";
  std::cin >> inputName2;
  names.push_back(inputName2);
  std::cout << "Ingrese tercer nombre\n";
  std::cin >> inputName3;
  names.push_back(inputName3);

  names = alphabeticallySort(names);
  std::cout << "Alphabetically sorted inputs\n";
  printToConsole(names);

  return 0;
}

// Create a vector
// Implement sort()
// How to cout a vector?
// strcmp
// https://www.includehelp.com/cpp-programs/sort-names-in-an-alphabetical-order.aspx
