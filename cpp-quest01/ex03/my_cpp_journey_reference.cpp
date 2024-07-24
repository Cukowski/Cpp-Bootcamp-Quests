#include <iostream>

void my_initialize(int& nbr) {
  nbr = 0;
}

int main() {
  int nbr = 40;
  
  std::cout << nbr;
  std::cout << std::endl;
  my_initialize(nbr);
  std::cout << nbr;
  std::cout << std::endl;
  return 0;
}


// g++ -o my_cpp_journey_reference my_cpp_journey_reference.cpp

//./my_cpp_journey_reference