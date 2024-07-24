#include <iostream>
#include <iomanip>
/*
void print_string(std::string string){
    std::cout << string;
}

void print_int(const int nbr){
    std::cout << nbr;    
}

void print_float(const float nbr){
    std::cout << nbr;    
}

void print_char(const char c){
    std::cout << c;    
}
*/
void print(std::string string){
    std::cout << string;
}

void print(const int nbr){
    std::cout << nbr;    
}

void print(const float nbr){
    std::cout << nbr;    
}

void print(const char c){
    std::cout << c;    
}


int main() {
  const int integer = 40;
  const char c      = '.';
  std::string s1    = "I'm ";
  std::string s2    = "years old";

  print(s1);
  print(integer);
  print(" ");
  print(s2);
  print(c);
  print('\n');
  return 0;
}

// g++ -o my_cpp_journey_variadic_parameters my_cpp_journey_variadic_parameters.cpp

// ./my_cpp_journey_variadic_parameters