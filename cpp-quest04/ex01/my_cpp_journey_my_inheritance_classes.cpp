#include <iostream>

class Mammal {
public:
    Mammal() : life(10) {
        std::cout << "Constructor Mammal" << std::endl;
    }

    int getLife() const {
        return life;
    }

protected: // by this life var is accessible within the same class and by derived classes
    int life;
};

class Human : public Mammal {
public:
    Human(const std::string& name) : name(name) {
        std::cout << "Constructor Human" << std::endl;
        life = 100;
    }

    const std::string& getName() const {
        return name;
    }

private:
    std::string name;
};


/*
class Base {
private:
    int privateVar; // Only accessible within Base

protected:
    int protectedVar; // Accessible within Base and derived classes

public:
    int publicVar; // Accessible from anywhere
};
*/