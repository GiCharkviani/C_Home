#ifndef _MYSTRINGINIO_
#define _MYSTRINGINIO_

class Mystring {
    // Doesn't matter they are whether in private or in public area
    friend bool operator==(const Mystring &lhs, const Mystring &rhs);
    friend Mystring operator-(const Mystring &obj);
    friend Mystring operator+(const Mystring &lhs, const Mystring &rhs);
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