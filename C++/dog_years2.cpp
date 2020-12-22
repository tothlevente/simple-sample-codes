#include <iostream>

int main() {
  
  std::string dog_name;
  int dog_age, early_years, later_years, human_years;
  
  std::cout << "Enter your dog's name: ";
  std::cin >> dog_name;
  
  std::cout << "Enter your dog's age: ";
  std::cin >> dog_age;
  
  // for your dog’s first two years
  early_years = 21;
  
  // for your dog’s following years
  later_years = (dog_age - 2)*4;
  
  // for your dog’s total human years
  human_years = early_years + later_years;
  
  std::cout << "My name is " << dog_name << "!\nI am " << human_years << " years old in human years.\n";
  
  return 0;
}
