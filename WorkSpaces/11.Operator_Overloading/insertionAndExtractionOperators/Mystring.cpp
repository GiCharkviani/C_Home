#include <iostream>
#include <cstring>
#include "Mystring.h"

Mystring::Mystring() {
    str = new char[1];
    *str = '\0';
}

Mystring::Mystring(const char *str_val) {
    str = new char[std::strlen(str_val) + 1];
    std::strcpy(str, str_val);
}

// Overloaded insertion operator
std::ostream &operator<<(std::ostream &os, const Mystring &rhs) {
    os << rhs.str;
    return os;
}

// Overloaded extraction operator
std::istream &operator>>(std::istream &in, Mystring &rhs) {
    char *buff = new char[1000];
    in >> buff;
    rhs = Mystring {buff};
    delete [] buff;
    return in;
}



void Mystring::display() const {
    std::cout << str << ": " << get_length() << std::endl;
}

int Mystring::get_length() const {
    return std::strlen(str);
}

const char *Mystring::get_str() const {
    return str;
}
