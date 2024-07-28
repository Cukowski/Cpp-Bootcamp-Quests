#include <iostream>
#include <iomanip>
#include <ostream>
#include <vector>
#include <map>

std::map<std::string, int> my_cpp_journey_build_mountains(const std::vector<std::string>& mountain_names, const std::vector<int>& mountain_sizes) {
  
    std::map<std::string, int> mountains;

    for (int i = 0; i < mountain_names.size(); i ++) {
        mountains[mountain_names[i]] = mountain_sizes[i];
    }

    return mountains;
}

void my_cpp_journey_print_string_int_map(const std::map<std::string, int>& mountains) {
    for (auto mountain : mountains) {
        std::cout << mountain.first << " -> " << mountain.second << std::endl;
    }
}

/*
int main() {
  const std::vector<std::string> mountain_names {"Mount Everest", "K2", "Kangchenjunga", "Lhotse", "Makalu", "Cho Oyu", "Dhaulagiri", "Manaslu", "Nanga Parbat", "Annapurna"};

  const std::vector<int> mountain_sizes {8848, 8611, 8586, 8516, 8485, 8188, 8167, 8163, 8126, 8091};

  const std::map<std::string, int> mountains = my_cpp_journey_build_mountains(mountain_names, mountain_sizes);

  my_cpp_journey_print_string_int_map(mountains);
  return 0;
}
*/