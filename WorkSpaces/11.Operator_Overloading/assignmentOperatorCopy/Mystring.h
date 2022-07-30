#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring {
private:
    char *str;
public:
    Mystring(); // No-args constructor
    Mystring(const char *s);    // Overloaded constructor
    Mystring(const Mystring &source);   // Copy constructor
    ~Mystring();    // Destructor

    Mystring &operator=(const Mystring &rhs);   // Copy assignment

    void display() const;
    int get_length() const;
    const char *get_str() const;
};


#endif