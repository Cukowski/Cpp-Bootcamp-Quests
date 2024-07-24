#include <iostream>
#include <ostream>

class MyFirstClass{
    public:
        MyFirstClass(const std::string& name){
            std::cout << name << std::endl;
        }
        void hello_everybody(){
            std::cout << "Hello EveryBody" << std::endl;
        }
};



