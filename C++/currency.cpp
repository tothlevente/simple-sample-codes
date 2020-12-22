#include <iostream>

int main() {
  
  double pesos;
  double reais;
  double soles;
  double dollars;
  
  std::cout << "Enter number of Colombian Pesos: ";
  std::cin >> pesos;
  
  std::cout << "Enter number of Brazilian Reais: ";
  std::cin >> reais;
  
  std::cout << "Enter number of Peruvian Soles: ";
  std::cin >> soles;
  
  // 1 Mexican Peso equals 0.041 United States Dollar
  // 1 Brazilian Real equals 0.19 United States Dollar
  // 1 Sol equals 0.29 United States Dollar
  
  dollars = (0.041* pesos) + (0.19 * reais) + (0.29* soles);
  
  std::cout << "US Dollars = $" << dollars << "\n";
  
  return 0;
}
