#include <iostream>
#include <ostream>

class MyFirstClass{
    private:
        std::string name;

    public:
        MyFirstClass(const std::string& name){
            this->name = name;
        }
        void setName(const std::string &new_name){
            this->name = new_name;
        }
        const std::string& getName() const{
            return this->name;
        }

};