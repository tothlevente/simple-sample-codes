#include <iostream>

std::string needs_water(int days, bool is_succulent) {
  
  std::string conditional;
  
  if (is_succulent == false && days > 3) {
    return conditional = "Time to water the plant.";
  } else if (is_succulent == true && days <= 12) {
    return conditional = "Don't water the plant!";
  } else if (is_succulent == true && days >= 13) {
    return conditional = "Go ahead and give the plant a little water.";
  } else {
     return conditional = "Don't water the plant!";
  }
}

int main() {
  
  std::cout << needs_water(10, false) << "\n";
  
}
