#include <iostream>
#include <string>

class Plastic {
    private:
        std::string name;

    public:
        Plastic(const std::string& name) : name(name){
            std::cout << "New plastic: " << name << std::endl;
        }
        ~Plastic() {
            std::cout << "Recycling plastic: " << name << std::endl;
        }
};

Plastic* create_plastic(const std::string& plastic_name){
    return new Plastic(plastic_name);
}

/*
Initializer List (: name(name)): Initializes member variables before the constructor body runs. More efficient for complex types.
Assignment (this->name = name): Assigns values inside the constructor body. Can be less efficient for complex types.
*/