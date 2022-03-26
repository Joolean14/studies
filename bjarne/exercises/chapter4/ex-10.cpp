// 10. Write a program that plays the game “Rock, Paper, Scissors.”
// Research is a common task for programmers. Use a switch-statement to solve
// this exercise. Also, the machine should give random answers (i.e., select the
// next rock, paper, or scissors randomly). Real randomness is too hard to
// provide just now, so just build a vector with a sequence of values to be used
// as “the next value.” If you build the vector into the program, it will always
// play the same game, so maybe you should let the user enter some values. Try
// variations to make it less easy for the user to guess which move the machine
// will make next.

#include <cstdlib>
#include <iostream>
#include <vector>

void printGameMenu() {
  std::cout << "\tPiedra, Papel o Tijera\n";
  std::cout << "1. Papel\n"
            << "2. Tijera\n"
            << "3. Piedra\n\n";
}

int getPlayerMove() {
  std::cout << "Ingrese su seleccion\n";
  int userMove = 0;
  std::cin >> userMove;

  return userMove;
}

int genCpuMove() {
  int cpuMove = rand() % 3 + 1;
  std::cout << "La seleccion de la CPU es: \n" << cpuMove << "\n";

  return cpuMove;
}

void chooseWinner(int userMove, int cpuMove) {

  if (userMove == 1 || cpuMove == 2) {
    std::cout << "CPU gana!!!\n";
  }

}

int main() {
  int paper = 1;
  int scissors = 2;
  int rock = 3;


  printGameMenu();
  getPlayerMove();
  genCpuMove();
  chooseWinner(userMove, cpuMove);


  return 0; 
}

// Rock 1, Paper 2, Scissors 3
// Rock beats Scissors  {1, 3} -> 1
// Paper beats Rock {2 ,1} -> 2
// Scissors beats Paper {3,2} -> 3

// rock && paper

// intento switch con char
// intento switch con int
// https://dev.to/maytd/simple-console-rock-paper-scissors-in-c-g35