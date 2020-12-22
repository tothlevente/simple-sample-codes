#include <iostream>

int main() {
  
int year = 0;

std::cout << "Enter year: ";
std::cin >> year;
  
  if (year < 1000 || year > 9999) {
    std::cout << "Invalid entry.\n";
  } else if (year % 4 != 0) {
    std::cout << "It is a common year!\n";
  } else if (year % 100 != 0) {
    std::cout << "It is a leap year!\n";
  } else if (year % 400 != 0) {
    std::cout << "It is a common year!\n";
  } else {
    std::cout << "It is a leap year!\n";
  }
}
