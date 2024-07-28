#include <iostream>
#include <list> 

void my_cpp_journey_print_int_list(const std::list<int>& list) {
    for (auto lis : list) {
        std::cout << lis << std::endl;
    }
}
