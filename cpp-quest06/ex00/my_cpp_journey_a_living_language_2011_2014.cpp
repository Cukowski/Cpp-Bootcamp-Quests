#include <iostream>
#include <vector>

void f(char *p_char) {
  if (p_char == nullptr) {
    std::cout << "Nullptr unambiguous and is strongly-typed. <3" << std::endl;
  }
}

int main() {
  std::cout << "<Auto>" << std::endl;
  auto str = "Tesla"; // use the keyword auto.
  std::cout << "</Auto>" << std::endl;

  std::cout << "<Lambda>" << std::endl;
  auto glambda = [](auto a, auto&& b) { return a < b; }; // replace all XX with auto
  bool b = glambda(3, 3.14);
  std::cout << b << std::endl;
  std::cout << "</Lambda>" << std::endl;

  std::cout << "<Vector initialization>" << std::endl;
  std::vector<std::string> array; // <-- initialization with the following values ["hello", "world", "!"]
  array = {"hello", "world", "!"};
  for (auto it = array.begin(); it != array.end(); ++it) { // use auto :D
    std::cout << *it << std::endl;
  }
  std::cout << "</Vector initialization>" << std::endl;

  std::cout << "<Nullptr>" << std::endl;
  f(nullptr); // use nullptr.
  std::cout << "</Nullptr>" << std::endl;
  return 0;
}