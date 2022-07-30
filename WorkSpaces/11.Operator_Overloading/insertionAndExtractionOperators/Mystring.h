#ifndef _MYSTRINGINIO_
#define _MYSTRINGINIO_

#include <iostream>

class Mystring {
    friend std::ostream &operator<<(std::ostream &os, const Mystring &rhs);
    friend std::istream &operator>>(std::istream &in, Mystring &rhs);
private:
    char *str;
public:
    Mystring();
    Mystring(const char *str);

    void display() const;
    int get_length() const;
    const char *get_str() const;
};


#endif