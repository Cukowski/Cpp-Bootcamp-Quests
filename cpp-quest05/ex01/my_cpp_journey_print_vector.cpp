#include <iostream>
#include <vector>

void my_cpp_journey_print_vector(const std::vector<std::string>& array) {
    for (auto arr : array) {
        std::cout << arr << std::endl;
    }
    /*
    ALTERNATIVLY:

    for (int i = 0; i < array.size(); i ++) {
        std::cout << array[i] << std::endl;
    }
    */
}