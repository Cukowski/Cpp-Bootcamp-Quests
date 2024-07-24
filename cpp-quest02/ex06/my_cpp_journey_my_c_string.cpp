#include <iostream>
#include <string>

const char* my_cpp_journey_my_c_string(const std::string& string){
    return string.c_str();
}

/*
const char* c_str() const;
Get C string equivalent
Returns a pointer to an array that contains a null-terminated sequence of characters (i.e., a C-string) representing the current value of the string object.
*/