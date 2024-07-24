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

};