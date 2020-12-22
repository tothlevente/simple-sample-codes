#include <iostream>

int main() {
  
  double current_earth_weight; // Current earth weight
  int visit; // Visiting plane
  
  std::cout << "Please enter your current earth weight: ";
  std::cin >> current_earth_weight;
  
  std::cout << "\nI have information for the following planets:\n\n";
  std::cout << "   1. Venus   2. Mars    3. Jupiter\n";
  std::cout << "   4. Saturn  5. Uranus  6. Neptune\n\n";
  
  std::cout << "Which planet are you visiting? ";
  std::cin >> visit;

  switch (visit) {
    case 1: //Venus
      current_earth_weight = current_earth_weight * 0.78;
    break;
      case 2: //Mars
      current_earth_weight = current_earth_weight * 0.39;
    break;
      case 3: //Jupiter
      current_earth_weight = current_earth_weight * 2.65;
    break;
      case 4: //Saturn
      current_earth_weight = current_earth_weight * 1.17;
    break;
      case 5: //Uranus
      current_earth_weight = current_earth_weight * 1.05;
    break;
      case 6: //Neptune
      current_earth_weight = current_earth_weight * 1.23;
    break;
  }
  
  std::cout << "Your weight is: " << current_earth_weight << "\n";
  
}
