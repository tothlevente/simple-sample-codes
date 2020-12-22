/*
  Rock Paper Scissors
  (The Big Bang Theory)
*/

#include <iostream>
#include <stdlib.h>

int main() {
  
  srand (time(NULL));
  
  int computer = rand() % 3 + 1;
  
  int user = 0;
  
  std::cout << "========================\n";
  std::cout << "Rock, Paper, or Scissors\n";
  std::cout << "========================\n";
  
  std::cout << "1) ✊ Rock\n";
  std::cout << "2) ✋ Paper\n";
  std::cout << "3) ✌️ Scissors\n";
  
  std::cout << "shoot! ";
  
  std::cout << "Please type your chosen number: ";
  std::cin >> user;
  
  // ~~~ The decisions: ~~~
  
  if (user == 1) {
    std::cout << "You chosen: ✊ Rock\n";
  } else if (user == 2) {
    std::cout << "You chosen: ✋ Paper\n";
  } else if (user == 3) {
    std::cout << "You chosen: ✌️ Scissors\n";
  } else {
    std::cout << "You used invalid number! \n";
    return 0;
  }
  
  if (computer == 1) {
    std::cout << "Computer chosen: ✊ Rock\n";
  } else if (computer == 2) {
    std::cout << "Computer chosen: ✋ Paper\n";
  } else {
    std::cout << "Computer chosen: ✌️ Scissors\n";
  }

// ~~~ The results: ~~~
  
// Tie
if (user == computer) {
  std::cout << "It's a tie!\n";
}
  
// Rock
  
  else if (user == 1) {
    if (computer == 2) {
      std::cout << "You last!\n";
    }
    
    if (computer == 3) {
      std::cout << "You win!\n";
    }
  }
  
// Paper
  
  else if (user == 2) {
    if (computer == 1) {
      std::cout << "You win!\n";
    }
    
    if (computer == 3) {
      std::cout << "You last!\n";
    }
  }
  
// Scissors
  
    else if (user == 3) {
    if (computer == 1) {
      std::cout << "You win!\n";
    }
    
    if (computer == 2) {
      std::cout << "You last!\n";
    }
  }
  return 0;
}
