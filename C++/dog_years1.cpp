#include <iostream>

int main() {
  
  // Tim is 8 years old
  int dog_age = 8;
  
  // for your dog’s first two years
  int early_years = 21;
  
  // for your dog’s following years
  int later_years = (dog_age - 2)*4;
  
  // for your dog’s total human years
  int human_years = early_years + later_years;
  
  std::cout << "My name is Tim! Ruff ruff, I am " << human_years << " years old in human years.\n";
  
  return 0;
}
