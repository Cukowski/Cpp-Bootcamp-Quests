#include <iostream>
#include <vector> 

void my_cpp_journey_print_int_vector(const std::vector<int>& array) {
    for (auto arr : array) {
        std::cout << arr << std::endl;
    }
}