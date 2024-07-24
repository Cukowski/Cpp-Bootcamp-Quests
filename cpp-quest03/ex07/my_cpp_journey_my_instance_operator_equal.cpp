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
        void setName(const std::string &new_name){
            this->name = new_name;
        }
        const std::string& getName() const{
            return this->name;
        }        
        bool operator==(const MyFirstClass &other) const {
            return name == other.name;
        }
        bool operator!=(const MyFirstClass &other) const {
            return name != other.name;
        }
        void operator=(const MyFirstClass& other){
            this->setName(other.getName());
        }

};