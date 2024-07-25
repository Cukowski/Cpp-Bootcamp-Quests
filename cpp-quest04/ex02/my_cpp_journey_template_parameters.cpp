#include <iostream>
#include <iomanip>

template <typename T>
void print(const T& val) {
    std::cout << val;
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

/*
Use const T&: When dealing with large objects, classes, or user-defined types to avoid unnecessary copying.
Use const T: When dealing with small, simple data types where the overhead of copying is negligible.
For a std::string (which can be large), using const T& is more efficient:
*/