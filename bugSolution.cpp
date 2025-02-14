#include <iostream>
#include <vector>

int main() {
  std::vector<int> vec = {1, 2, 3};
  //Avoid direct pointer access
  for (int& x : vec) {
    x *= 2; 
  }
  vec.push_back(4);
  for (int x : vec) {
    std::cout << x << " ";
  }
  std::cout << std::endl; 
  return 0;
} 