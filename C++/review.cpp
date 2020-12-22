#include <iostream>
#include <vector>

int main() {
  
  std::vector<int> example = {2, 4, 3, 6, 1, 9};
  int sum_numbers = 0;
  int product_numbers = 1;
  
  for (int i = 0; i < example.size(); i++) {
    if (example[i] % 2 == 0) {
      sum_numbers = sum_numbers + example[i];
    } else {
      product_numbers = product_numbers * example[i];
    }
  }
  
  std::cout << "Sum of even numbers is: " << sum_numbers << "\n";
  std::cout << "Product of odd numbers is: " << product_numbers << "\n";
  
}
