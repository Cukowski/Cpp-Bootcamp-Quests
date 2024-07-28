#include <iostream>
#include <queue> 

void my_cpp_journey_print_string_queue(std::queue<std::string>& queue) {
    while (!queue.empty()) {
        std::cout << queue.front() << std::endl;
        queue.pop();
    }
}

/*
Common Member Functions:
empty(): Checks if the queue is empty.
size(): Returns the number of elements in the queue.
front(): Accesses the first element.
back(): Accesses the last element.
push(const T& value): Adds an element to the back of the queue.
pop(): Removes the front element.
*/