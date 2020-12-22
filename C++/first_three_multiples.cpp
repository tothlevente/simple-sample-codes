#include <iostream>
#include <vector>

std::vector <int> first_three_multiples(int num) {
  
    std::vector<int> element(3);
  
    element[0] = 1 * num;
    element[1] = 2 * num;
    element[2] = 3 * num;
  
    return element;
}

int main() {
  for (int element : first_three_multiples(8)) {
    std::cout << element << "\n";
  }
}
