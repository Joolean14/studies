// Escriba un programa que reciba un numero de Millas del usuario y las
// convierta a kilometros.
// km = miles * 1.60934
// 5 miles equals 8.0467 kilometers

#include <iostream>
#include <string>

int main() {
  std::string userInput = "";
  std::cout << "Ingrese un numero de millas para convertir a kilometros:"
            << "\n";
  std::cin >> userInput;
  
  // std::stod() converts strings to doubles
  double miles = std::stod(userInput);
  double kms = miles * 1.60934;

  std::cout << kms << "\n";
  return 0;
};
