#include <cstring>
#include <iostream>
#include "Mystring.h"

// No-args constructor
Mystring::Mystring(): str{nullptr} {
    str = new char[1];
    *str = '\0';
};

// Overloaded constructor
Mystring::Mystring(const char *s): str {nullptr} {
    if(s==nullptr) {
        str = new char[1];
        *str = '\0';
    } else {
        str = new char[std::strlen(s) + 1];
        std::strcpy(str, s);
    }
};

// Copy constructor
Mystring::Mystring(const Mystring &source): str{nullptr} {
    str = new char[std::strlen(source.str) + 1];
    std::strcpy(str, source.str);
};

// Move constructor
Mystring::Mystring(Mystring &&source): str{source.str} {
    source.str = nullptr;
    std::cout << "Move constructor used" << std::endl;
}


// Destructor 
Mystring::~Mystring() {
    if(str == nullptr) {
        std::cout << "Calling destructor for Mystring: nullptr" << std::endl;
    } else {
        std::cout << "Calling destructor for Mystring: " << str << std::endl;
    }
    delete [] str;
};

// Copy assignment
Mystring &Mystring::operator=(const Mystring &rhs) {
    std::cout << "Copy assignment" << std::endl;
    if(this == &rhs)
        return *this; // reference back

    delete [] str; // or just: delete [] this->str;

    str = new char[std::strlen(rhs.str) + 1];
    
    std::strcpy(this->str, rhs.str);
    return *this;
}

// Move assignment -- this will get called after
Mystring &Mystring::operator=(Mystring &&rhs) {
    std::cout << "Using move assignment" << std::endl;
    if(this == &rhs)
        return *this;
    
    delete [] str;

    str = rhs.str;
    rhs.str = nullptr; // neccessary because when temporary object  gets destroyied, will take this data with it
    return *this;
};



// Display method
void Mystring::display() const {
    std::cout << str << " : " << get_length() << std::endl;
};

// length getter
int Mystring::get_length() const {
    return std::strlen(str);
};

// string getter
const char *Mystring::get_str() const {return str;};

