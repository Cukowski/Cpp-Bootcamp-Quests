#include <iostream>
#include <ostream>

class MyFirstClass{
    private:
        std::string name;

    public:
        MyFirstClass(const std::string& name){
            this->name = name;
            std::cout << "Hello " + name << std::endl;
        }
        ~MyFirstClass(){
            std::cout <<  "Good bye " + name << std::endl;
        }
        
        // Overloading the equality operator
        bool operator==(const MyFirstClass &other) const {
            return name == other.name;
        }

        // Overloading the inequality operator
        bool operator!=(const MyFirstClass &other) const {
            return name != other.name;
        }

};